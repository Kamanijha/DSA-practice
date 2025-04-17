#include <iostream>
#include <vector>
using namespace std;


int longestSubArraySum(int arr[],int n,int s){
    int lan = 0;
    for(int i = 0;i<n;i++){

        for(int j = i;j<n;j++){
            int sum = 0;

            for(int k = i;k<=j;k++){
                sum += arr[k];
            }
            if(sum == s){
               lan = max(lan,j-i+1);
            }
        }
    }
    return lan;
}

int twoSum(int arr[],int n,int target){

    for(int i = 0;i<n;i++){

        for(int j = i + 1;j<n;j++){

            if(arr[i] + arr[j] == target){
                 return true;
            }
        }
    }
    return false;
}

int sort012(int arr[],int n){
    int count0 = 0 ,count1 = 0 , count2 = 0;
    for(int i = 0; i< n;i++){
        if(arr[i] == 0) {
            count0 ++;
        }else if(arr[i] == 1){
            count1 ++;
        }else{
            count2 ++;
        }
    }

    int index = 0;

    for(int i = 0; i <count0; i++ ) arr[index ++] = 0;
    for(int i = 0; i <count1; i++ ) arr[index ++] = 1;
    for(int i = 0; i <count2; i++ ) arr[index ++] = 2;
}
int main(){


    // int arr[] = {1,2,3,1,1,1,1,4,2,3};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int s = 7;
    // cout << longestSubArraySum(arr,n,s)  ;


    //  int arr[] = {2,6,5,8,11};
    //  int n = sizeof(arr)/sizeof(arr[0]);
    //  int target = 15;
    //  cout << twoSum(arr,n,target) << endl;


    int arr[] = {0,1,2,1,0,1,2,1,0,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort012 (arr,n);
    for(int i = 0;i<n;i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
     return 0;
}