 #include<stdio.h>
#include<string.h>
int main()
 {
     char a[20];
     char *single[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
     char *two_digit[]={"","ten","eleven","twelve","thirteen","forteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
     char *tens[]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
     char *hundred[]={"","","","hundred","thousand"};
     
     printf("Input no: \n");
     scanf("%s",a);
     
     int len = strlen (a);
     int num;
     
     if(len == 1)
     {
         num = a[0] - 48;
         printf("%s",single[num]);
     }
     
     if(len ==2 && a[0]==49)
     {
         num = (a[0] - 48 ) + (a[1] - 48);
         printf("%s",two_digit[num]);
     }
     else if (len ==2 && a[1]==48)
     {
         num = (a[0] - 48) + (a[1] - 48);
         printf("%s",tens[num]);
     }
     else if(len ==2)
     {
         num = a[0] - 48;
         printf("%s",tens[num]);
         num = a[1] - 48;
         printf("%s",single[num]);
     }
     
 }
