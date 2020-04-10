#include<stdio.h>
main()
{
float t,r,p,si;
printf("Enter principle amount,time,rate of intrest:");
scanf("%f%f%f",&p,&t,&r);
si=p*t*r/100;
printf("simple intrest= %f",si);
}
