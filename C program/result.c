#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,c,d,e,s,p;
    printf("Enter matks of maths:");
    scanf("%f", &a);
     printf("Enter matks of English:");
    scanf("%f", &b);
     printf("Enter matks of Gujrati:");
    scanf("%f", &c);
     printf("Enter matks of social science:");
    scanf("%f", &d);
     printf("Enter matks of science:");
    scanf("%f", &e);
    s = a+b+c+d+e;
    p = s/5;
    printf("Total marks = %f",s);
        printf("\n Total marks = %f",p);
        getch();


}