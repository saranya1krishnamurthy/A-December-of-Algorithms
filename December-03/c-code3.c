#include<stdio.h>
#include<conio.h>
void main()
{int num,sum1=0,sum2=0,i=0,p[10],count=0;
 printf("\nenter a num");
 scanf("%d",&num);
 while(num!='\0')
 {p[i]=num%10;
  num/=10;
   count++;i++;
 }
 if(count/2==0)
 {for(i=0,j=count-1;i<count/2;i++,j--)
  sum1+=p[i] ;
  sum2+=p[j];
 }
 if(sum1==sum2)
 printf("\nthe number is a lucky number");
 else
 printf("\nthe number is not a lucky number");
 getch();
}
