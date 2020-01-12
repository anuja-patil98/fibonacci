#include <stdio.h>

int main()
{
    int a=0,b=1,c,i,no;
  printf("Enter the no of element:");
  scanf("%d",&no);
  printf("\n%d %d",a,b);
  for(i=2;i<no;i++)
  {
    c=a+b;
    printf("%d\t",c);
    a=b;
    b=c;
  }

    return 0;
}
