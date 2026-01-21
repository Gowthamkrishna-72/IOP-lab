// PERMUTATION //

#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],temp;
	int len;
	printf("Enter the string :");
	gets(str);
	len=strlen(str);
	
	
	

//

	printf("\nBubble");
	for(int i=0;i<len;i++)
	{
		
			for(int j=0;j<len-i-1;j++)
		    {	printf("\t%s",str);
    	        printf("\n");
		        temp=str[j];
	 	        str[j]=str[j+1];
		   		str[j+1]=temp; 
	       
	        }
	}

}

/*for(int i=0;i<len-1;i++)
	{for(int j=i+1;j<len;j++)
	  {  printf("%s\t",str);
        printf("\n");
	    temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	
	   
	  } 
	}
	*/	
