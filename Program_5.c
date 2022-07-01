#include<stdio.h>
int main()
 {

     int a[]={3,6,9,1};
     int temp,i,j,diff;
     int n =sizeof(a)/sizeof(a[0]);   
     printf("Array size: %d\n",n);
     if(n<2){
         return 0;
     }
     for (int i=0;i<n;i++)
     {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }    
        }

     }

     for(i=0;i<n;i++)
     {
        printf("%d",a[i]);
     }
    printf("\n");

     diff = 0;
     for(int i =0;i<n;i++){
         if((a[i+1]-a[i])>diff){
             diff = a[i+1]-a[i];
         }
     }

printf("Max difference is =%d",diff);
     return 0;
 }
