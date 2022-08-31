#include<stdio.h>


//1 WAP to input name, roll number and marks in 5 subjects for a student,and display it.

struct Student{
  char name[10];
  int roll_number;
  float mark[5];
}s;

void display()
{
  printf("name : %s\n", s.name);
  printf("roll no : %d\n", s.roll_number);
  for (int j = 0; j < 5; j++)
  {
    printf("marks : %f ", s.mark[j]);
  }
}

int main(){
  printf("Enter name: \n");
  scanf("%s",&s.name);
  printf ("enter roll number\n");
  scanf("%d",&s.roll_number);
  for (int j = 0; j < 5; j++)
  {
    printf("enter marks of subjects %d number \n",j );
    scanf(" %f",&s.mark[j]);
  }
  display();
}

