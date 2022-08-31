#include <stdio.h>
#include <stdlib.h>

void display(int **Arr)
{
  int n = 3;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf(" %d ", *(*(Arr + i) + j));
    }
    printf("\n");
  }
}
void addmat(int (*Arr1)[3], int (*Arr2)[3])
{
  int n = 3;
  int **Arr = (int **)malloc(n * sizeof(int *));
  for (int i = 0; i < n; i++)
    *(Arr + i) = (int *)malloc(n * sizeof(int));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      *(*(Arr + i) + j) = *(*(Arr1 + i) + j) + *(*(Arr1 + i) + j);
    }
  }
  display(Arr);
}

int main()
{
  int A[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
  int B[3][3] = {{1, 2, 3},{4, 5, 6},
{7, 8, 9}};
  addmat(A, B);

  return 0;
}