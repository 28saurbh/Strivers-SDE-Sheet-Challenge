int getpivot(int arr[],int n){

   int s=0;    int e=n-1;    int mid=s+(e-s)/2;

   while(s<e){

       if(arr[mid]>=arr[0]){

           s=mid+1;        }

       else {            e=mid;        }

       mid=s+(e-s)/2;    }

   return s; }

int binarysearch(int arr[],int s,int e,int key){

   int mid=s+(e-s)/2;

   while(s<=e){

       if(arr[mid]==key){

           return mid;        }

       else if(arr[mid]<key){

           s=mid+1;        }

       else {

           e=mid-1;        }

       mid=s+(e-s)/2;    }

   return -1; }

int search(int* arr, int n, int key) {    // Write your code here.

   int pivot=getpivot(arr,n);

   if(key>=arr[pivot] && key<=arr[n-1]){

       return binarysearch(arr,pivot,n-1,key);    }

   else {

       return binarysearch(arr,0,pivot-1,key);    } }
