#include <iostream>
#include <vector>
using namespace std;
vector<int> findFirstAndLast(int arr[], int n, int x)
{
    vector<int> ans;
    int first = -1, last = -1;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == x)
        {
            if (first == -1)
                first = i;
            last = i;
        }
    }
    ans.push_back(first);
    ans.push_back(last);
    return ans;
}

// using binary search

int findFirst(vector<int> arr, int x)
{
    int n = arr.size();
    int first = -1, low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (x == arr[mid])
        {
            first = mid;
            high = mid - 1;
        }
        else if (x < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return first;
}
int findLast(vector<int> arr, int x)
{
    int n = arr.size();
    int last = -1, low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (x == arr[mid])
        {
            last = mid;
            low = mid + 1;
        }
        else if (x < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return last;
}

vector<int> find(vector<int> arr, int x)
{
    int n = arr.size();

    // Find first and last index
    int first = findFirst(arr, x);
    int last = findLast(arr, x);

    vector<int> res = {first, last};
    return res;
}






int main()
{
    // vector<int> arr = {1, 3, 4, 8,8,8,8, 67, 123, 125};
    // int x = 8;
    // vector<int> res = find(arr, x);
    // cout << res[0] << " " << res[1] << endl;   // Always good to add endl
    // return 0;  // Best practice

    //run this commend 
    // g++ -std=c++11 firstAndLastOccurrence.cpp -o firstAndLastOccurrence
    //  ./firstAndLastOccurrence


     // find number of occurence 
     vector<int> arr = {1, 3, 4, 8,8,8,8,8,8, 67, 123, 125};
    int x = 8;
    vector<int> res = find(arr, x);
    if(res[0] == -1){
        cout << "no occurence found" << endl;
    }else{
        cout << "number of occurence is " << res[1]- res[0] +1 << endl;;
    }
    //cout << res[0] << " " << res[1] << endl;
}


// int main()
// {

//     // int arr[] = {2,4,6,8,8,8,8,11,13};
//     // int n = sizeof(arr)/sizeof(arr[0]);
//     // int x  = 8;
//     vector<int> arr = {1, 3, 5, 5, 5, 5, 67, 123, 125};
//     int x = 5;
//     vector<int> res = find(arr, x);
//     cout << res[0] << " " << res[1];

//     // vector<int> result = findFirstAndLast(arr, n, x);

//     // cout << "First Occurrence at index : " << result[0] << endl;
//     // cout << "Last Occurrence at index : " << result[1] << endl;
//     return 0;
// }