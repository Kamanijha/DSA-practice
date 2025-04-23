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
int main(){
    int arr[] = {1,5,6,9,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 15;
    cout << "floor is "<< findFloor(arr,n,x) << endl;
    cout <<"ceil is " <<  findCeil(arr,n,x) << endl;
     return 0;
}