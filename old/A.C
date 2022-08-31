void swap(int *a, int *b);
int main()
{
  int m = 25;
  int n = 100;
  printf("m is %d, n is %d\n", m, n);
  swap(&m, &n);
  printf("m is %d, n is %d\n", m, n);
  return 0;
}
void swap(int *a, int *b)
{
  int A;
  A = *a;
  *a = *b;
  *b = A;
}