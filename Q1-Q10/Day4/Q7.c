/*Write a program to swap two numbers without using a third variable.*/
/*Name-HARSH*/
/*SAP_ID-590028742*/
/*course-BCA*/
/*Batch-6*/
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swap: %d %d\n", a, b);
    return 0;
}
