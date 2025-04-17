#include <iostream>
using namespace std;

// int selection_sort(int arr[],int n){
//     for(int i = 0;i<=n-2;i++){
//          int min = i;
//         for(int j = i;j<=n-1;j++){
//             if(arr[j] < arr[min]){
//                 min = j;
//             }
//         }
//         int temp = arr[min];
//         arr[min] = arr[i];
//         arr[i] = temp;
//     }

// }

int buble_sort(int arr[], int n)
{
    for (int i = n - 1; i >= 1; i--)
    {
        int didSwap = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
        }
        // this is optimazation
        if (didSwap == 0)
        {
            break;
        }
        cout << "runs" << endl;
        ;
    }
}

// int largestNum(int arr[], int n)
// {
//     int largest = 0;
//     int second = 0;
//     for (int i = 0; i < n - 1; i++)
//     {
//         if (arr[i] > arr[i + 1])
//         {

//               largest = second;
//             second = arr[i];
//         }
//     }
//     return largest;
// }

int secondLargest(int arr[], int n)
{
    int largest = 0;
    int second = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {

            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }
    return second;
}

int smallestNum(int arr[], int n)
{
    int small = INT_MAX;
    int secondSmall = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            secondSmall = small;
            small = arr[i];
        }
        else if (arr[i] > small && arr[i] < secondSmall)
        {
            secondSmall = arr[i];
        }
    }
    return (secondSmall == INT_MAX) ? -1 : secondSmall;
}

int isSorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
        }
        else
        {
            return false;
        }
    }
    return true;
}

int removeDuplicate(int arr[], int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return (i + 1);
}
int main()
{

    int arr[] = {12, 12, 13, 14, 15, 15, 18, 19, 20, 20, 21, 21, 21};
    int n = sizeof(arr) / sizeof(arr[0]);
    int newArr = removeDuplicate(arr, n);
    for (int k = 0; k < newArr; k++)
    {
        cout << arr[k] << " ";
    }
    // int arr[6] = {13, 46, 24, 52, 20, 9};
    // int arr[6] = {8,4,7,9,6,10};
    // int arr[6] = {1,2,3,4,5,6};
    // int n = 6;
    // cout<< isSorted(arr,n)<< endl;
    // cout << (arr, n) << endl;
    //     for(int i = 0;i<n;i++){
    //      cout << arr[i]  << " ";
    //     }
    return 0;
}