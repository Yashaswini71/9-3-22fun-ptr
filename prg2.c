#include<stdio.h>
#define len 30
int i,l;
void search(int n,const int *a,int m);
void (*f_ptr)(int , const int *,int);
int main(){
   int n,m;
   printf("enter the size of array:");
   scanf("%d",&n);
   int a[len];
   printf("enter the elements:\n");
   for(i=0;i<n;i++){
      scanf("%d",&a[i]);
   }
   printf("enter the element to be searched:");
   scanf("%d",&m);
   f_ptr = &search;
   search(n,a,m);
   return 0;
}
void search(int n,const int *a,int m){
   for(i=0;i<n;i++){
      if(m==a[i]){
         l=1;
         break;
      }
   }
   if(l==1){
      printf("%d is present in the array",m);
   } else {
      printf("%d is not present in the array",m);
   }
}