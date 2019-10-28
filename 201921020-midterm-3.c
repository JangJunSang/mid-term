#include<stdio.h>

void swap(int *pa,int *pb)
{
  int temp;

  temp=*pa;
  *pa=*pb;
  *pb=temp;

  printf("%d %d",*pa,*pb);
}


int main(void)
{

  int a,b;

  scanf("%d %d",&a,&b);
}
