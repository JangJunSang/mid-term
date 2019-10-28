#include<stdio.h>


double average(double in1,double in2)
{
    double aver;

    aver=(in1+in2)/2;
    
    printf("%lf",aver);
}

int main(void)
{
  int a,b;
  scanf("%d %d",&a,&b);
  average(a,b);

}
