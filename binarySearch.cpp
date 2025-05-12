#include <iostream>
using namespace std;

// using loop
int binarySearch(int arr[], int n, int target)
{
    int st = 0, end = n - 1;
    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

// using recursion

int recursiveSearch(int arr[], int low, int high, int target)
{

    if (low > high)
    {
        return -1;
    }
    int mid = (low + high) / 2;
    if (arr[mid] == target)
        return mid;
    else if (target > arr[mid])
    {
        return recursiveSearch(arr, mid + 1, high, target);
    }
    else
    {
        return recursiveSearch(arr, low, mid - 1, target);
    }
}

int findLowerBound(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= x)
        {
            return i;
        }
    }
}

// left rotation by one place
void leftRotation(int arr[], int n)
{
    int first = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = first;
}

// right rotation by one place
void rightRotation(int arr[], int n)
{
    int temp = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}

// left rotation by d place

void leftRotationByKplace(int arr[], int n, int d)
{
    int temp[] = {1, 2, 3};
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }
    int j = 0;
    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[j];
        j++;
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 3;
    leftRotationByKplace(arr, n, d);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // output = {4,5,6,7,1,2,3}

    // int arr[] = {3,4,6,7,9,12,16,17};
    // int n = sizeof(arr)/sizeof(arr[0]);
    //  //leftRotation(arr,n) ;
    //  rightRotation(arr,n);
    //  for(int i =0;i<n;i++){
    //     cout << arr[i] << " ";
    //  }
    //  cout << endl;
    //  int arr[] = {3,4,6,7,9,12,16,17};
    // int n = sizeof(arr)/sizeof(arr[0]);
    //  int x = 10;
    //  cout << findLowerBound(arr,n,x) << endl ;

    // int arr[] = {3,4,6,7,9,12,16,17};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int target = 16;
    // cout << recursiveSearch(arr,0,n-1,target);
    // cout << binarySearch(arr,n,target) ;
    return 0;
}