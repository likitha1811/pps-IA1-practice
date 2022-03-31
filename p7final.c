#include<stdio.h>
struct _complex
{
  float real,imaginary;
};
typedef struct _complex Complex;

Complex input_chellox()
{
  Complex n;
  printf("enter the real and imaginary numbers :\n");
  scanf("%f %f",&n.real,&n.imaginary);
  return n;
}

Complex add(Complex a,Complex b)
{
  Complex c;
  c.real=a.real+b.real;
  c.imaginary=a.imaginary+b.imaginary;
  return c;
}

void output(Complex a,Complex b,Complex c)
{
  printf("the sum of (%.0f+%.0fi) + (%.0f+%.0fi) is (%.0f+%.0fi)\n",a.real,a.imaginary,b.real,b.imaginary,c.real,c.imaginary);
}

int main()
{
  Complex x,y,result;
  x=input_chellox();
  y=input_chellox();
  result=add(x,y);
  output(x,y,result);
  return 0;
}