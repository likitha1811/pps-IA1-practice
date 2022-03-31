#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter the size of the array :\n");
  scanf("%d",&n);
  return n;
}

void input_array(int n,int a[n])
{
  printf("enter the numbers:\n");
  for (int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}

int sum_n_arrays(int n,int a[n])
{
  int i,sum;
  sum=0;
  for(i=0;i<n;i++)
  {
    sum=sum+a[i];
  }
  return sum;
}

void out_put(int n,int a[n],int sum)
{
  int i;
  for(i=0;i<n-1;i++)
  {
    printf("%d+",a[i]);
  }
  printf("%d = %d \n",a[i],sum);
}

int main()
{
  int x,result;
  x=input_array_size();
  int arr[x];
  input_array(x,arr);
  result=sum_n_arrays(x,arr);
  out_put(x,arr,result);
  return 0;
}