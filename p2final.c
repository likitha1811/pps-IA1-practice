#include<stdio.h>
int input()
{
  int n;
  printf("enter the numbers:\n");
  scanf("%d",&n);
  return n;
}

int cmp(int a,int b,int c)
{

  int large;
  if (a>b && a>c)
  {
    large=a;
  }
  else if (b>c)
  {
    large=b;
  }
  else 
  {
    large=c;
  }
  return large;
}

void output(int largest)
{
 printf("%d is the largest among them \n",largest); 
}

int main()
{
  int x,y,z,result;
  x=input();
  y=input();
  z=input();
  result=cmp(x,y,z);
  output(result);
  return 0;
}