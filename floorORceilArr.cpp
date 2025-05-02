#include <iostream>
using namespace std;

// brute force apporach
int findFloor(int arr[],int n,int x){
    if(x >= arr[n -1]){
        return arr[n- 1];
    }
    if(x < arr[0]){
        return -1;
    }
    //int ans = -1;
    for(int i = 0;i<n;i++){
        if(arr[i] > x){
            return arr[i-1];
        }
    }
     return -1;
}
// brute force apporach for finding ceil
int findCeil(int arr[],int n,int x){
    if(x >= arr[n -1]){
        cout << "not found" << endl;
        //return ;
    }
    
    //int ans = -1;
    for(int i = 0;i<n;i++){
        if(arr[i] >= x){
            return arr[i];
        }
    }
    // return -1;
}

// binary search 
int findFloorAndCeil(int arr[],int n,int x){
    int low = 0, high = n-1 , ans = n;;
    while (low <= high)
    {   
        
        int mid = (low + high)/2;
        if(arr[mid] >= x){
            ans = mid;
            high = mid -1;
        }else{
            low = mid+1;
        }
    }
    return ans;
}
int main(){
    int arr[] = {1,5,6,9,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 8;
    cout << findFloorAndCeil(arr,n,x) << endl;
    //cout <<"ceil is " <<  findCeil(arr,n,x) << endl;
     return 0;
}