#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   int s = 0,i = 0;
   int e = n-1;

   while(i<=e){

      if(arr[i] == 0){

         swap(arr[s], arr[i]);

         s++;

         i++;

      }

      else if(arr[i]==1){

         i++;

      }

      else{

         swap(arr[i], arr[e]);

         e--;

      }

   }
}
