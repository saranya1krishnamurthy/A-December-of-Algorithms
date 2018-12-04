#include<stdio.h>
#include<conio.h>
void main()
{int tri1[3],tri2[3],angle1[3],angle2[3],i,flag=0;
 printf("\nenter 3 sides of the triangles");
 for(i=0;i<3;i++)
 {scanf("%d",&tri1[i]);
  scanf("%d",&tri2[i]);
 }
 printf("\nenter the angles of triangles");
 for(i=0;i<3;i++)
 {scanf("%d",&angle1[i]);
   scanf("%d",&angle2[i]);
 }
 if((tri1[0]/tri2[0])==(tri1[1]/tri2[1])&&(tri1[1]/tri2[1])==(tri1[2]/tri2[2]))
 {printf("by SSS the triangles are similar");
 flag=1;}
 if((angle1[1]==angle2[1]||angle1[0]==angle2[0]||angle1[2]==angle2[2])&&flag==1)
 printf("\nby SAS the triangle are similar");
 if((angle1[0]==angle2[0])&&(angle1[1]==angle2[1])&&(angle1[2]==angle2[2]))
 printf("\nby AAA the triangles are similar");
 
 getch();
}
