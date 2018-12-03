#include<stdio.h>
#include<conio.h>
void main()
{int beg,mid,last,i,n,a[20],ele,flag=0;
 printf("\nenter num of elements");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("\nenter the element to be searched");
 scanf("%d",&ele);
 beg=0;last=n-1;
 while(beg<last)
 {mid=(beg+last)/2;
  if(a[mid]==ele)
  {printf("%d is present in %d",ele,mid+1);
    flag=1;
   break;
  }
   else if(a[mid]>ele)
  last=mid-1;
  else 
  last=mid+1;
  if(flag==0)
 printf("\nthe element is not present");
 getch();
 }}
