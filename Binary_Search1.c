#include<stdio.h>

 int Binary_Search(int a[],int n,int x)
 {
     int left,right,mid;
     left = 0;
     right = n-1;
  while(left <= right)
  {
      mid = (left + right)/2;

          if( x == a[mid])
          {
              return mid;
          }
          if(x < a[mid])
          {
            right = mid - 1;
          }
          else
          {
              left = mid + 1;
          }

  }
     return -1;
 }
int main()
{
  int a[30],n,x,i;
  printf("Enter how many input you insert : ");
  scanf("%d",&n);
  printf("Input your %d Numbers : \n",n);
  for(i=0;i<n;i++)
  {
     scanf("%d",&a[i]);
  }
  printf("Which number you want to search : ");
  scanf("%d",&x);
 if(Binary_Search(a,n,x) == -1)
 {

     printf("Not Found\n");
 }
 else printf("Found in index of %d",Binary_Search(a,n,x));
}
