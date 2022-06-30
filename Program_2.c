#include <stdio.h>

int main()
{
    int n,i,m,count=0;
    printf("Provide Input:- \n");
    scanf("%d",&n);
    
    while(n>0)
    {
        i = n;
        while(i!=0)
        {
            m = i%10;
            printf("m is : %d\n", m);
            if(m==1)
            {
                count++;
                printf("count is : %d\n", count);
            }
            i = i/10;
              printf("i is : %d\n", i);
        }
        n--;
    }
printf("No. of one's are:- %d\n",count);
    return 0;
}
