// GUESS A GAME //

#include<stdio.h>
int main()
{
	int n,flag=0;
	printf("Guess the number :");	
	while (n>0)
	{	
		scanf("%d",&n);
		if(n>9)
		{printf("%d is too high\n",n);
		}
		else if (n<9)
		{printf("%d is too low\n",n); 
		}
		else
		{flag=1;
		 break;
		}
	}
	if(flag==1)
	{printf("you guessed the right number");
	}


	return 0;
}
