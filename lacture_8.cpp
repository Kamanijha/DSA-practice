#include <iostream>
using namespace std;

// linear Search function
// int linearSearch(int arr[],int sz,int target){
//     for(int i = 0;i<sz;i++){
//        if(arr[i] == target){
//         return i;
//        }
//     }
//     return -1;
// }


// REVERSE ARRAY ELEMENT 1ST APPORACH BY ME
// void reverseArr(int arr[],int sz){
//     for(int i = sz - 1;i >= 0;i--){
//        cout << arr[i] << endl;
//     }
//     return;
// }

// 2ND APPORACH BY LACTURE
void reverseArr(int arr[],int sz){
    int start = 0,end = sz - 1;

    while(start < end){
      swap(arr[start],arr[end]);
      start ++;
      end --;
    }
}
int main(){
    
    // // linearSearch calling function
    // int arr[] = {2,3,4,5,6,67,8};
    // int sz = 7;
    // int target = 60;
    // cout<< linearSearch(arr,sz,target) << endl;

    

    // REVERSE ARRAY CALLING FUNCTION
    // int arr[] = {4,2,7,8,1,2,5};
    // int  sz = 7;
    //  reverseArr(arr,sz);
    
    // 2ND APPORACH CALLING FUNCTION
    // int arr[] = {1,2,3,4,5,6,7,8,9};
    // int sz = 9;
    // reverseArr(arr,sz);
    //  for(int i = 0;i<sz;i++){
    //     cout << arr[i] << " ";
    //  }
    // cout << endl;


    // write a programm to calculate sum and product of array
    // int arr[] = {1,2,3,4,5};
    // int sz = 5;
    // int multiply = 1;
    // int sum = 0;
    // for(int i = 0;i<sz;i++){
    //     sum += arr[i];
    //     multiply *= arr[i];
       
    // }
    // cout<< sum << endl;
    // cout<< multiply << endl; 

    return 0;
}



// #include <iostream>
// using namespace std;

// int linearSearch(int arr[], int sz, int target) {
//     for (int i = 0; i < sz; i++) {
//         if (arr[i] == target) {
//             return i;
//         }
//     }
//     return -1;
// }

// int main() {
//     int arr[] = {2, 3, 4, 5, 8, 9, 6};
//     int sz = 7;
//     int target = 8;
//     cout << linearSearch(arr, sz, target) << endl;
//     return 0;
// }
