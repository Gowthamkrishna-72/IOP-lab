//

#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the number of voters :");
    scanf("%d",&n);
    int can[5],i,sp=0,vote;
    for(i=0;i<5;i++)
    {
        can[i]=0;
    }
    for(i=0;i<n;i++)
    {   printf("Enter the vote number %d : ",i+1);
        scanf("%d",&vote);
        if(vote>=1 && vote<=5)
        {
            can[vote-1]++;
        }
        else
        {
            sp++;
        }
    }
    printf("\nvote count :\n");
    for(i=0;i<5;i++)
    {
        printf("candidate %d : %d votes\n",i+1,can[i]);
    }
    printf("spoilt ballots : %d \n",sp);
}

