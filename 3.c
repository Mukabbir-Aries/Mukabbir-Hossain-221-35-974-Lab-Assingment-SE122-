#include<stdio.h>
main()
//Mukabbir 974
{
char g,s;
int a;
printf("Enter Martial Status m For Married And u For Unmarried ");
scanf("%c",&s);
printf("\nEnter Gender m For Male And f For Female ");
scanf("\n%c",&g);
printf("\nEnter Age ");
scanf("\n%d",&a);
if(((s=='m'))||((s=='u')&&(g=='m')&&(a>30))||((s=='u')&&(g=='f')&&(a>25)))
printf("\nDriver Is Insured");
else
printf("\nDriver Is Not Insured");
getch();
}
