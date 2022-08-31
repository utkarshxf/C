#include <stdio.h>
int i,n,c,j;
struct std {
    char name[20];
    int roll;
    int marks[5];
    int total;
    float percentage;
    
    };
    

int main()
{
    
    printf("enter the number of students");
    scanf("%d",&c);

    struct std a[100];
    for (n = 0; n < c; n++)
    {
      printf(" enter name and roll no. for student no.%d \n", (n+1));
      scanf("%s %d", a[n].name, &a[n].roll);
      printf("enter marks in sequential order\n");
      for (i = 0; i < 5; i++)
      {
        printf("sub %d ", (i+1));
        scanf("%d",&a[n].marks[i]);
      }
   }
   for(i=0;i<c;i++)
   {
     printf("name of student %d=%s roll no.=%d \n",i+1,a[i].name,a[i].roll);
     for(j=0;j<5;j++)
     printf("sub%d=%d\n",(j+1),a[i].marks[j]);
   }
  
    
    return 0;
}