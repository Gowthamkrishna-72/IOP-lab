// 

#include<stdio.h>
int main()
{
	int a[10][3],t[10],r,mt,mr;
	int i,j,high;
	printf("Enter marks of 10 students in 3 subjects:\n");
	for(i=0;i<10;i++)
	{printf("Student %d:\n",i+1);
	 for(j=0;j<3;j++)
	 {printf("subject %d:",j+1);
	  scanf("%d",&a[i][j]);
	 }
	}
	//
	for(i=0;i<10;i++)
	{ t[i]=0;
	  for(j=0;j<3;j++)
	  {t[i]=t[i]+a[i][j];
	  }
	  printf("\n Total marks obtained by student %d: %d",i+1,t[i]);
	}
	//
	for(j=0;j<3;j++)
	{	 high=a[0][j];
		 r=1;
		 for(i=0;i<10;i++)
		 {if(a[i][j]>high)
		    {high=a[i][j];
		     r=i+1;
			}
		 }
		 printf("\n Highest marks in subject %d : %d is secured by student %d",j+1,high,r);
	}
	//
	for(i=0;i<10;i++)
	{mt=0;
	 mr=1;
	  if(t[i]>mt)
	  {mt=t[i];
	   mr=i+1;
	  }
	}
	printf("\n Student %d obtained the highest total marks :%d",mr,mt);
	return 0;
}
