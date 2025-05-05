#include <iostream>
#include <vector>
using namespace std;

// peak element
// int peakElement(int arr[],int n){
//     int peak = INT_MIN, index = -1;
//     for(int i = 0;i<n;i++){
//         if(arr[i] > peak){
//             peak = arr[i];
//             index = i;
//         }
//     }
//     return index;
// }
// multiple peak element in unsorted array this is brute force apporach
vector <int> peakElement(int arr[],int n){
    vector <int> peak;
    for(int i = 0;i<n-1;i++){
        if((i == 0 || arr[i] > arr[i -1]) && (i == n-1 || arr[i] > arr[i +1])){
            peak.push_back(i);
        }
    }
    return peak;
}
int main(){
    int arr[]  = {1,2,1,4,6,7,5,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector <int> res=  peakElement(arr,n) ;
    for(int idx : res){
        cout << idx << " ";
    }
    cout << endl;
    return 0;
}