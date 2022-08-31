#include <stdio.h>
void rec(int i)
{
  if (i <= 5)
  {
    printf("%02d UTKARSH\n", i);
    rec(i + 1);
  }
}
int main()
{
  int i = 1;
  rec(i);
}