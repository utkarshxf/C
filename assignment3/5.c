#include <stdio.h>

struct employee
{
  char name[10];
  char gender[6];
  char designation[10];
  char department[10];
  int basicpay;
};
float get_gross_pay(struct employee e)
{
  float HRA = 0, DA = 0, gross = 0;
  HRA = 0.25 * (e.basicpay);
  DA = 0.75 * (e.basicpay);
  gross = HRA + DA + e.basicpay;
  return gross;
}
int main()
{
  int n;
  printf("Enter the number of employees = ");
  scanf("%d", &n);
  struct employee s[n];
  for (int i = 0; i < n; i++)
  {
    printf("Enter employee name : ");
    scanf("%s", s[i].name);
    printf("Enter employee gender : ");
    scanf("%s", s[i].gender);
    printf("Enter employee designation : ");
    scanf("%s", s[i].designation);
    printf("Enter employee department : ");
    scanf("%s", s[i].department);
    printf("Enter employee basicpay : ");
    scanf("%d", &s[i].basicpay);
  }
  for (int i = 0; i < n; i++)
  {
    float gross = get_gross_pay(s[i]);
    printf("\nNAME : %s\nGENDER : %s\nDESIGNATION : %s\nDEPARTMENT : %s\nBASICPAY : %d\nGROSS : %.2f\n", s[i].name, s[i].gender, s[i].designation, s[i].department, s[i].basicpay, gross);
    gross = 0;
  }

  return 0;
}