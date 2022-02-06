#include<stdio.h>
#include<math.h>
float input();

float input()
{
  float x;
  printf("Enter any number for which you want square root\n");
  scanf("%f",&x);
  return x;
}
float find_square_root(float x)
{
  float xn = x/2;
  float xnext;
  xnext = 0.5 * (xn + (x/xn));
  while( fabs(xn - xnext)> 0.000001)
  {
    xn = xnext;
    xnext = 0.5 * (xn +(x/xn));
  }
  return xnext;
}
void output(float x, float result)
{
  printf("The square of %f is %f\n",x, result);
}
int main()
{
  float a,result;
  a=input();
  result= find_square_root(a);
  output(a,result);
  return 0;
}