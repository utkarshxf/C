#include<stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
}*start;
void create(){
  printf("enter data to be inserted : \n");
  int data;
  scanf("%d",&data);
  struct node *p,*q;
  p=(struct node *)malloc(sizeof (struct node));
  p->data=data;
  p->next=NULL;
  if (start==NULL){
    start=p;
  }
  else
  {
    q  =start;
    while (q->next!=NULL)
    {
      q = q->next;
    }
    q->next = p;
  }
}
void display(){
  struct node *p;
  p=start;
  while (p!=NULL)
  {
    printf("%d\n",p->data);
    p=p->next ;
  }
}
void del(){
  printf("enter the element you want to be del : \n");
  int n;
  scanf("%d",&n);
  struct node *p,*temp;
  p=start;
  while (p->next->next != NULL)
  {
    if (p->next->data == n)
    {
      temp = p->next;
      p->next = p->next->next;
      free(temp);
      return;
    }
    p = p->next;
  }
  else
  {
    temp = p->next;
    p->next = NULL;
    free(temp);
    return;
  }
}
void firstplc(){
  
}

void insert(){

}

int main()
{
  int n;
  while (1)
  {
    printf("------------------------------\n");
    printf("1. create a list \n");
    printf("2. display a list\n");
    printf("3. delete a list\n");
    printf("4. insert a element in first place \n");
    printf("5. inser after \n");
    printf("6. exit\n");
    printf("enter your choice :\n");
    scanf("%d", &n);
    printf("------------------------------\n");
    switch (n)
    {
    case 1:
      create();
      break;
    case 2:
      display();
      break;
    case 3:
      del();
      break;
    case 4:
      firstplc();
    case 5:
      insert();
    case 6:
      printf("yes but");
      return 0;
      default:
      break;
  }
}
  return 0;
}