#include <stdio.h>

int main()
{
   int a=10;
   unsigned int b=20;
   signed int p=1;
   
   char ch='a';
   unsigned char c='s';
   signed char t='d';
   
   short int d=11;
   long int e=34;
   signed long int v=-45;
   unsigned long int w=67
   long long int j=450;
   
   float f=2.3;
   
   double k=2.30;
   
   long double l=670;
   
   printf("%d\n",a);
   printf("%u\n",b);
    printf("%d\n",p);
   
   printf("%c\n",ch);
   printf("unsigned char ch=%c\n",c);
   printf("signed char ch=%c\n",t);
   
   printf("short int=%hd\n",d);
   printf("long int=%ld\n",e);
   printf("signed long int=%ld\n",v);
    printf("unsigned long int=%lu\n",w);
    printf("long long int=%lld\n",j);
    
    printf("float=%f\n",f);
    
   printf("double=%lf\n",k);
    
    printf("long double=%Lf",l);
}
