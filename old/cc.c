#include<stdio.h>
int main()
{
// int bin_search(int a[],int item,int lb,int ub){
//   if(lb<=ub){
//     mid =lb+ub/2
//     if(item==a[mid]){
//       return(mid+1);
//     }else if(item<a[mid]){
//       bin_search(a,item,)
//     }
//   }
// }
int a[5]={3,4,7,5,6};
for (int i = 1; i < 4; i++)
{
  a[i]=a[i+1];
}
for (int i = 0; i < 4; i++)
{
  printf("element number %d is :  %d\n", i, a[i]);
}
  return 0;
}
