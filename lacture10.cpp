#include <iostream>
#include <map>
// #include <bits/stdc++.h>
using namespace std;
string str_name;

int main()
{

    //     int n;
    //     cin >> n;
    //     int arr[n];
    //     for(int i = 0;i<n;i++){
    //         cin >> arr[i];
    //     }
    //    // precomput
    //     int hash[13] = {0};
    //     for(int i =0;i<n;i++){
    //         hash[arr[i]] += 1;
    //     }

    //     int q;
    //     cin >> q;
    //     while(q--){
    //         int number;
    //         cin >> number;
    //         // fetch
    //         cout << hash[number] << endl;
    //     }

    // string s = "ansnffngdsa";
    // //cin >> s;

    // // pre compute
    // int hash[26] = {0};
    // for(int i =0;i <s.size();i++){
    //     hash[s[i] - 'a'] ++;

    // }

    // char queries[] = {'a', 'n', 'f', 's'}; // You can add more characters here
    // int q = sizeof(queries) / sizeof(queries[0]);
    // // while(q--){
    // //     // int cha;
    // //     // cin >> cha;
    // //     // fetch
    // //     cout << hash[queries[i]-'a'] << endl;
    // // }
    // for(int i = 0;i < q;i++){
    //    cout << hash[queries[i] - 'a'] << endl;
    // }

    // int n = 7;
    // // cin >> n;
    // int arr[7] = {1, 2, 3, 1, 3, 2, 12};
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // // pre compute
    // map<int, int> mpp;
    // for (int i = 0; i < n; i++)
    // {
    //     mpp[arr[i]]++;
    // }

    // iterate on the mpp
    // for(auto it : mpp){
    //     cout << it.first << "->" << it.second << endl;
    // }

    // map<int, int>::iterator it;
    // for (it = mpp.begin(); it != mpp.end(); ++it)
    // {
    //     cout << it->first << "->" << it->second << endl;
    // }

    // int queries[] = {1, 2, 3};
    // int q = sizeof(queries) / sizeof(queries[0]);
    // for (int i = 0; i < q; i++)
    // {
    //     cout << mpp[i] << endl;
    // }

    // int arr[5] = {2,3,2,3,5};
    // int n = sizeof(arr)/sizeof(arr[0]);

    // for(int i = 0; i<n;i++){
    //     int cnt = 0;
    //     for(int j = 1;j<n;j++){
    //         if( arr[i] == arr[j]){
    //             cnt ++;
    //         }
    //     }

    //     cout <<arr[i] << "is" <<  cnt << endl;
    // }

    //   int arr[5] = {2,3,2,3,5};
    //     int n = 5;

    //     for(int i = 1; i<=n;i++){   // 1 to n loop
    //         int cnt = 0;
    //         for(int j = 0;j<5;j++){
    //             if( arr[j] == i){
    //                 cnt ++;
    //             }
    //         }

    //         cout <<i << "is" <<  cnt << endl;
    //     }


    // this is brute force apporach for counting element in given array
    int arr[] = {1, 2, 1, 1, 2, 1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int searchElement[] = {1, 2, 3, 5,6,7,8};
    int length = sizeof(searchElement)/sizeof(searchElement[0]);
    for (int j = 0; j < length; j++)
    {
        int num = searchElement[j];
        int cnt = 0;

        for (int i = 0; i < n; i++)
        { 
            if(num == arr[i]){
               cnt ++;
            }
            
        }
        cout<< num << " is presnet " << cnt << " times" <<  endl;
    }
    return 0;
}