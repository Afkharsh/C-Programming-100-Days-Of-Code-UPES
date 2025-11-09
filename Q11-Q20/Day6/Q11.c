//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
//Name: Harsh
//SAP ID: 590028742
//Course-BCA B6
#include <stdio.h>
int main() 
{
    int n;
    scanf("%d", &n);
    if(n >= 0) {
        if(n == 0)
            printf("Zero\n");
        else
            printf("Positive\n");
    } else {
        printf("Negative\n");
    }
    return 0;
}
