#include<stdio.h>
int input_n()
{
  int n;
  printf("enter a number upto which you want to add\n");
  scanf("%d",&n);
  return n;
}

int sum_n(int n)
{
  int sum=0, i;
  for(i=1;i<=n;i++)
  {
    sum += i;
  }
  return sum;
}
void output(int n,int sum)
{
  for(int i=1;i<n;i++)
  {
    printf("%d+",i);
  }
  printf("%d=%d",n,sum);
}

int main()
{
  int a,b,c;
  a=input_n();
  b=sum_n(a);
  output(a,b);
  return 0;
}