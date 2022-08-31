#include<stdio.h>
int main()
{
  char a[66],b;
  int c;
  printf("enter text-----\n");
  do
  {
    b=getchar();
    a[c]=b;
    c++;

  } 
  while (a[c] != '\n' );
  c=c-1;
  a[c] ='\0';

  printf("\n%s\n",a);
  printf("do this line print");
  return 0;
}
