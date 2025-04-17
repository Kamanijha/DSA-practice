#include <iostream>
#include <vector>
using namespace std;
// rotation by one place
void LeftRotation(int arr[],int n){
    int temp = arr[0];
    for(int i = 1;i<n;i++){
        arr[i -1] = arr[i];
    }
    arr[n -1] = temp;
}
// right rotation by one
void rightRotation(int arr[],int n){
    int temp = arr[n- 1];
    for(int i = n- 2;i >=0;i--){
        arr[i + 1] = arr[i];
    }
    arr[0] = temp;
}
// when given d 
void leftRotateArray(int arr[],int n,int d){
    // first step
    int temp[d];
    for(int i = 0; i < d;i++){
        temp[i] = arr[i];
    }
    // second step
    for(int i = d;i<n;i++){
        arr[i - d] = arr[i];
    }
    // third step
    int j = 0;
    for(int i = n-d;i<n;i++){
        arr[i] = temp[j];
        j++;
    }
}

// when given d
void rightRotateArray(int arr[],int n,int d){
   int temp[] = {4,5,6,7};
   
   for(int i = n-1; i >= d;i--){
    arr[i] = arr[i-d];
   }

   for(int i = 0;i<d;i++){
    arr[i] = temp[i];
      
   }
}

// move all zero to the end of the array

// void moveAllZero(int arr[],int n){
//      vector<int> temp;
//     for(int i = 0; i<n;i++){
//         if(arr[i] != 0){
//             temp.push_back(arr[i]);
//         }
//     }
    
//     int nz = temp.size();
//     for(int i = 0;i< nz;i++){
//         arr[i] = temp[i];
//     }

//     for(int i = nz; i<n;i++){
//         arr[i] = 0;
//     }
// }


// optimal solution for move all zero in last in given array
vector<int> moveAllZero(vector<int> arr ,int n){
    
    int j = -1;
    for(int i = 0; i<n;i++){
        if(arr[i] == 0){
            j = i;
        }
    }
    
   for(int i = j + 1; i < n;i++){
    if(arr[i] != 0){
        swap(arr[i],arr[j]);
        j++;
    }
   }
}
int main(){
    // int arr[] = {1,2,3,4,5,6,7};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int d = 4;
    // rightRotateArray(arr,n,d);
    // for(int j = 0;j<n;j++){
    //     cout << arr[j] << " " ;
    // }

    // int arr[] = {1,0,2,3,2,0,0,4,5,1};
    // int n = sizeof(arr)/sizeof(arr[0]);
    //  moveAllZero(arr,n); 
    // for(int j = 0;j < n;j++){
    //     cout << arr[j] << " ";
    // }

    return 0;
}