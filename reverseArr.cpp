#include <iostream>
#include <vector>
using namespace std;


int reverseArr(int arr[],int n){
    int l = 0,h = n-1;
    while (l<h)
    {
       swap(arr[l],arr[h]);
       l++;
       h--;
    }
    
}

int reverseStr(string &str,int n){
    int l = 0,h = n-1;
    while (l<h)
    {
        swap(str[l],str[h]);
        l ++;
        h --;
    }
    
}

// charcter array reverse

void reverseChar(vector <char>&s){
    int st = 0,en = s.size()-1;
    while (st < en)
    {
        swap(s[st],s[en]);
        st ++;
        en --;
    }
    
}

bool isPalindrome(string str){
    int st = 0, en = str.size()-1;
    while (st < en)
    {
        if(str[st] != str[en]){
            return false;
        }
        st ++;
        en --;
    }
    return true;
    
}
int main(){
    // int arr[] = {22,3,44,56,77,54,45};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // reverseArr(arr,n);
    // for(int i : arr){
    //     cout << i << " ";
    // }
    // cout << endl;

    // string str = "hello";
    // int n = str.length();
    //  reverseStr(str,n);
    // for(char ch : str){
    //     cout << ch << " ";

    // }
    // cout << endl;

    // vector<char> s = {'h','e','l','l','o'};
    // reverseChar(s);
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << " ";
    // }
    
    // cout << endl;
    

    string str = "abcba";
    cout << isPalindrome(str) << endl;
    return 0;
}