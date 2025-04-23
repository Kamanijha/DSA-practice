#include <iostream>
using namespace std;

// using loop
int binarySearch(int arr[],int n ,int target){
    int st = 0,end = n-1;
    while (st <= end)
    {
       int mid = (st + end)/2;
       if(arr[mid] == target){
        return mid;
       }else if( arr[mid] < target){
        st = mid + 1;
       }else {
        end = mid -1;
       }
    }
    return -1;
}

// using recursion

int recursiveSearch(int arr[],int low,int high ,int target){
   
    if(low > high) {
        return -1;
    }
    int mid = (low + high)/2;
    if(arr[mid] == target) return mid;
    else if(target > arr[mid] ){
        return recursiveSearch(arr,mid + 1,high,target);
    }else{
       return recursiveSearch(arr,low,mid -1,target);
    }

}

int findLowerBound(int arr[],int n ,int x){
    for(int i = 0;i < n;i++){
        if(arr[i] >= x){
            return i;
        }
    }
}
int main(){
     int arr[] = {3,4,6,7,9,12,16,17};
    int n = sizeof(arr)/sizeof(arr[0]);
     int x = 10;
     cout << findLowerBound(arr,n,x) << endl ;

    // int arr[] = {3,4,6,7,9,12,16,17};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int target = 16;
    // cout << recursiveSearch(arr,0,n-1,target);
    // cout << binarySearch(arr,n,target) ;
    return 0;
}