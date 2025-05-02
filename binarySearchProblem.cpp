#include <iostream>
#include <vector>
using namespace std;

// search element in rotated sorted array with unique element

int searcheElement(int arr[], int n, int k)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == k)
            return mid;

        if (arr[low] <= arr[mid])
        {
            if (arr[low] <= k && k <= arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (arr[mid] <= k && k <= arr[high])
            {
                low = mid = 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

// search element in rotated sorted array with duplicate  element
// this problem is if target element is not present more then 1 times then return false
// int searchElementWithDuplicate(int arr[],int n,int k){
//     int cnt = 0;
//     for(int i = 0;i<n-1;i++){
//         if(arr[i] == k){
//             cnt ++;
//             if(cnt >1) return true;

//         }
//     }
//     return false;
// }

//search element in rotated sorted array with duplicate  element  usinf binary search
int searchElementWithDuplicate(int arr[], int n, int k)
{
    int l = 0, h = n - 1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (arr[mid] == k)
            return true;

        // trim the both side left and right
        if (arr[l] == arr[mid] && arr[mid] == arr[h])
        {
            l++, h--;
            continue;
        }
        // left side sorted array
        if (arr[l] <= arr[mid])
        {
            if (arr[l] <= k && k <= arr[mid])
            {
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        // right side sorted array
        else
        {
            if (arr[mid] <= k && k <= arr[h])
            {
                l = mid + 1;
            }
            else
            {
                h = mid - 1;
            }
        }
    }
    return false;
}

// find minimum element using brute force apprach
// int findMinElement(int arr[],int n){
//     int min = INT_MAX;
//     for(int i = 0;i<n-1;i++){
//         if(min > arr[i]){
//             min = arr[i];
//         }
//     }
//     return min;
// }

int findMinElement(int arr[],int n){
    int l = 0,h = n-1,ans = INT_MAX;
    while (l<=h)
    {
        int mid = (l+h)/2;
        if(arr[l]<=arr[mid]){
           ans = min(ans,arr[l]);
           l = mid + 1;

        }else{
            ans = min(ans,arr[mid]);
            h = mid -1;
        }
    }
    return ans;
}

//Find out how many times the array has been rotated

// int numberOfRotation(int arr[],int n){
//     int ans = INT_MAX,index = -1;
//     for(int i = 0;i<n-1;i++){
//         if(arr[i] < ans){
//             ans = arr[i];
//             index = i;
            
//         }
//     }
//     return index;
// }

int numberOfRotation(int arr[],int n){
    int l = 0,h = n-1,ans = INT_MAX ,index = -1;
    while (l<=h)
    {
        int mid = (l+h)/2;
        if(arr[l]<=arr[mid]){
            if(arr[l] < ans){
                ans = arr[l];
                index = l;
            }
            l = mid + 1;

        }else{
            if(arr[mid] < ans){
                ans = arr[mid];
                index = mid;
            }
            h = mid -1;
        }
    }
    return index;
}

// Single element in a Sorted Array

int singleElement(int arr[],int n){
    
    for(int i = 1;i<n-1;i++){
        if(n== 1) return arr[0];

        if(i == 0){
            if(arr[i] != arr[i + 1]) return arr[i] ;
        }else if(i == n -1){
            if(arr[i] != arr[ i -1]) return arr[i];
        }else{
            if(arr[i - 1] != arr[i] && arr[i] != arr[i + 1]){
            return arr[i];
            }
        }
    }
    return -1;
}
int main()
{
    // int arr[] = {7,8,9,0,3,4,5};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // int k = 1;
    // //cout << searchElementWithDuplicate(arr, n, k) << endl;
    // cout << findMinElement(arr,n) << endl;

    // int arr[] = {4,5,6,7,0,1,2,3};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // cout << numberOfRotation(arr,n) << endl ;

    int arr[] = {1,1,2,2,3,3,4,5,5,6,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << singleElement(arr,n) << endl;
    return 0;
}