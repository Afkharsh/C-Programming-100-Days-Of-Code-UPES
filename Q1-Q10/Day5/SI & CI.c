/*Write a program to calculate simple and compound interest for given principal, rate, and time.*/
/*Name-HARSH*/
/*SAP_ID-590028742*/
/*course-BCA*/
/*Batch-6*/
#include <stdio.h>
#include <math.h>
int main() {
    double principal, rate, time;
    double simple_interest, compound_interest;

    scanf("%lf %lf %lf", &principal, &rate, &time);

    simple_interest = (principal * rate * time) / 100.0;

    double amount = principal * pow((1 + rate / 100.0), time);
    compound_interest = amount - principal;
    printf("Simple Interest=%g, Compound Interest=%g\n", simple_interest, compound_interest);
    return 0;
}
