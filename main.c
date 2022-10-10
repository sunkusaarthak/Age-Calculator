#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int day,month,year;
int prday,prmonth,pryear;
int a,b,c,d;
clrscr();
printf("\t\t\t\thai\n");
delay(1000);
printf("\t\tWelcome to age calculator\n");
delay(2000);
printf("The age calculator will begin in \n");
delay(1000);
printf("\t\t3\n");
delay(1000);
printf("\t\t2\n");
delay(1000);
printf("\t\t1\n");
delay(1000);
printf("\t\tGo\n");
delay(1000);
printf("Enter the present year::");
scanf("%d",&pryear);
printf("Enter the year which you born::");
scanf("%d",&year);
a=pryear-year;
printf("Enter the month which you born::");
scanf("%d",&month);
printf("Enter the present month::");
scanf("%d",&prmonth);
if(month>=prmonth)
{
b=a+prmonth-month;
}
else
{
b=a;
}
if(prmonth<=month)
{
d=12+prmonth-month;
}
else
{
d=prmonth-month;
}
if(month==prmonth)
{
b=b-1;
}
printf("Enter the day which you born::");
scanf("%d",&day);
printf("Enter the present day::");
scanf("%d",&prday);
if(prday>=day)
{
c=prday-day;
}
else
if(month==1||3||5||7||8||10||12)
{
c=31+(prday-day);
}
else
{
c=30+(day-prday);
}
if(day>20)
{
d=d-1;
}
printf("Now your age is\n");
delay(1000);
if(b==1||b==0||b==-1)
{
printf("\t\t\t%d year",b);
}
else
{
printf("\t\t\t%d years",b);
}
delay(1000);
if(d==1||d==0)
{
printf("\n\t\t\t%d month",d);
}
else
{
printf("\n\t\t\t%d months",d);
}
delay(1000);
if(c==1||c==0)
{
printf("\n\t\t\t%d day",c);
}
else
{
printf("\n\t\t\t%d days",c);
}
/*printf("\t\t\t%d Years",b);
delay(1000);
printf("\n\t\t\t%d Months",d);
delay(1000);
printf("\n\t\t\t%d  Days\n",c);*/
delay(1000);
printf("\n\tThanks for spending your valuable time\n");
delay(1000);
printf("\n\t\tpress any key to exit");
getch();
}



















