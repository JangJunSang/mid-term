#include<stdio.h>

int main(void)
{
  int i,j;
  int *pi;

  *pi=&i;
    
  for(i=0;i<100;i++)
  {
    for(j=0;j<10;j++)
    {
       (*pi)++;
    }
    printf("\n");
  }
  printf("%d",i);
}
