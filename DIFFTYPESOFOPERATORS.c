#include <stdio.h>

int main()
{
  int a=10;
  int b=20;
  int c=a+b;
  printf("%d\n",c);
  int d=a*b;
  printf("%d\n",d);
  int f=b-a;
  printf("%d\n",f);
  int g=b/a;
  printf("%d\n",g);
  int h=b%a;
  printf("%d\n",h);
  
  int n1=20,n2=30;
  if(n1==n2){
      printf("true");
  }
  else{
      printf("false\n");
  }
  
  float num=3.4;
  if(num!=3.4){
      printf("yes\n");
  }
  else{
      printf("no\n");
  }
  
  if((n1&&n2)==1){
      printf("true\n");
  }
  else{
      printf("false");
  }
  
  if(!(n1&&n2)==1){
      printf("true");
  }
  else{
      printf("false");
  }
}
