#include<stdio.h>
#include <stdlib.h>
struct node
{
  int info;
  struct node *link;
}*start;
void create_list(int data)
{
  struct node *q, *temp;
  temp = (struct node *)malloc(sizeof(struct node));
  temp->info = data;
  temp->link = NULL;
  if (start == NULL)
  {
    start = temp;
  }
  else
  {
    q = start;
    while (q->link != NULL)
    {
      q = q->link;
      
    }
    q->link = temp;
  }
}
void addatbeg(int data)
{
  struct node *temp;
  temp = (struct node *)malloc(sizeof(struct node));
  temp->info = data;
  temp->link = start;
  start = temp;
}
void addafter(int data, int pos)
{
  struct node *temp, *q;
  int i;
  q = start;
  for (i = 0; i < pos - 1; i++)
  {
    q = q->link;
    if (q == NULL)
    {
      printf("There are less than %d elemnets", pos);
      return;
    }
  }
  temp = (struct node *)malloc(sizeof(struct node));
  temp->link = q->link;
  temp->info = data;
  q->link = temp;
}
void del(int data)
{
  struct node *temp, *q;
  if (start->info == data)
  {
    temp = start;
    start = start->link;
    free(temp);
    return;
  }
  q = start;
  while (q->link->link != NULL)
  {
    if (q->link->info == data)
    {
      temp = q->link;
      q->link = temp->link;
      free(temp);
      return;
    }
    q = q->link;
  }
  if (q->link->info == data)
  {
    temp = q->link;
    free(temp);
    q->link = NULL;
    return;
  }
  printf("Element %d not found \n", data);
}
void display()
{
  struct node *q;
  if (start == NULL)
  {
    printf("List is empty \n");
    return;
  }
  q = start;
  printf("List is \n");
  while (q != NULL)
  {
    printf("%d ", q->info);
    q = q->link;
  }
  printf(" \n");
}
void search(int data)
{
  struct node *ptr = start;
  int pos = 1;
  while (ptr != NULL)
  {
    if (ptr->info == data)
    {
      printf("Item %d not found at postion %d \n,data ,pos");
      return;
    }
    ptr = ptr->link;
    pos++;
  }
  if (ptr == NULL)
  {
    printf("Item %d not found in %d\n", data);
  }
}

int main()
{
  int choice,n,m,position,i;
  while (1)
  {
    printf("1. create list \n");
    printf("2. Add at begining \n");
    printf("3. Add after \n");
    printf("4. Delete \n");
    printf("5. display \n");
    printf("6. Search \n");
    printf("7. Quit \n");
    printf("enter your choice : \n");
    scanf ("%d",&choice);
    switch (choice)
    {
    case 1:
      start = NULL;
      printf("Enter the element: ");
      scanf("%d",&m);
      create_list(m);
      break;
    case 2:
       printf("Enter the element : \n");
       scanf("%d",&m);
       addatbeg(m);
       break;
    case 3:
       printf(" Enter the element : \n");
       scanf("%d",&m);
       printf("Enter the postion after which this element inserted : ");
       scanf("%d",&position);
       addafter(m,position);
       break;
    case 4:
     if (start==NULL)
     {
        printf("list is empity \n");
        continue;
     }
     printf("Enter the element for deletion : \n");
     scanf("%d ",&m);
     del(m);
     break;
    case 5:
      display();
      break;
    case 6:
      printf("Enter the element to be searched :");
      scanf("%d",&m);
      search(m);
      break;
      case 7:
      return 0;
    default:
      printf("Wrong choice \n");
      break;
    }
  }
  
  return 0;
}

