#include <iostream>
using namespace std;

// leaner search
int linearSearch(int arr[],int sz,int target){
    int target = 8;
     for(int i = 0;i < sz;i++){
         if(arr[i]== target){
            return i;
         }
     }
     return -1;
}

int main(){
     // linearSearch calling function
     int arr[] = {2,3,4,5,8,9,6};
     int sz = 7;
     int target = 8;
     cout<< linearSearch(arr,sz,target)<< endl;


    //   int size = 5;
    //   int marks[size];
    //   for(int i = 0;i<size;i++){
    //     cin >> marks[i];
    //   }


    //    int marks[5] = {99,100,54,36,88};
    //    int size = 5;
    //    for(int i = 0;i<size;i++){
    //        cout << marks[i] << endl;
    //    }

    // chack smallest and largest element in array 
    

    //  int smallest = INT_MAX;
    //  int size = 6;
    // int marks[6] = {99,100,54,36,88,205};
    // for(int i = 0;i<size;i++){
    //     // cout << marks[i] << endl;
    //     if(marks[i] < smallest){
    //         smallest = marks[i];
    //     }
    // }
    // cout << smallest << endl;

    int largest = INT_MIN;
    int size = 6;
    int marks[6] = {99,100,54,36,88,205};
    for(int i = 0;i<size;i++){
        // cout << marks[i] << endl;
        if(marks[i] > largest){
            largest = marks[i];
        }
    }
    cout << largest << endl;


    return 0;
}