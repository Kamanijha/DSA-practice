#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> unionArray(vector<int> a, vector<int> b)
{
    set<int> st;
    for (int i = 0; i < a.size(); i++)
    {
        st.insert(a[i]);
    }

    for (int i = 0; i < b.size(); i++)
    {
        st.insert(b[i]);
    }
    vector<int> res;
    for (auto it : st)
    {
        res.push_back(it);
    }
    // for(int i = 0;i<st.size();i++){
    //     res.push_back(st[i]);
    // }
    return res;
}

// vector <int> intersectionOfArray(vector <int>a,vector <int>b){
//     vector <int>res;
//     int n1 = a.size();
//      int n2 = b.size();
//     int i = 0, j = 0;
//     while (a < n1 && b < n2)
//     {
//         int x = a[i];
//         int y = b[j];

//         if(x == y){
//             res.push_back(x);
//         }else if(x < y){
//             i++;
//         }else{
//             j++;
//         }
//     }
//     return res;
// }

// int findMissingNum(int arr[], int size)
// {

//     for (int i = 1; i < size + 1; i++)
//     {
//         bool found = false;
//         for (int j = 0; j < size; j++)
//         {
//             if (arr[j] == i)
//             {
//                 found = true;
//                 break;
//             }
//         }
//         if (!found)
//             return i;
//     }
//     return -1;
// }



// int findMissingNum(int arr[],int size){
//    vector <int> hash(size + 2,0);
//     for(int i = 0;i<size;i++){
//         hash[arr[i]] = 1;
//     }

//     for(int i = 1;i<size + 1;i++){
//         if(hash[i] == 0){
//             return i;
//         }
//     }
// }

// int findMissingNum(int arr[],int size){

//     for(int i = 1;i<=size +1;i++){
//          bool found = false;
//         for(int j = 0;j<size;j++){
//             if(arr[j] == i){
//                 found = true;
//                 break;
//             }
//         }
//         if(!found){
//             return i;
//         }
//     }
//     return - 1;
// }

int findMissingNum(int arr[],int size){

    for(int i = 1;i<=size +1;i++){
         bool found = false;
        for(int j = 0;j<size;j++){
            if(arr[j] == i){
                found = true;
                break;
            }
        }
        if(!found){
            return i;
        }
    }
    return - 1;
}

int appearsOnes(int arr[],int n){
    for(int i = 0;i<n;i++){
        int num = arr[i];
        int cnt = 0;
        for(int j = 0;j<n;j++){
            if(arr[j] == num){
                cnt ++;
            }
        }
        if(cnt == 1){
            return arr[i];
        }
    }
}

int main()
{
    // g++ -std=c++11 unionArray.cpp -o unionArray
    //./unionArray      paste this commend and run code unionArray

    // vector<int> a = {1,1,2,2,3,3,4};
    // vector<int> b = {3,3,4,5,5,6};
    // vector<int> res = intersectionOfArray(a,b);
    // for(int i =0;i<res.size();i++){
    //     cout << res[i] << " ";
    // }

    // int arr[] = {1,3,2,6};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // //cout << size ;
    // cout << findMissingNum(arr, size) << endl;

    int arr[] = {1,1,8,8,3,4,3,4,5,5,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << appearsOnes(arr,n) << endl;
    return 0;
}