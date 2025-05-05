#include <iostream>
#include <string>
using namespace std;

int main(){
    // char str[] = {'a','b','c','\0'};
    //char str[] = "hello";
    // in meomry look like {'h','e','l','l','o'}
    //int arr[] ={1,2,3,4}; // output is random value
    //cout << strlen(str) << endl ;

    // input of char array

    // char str[100];
    // cout << "enter char :";
    // //cin >> str; // when take input by cin they ingnore  word after space
    // cin.getline(str,100) ;
    // cout << str << endl;


    // string in c++

    string str = "hello world"; // dynamic = runtime resize and store in contiguous manner
    //str = "apan";
    //cout << str ;

    // for (int i = 0; i < str.length(); i++)
    // {
    //     cout << str[i] << " ";
    // }
    // cout << endl;
   
   // this is for Each loop
    for(char ch:str){
        cout << ch << " ";
    }
    cout << endl;
    

    // char chArr[]= "hello world"; // constant cant change value runtime
    // //chArr = "JHA";
    // cout << chArr << endl;
    return 0;
}