// #include <stdio.h>
// int main(void)
// {
//   char name;
//   name = getchar();
//   printf("%c", name);
//   return 0;
// }

// #include <stdio.h>
// int main()
// {
//   printf("hello world")
//   return 0;
// }r

// #include <stdio.h>
// int main()
// {
//   for (int i = 1; i < 5; )
//   {
//     printf("\n");
//     for (int k = 5; k > i; k--)
//     {
//       printf(" ");
//       i++;
//       for (int j = 0; j < i; j++)
//       {
//         printf("*");
//         ;
//       }
//     }
    
//   }
//   return 0;
// }

#include <stdio.h>
#include <conio.h>

void main()
{
  int i, j, k;
  for (i = 1; i <= 5; i++)
  {
    for (j = 4; j >= i; j--)
    {
      printf(" ");
    }
    for (k = 1; k <= (2 * i - 1); k++)
    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
