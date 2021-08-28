#include <stdio.h>
#include <math.h>
int main()
{
  float a, b, c, s, area;
    printf("Enter sides A of triangle: ");
    scanf("%f", &a);
    printf("Enter sides B of triangle: ");
    scanf("%f", &b);
    printf("Enter sides C of triangle: ");
    scanf("%f", &c);
  if(a+b>c && b+c>a && c+a>b)
  {
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    
    printf("Area of the triangle = %.2f", area);
  }
  else
  {
    printf("0");
  }
  return 0;
}