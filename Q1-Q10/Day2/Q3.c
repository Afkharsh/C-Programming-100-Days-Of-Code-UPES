/*Write a program to calculate the area and perimeter of a rectangle given its length and breadth.*/
/*Name-HARSH*/
/*SAP_ID-590028742*/
/*course-BCA*/
/*Batch-6*/
#include <stdio.h>
int main(){
    int a;
    int b;
    int Perimeter;
    int Area;
    printf("enter the Length of Rectangle : ");
    scanf("%d",&a);
    printf("enter the Breath of Rectangle : ");
    scanf("%d",&b);
    Perimeter=2*(a+b);
    printf("perimeter of Rectangle = %d\n",Perimeter);
    Area=a*b;
    printf("Area of Rectangle %d\n",Area);
    return 0;
}
