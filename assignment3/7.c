#include <stdio.h>

struct Distance
{
  // Kilometer
  int km;
  // Meter
  int m;
};

struct Distance Add(struct Distance A, struct Distance B)
{
  struct Distance C;
  C.km = A.km + B.km;
  C.m = A.m + B.m;

  // Since 1000m = 1km
  if (C.m >= 1000)
  {
    C.km += (C.m / 1000);
    C.m = C.m % 1000;
  }

  return C;
}

void display(struct Distance D)
{
  printf("%d km and %d m.\n", D.km, D.m);
}

int main()
{
  // Example
  struct Distance A, B, C;
  printf("Enter km and m for A: ");
  scanf("%d %d", &A.km, &A.m);
  printf("Enter km and m for B: ");
  scanf("%d %d", &B.km, &B.m);

  // Add them to C
  C = Add(A, B);

  // Display
  display(C);

  // End
  return 0;
}