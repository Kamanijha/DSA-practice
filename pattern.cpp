#include <iostream>
using namespace std;

// void print(){
//     for(int i =1;i<=5;i++){
//         for(int j = 1;j<=i;j++){
//             cout << i ;
//         }
//         cout << endl;
//     }
// }

// void print1(){
//     for(int i =1;i<=5;i++){
//         for(int j = 1;j<=i;j++){
//             cout << i ;
//         }
//         cout << endl;
//     }
// }

// void print2(){
//     for(int i =1;i<=5;i++){
//         for(int j = 1;j<=5-i + 1;j++){
//             cout << "*" ;
//         }
//         cout << endl;
//     }
// }

// int digitCount(int N){;
//     int count = 0;
//     while (N> 0)
//     {
//       int lastDigit = N % 10;
//        count = count + 1;
//        N = N / 10;
//     }
//     return count;
// }


int main(){

    //cout <<" total count is : " << digitCount(7789) << endl;
    
    // cout<<"output is :"  <<endl;
    //  print2();
    // long long num = 4343457356382374980;
    // string str =  to_string(num);
    // string str1;
    // for(int i = str.length()-1;i>=0;i--){
    //      str1.push_back(str[i]);
    // }
    // long long  revereNum = stoll(str1);
    // cout << revereNum << endl;

    // int n;
    // cin >> n;
    // int revNum = 0;
    // int dup = n;
    // while (n >0)
    // {
    //     int id = n % 10;
    //     revNum = (revNum * 10) + id;
    //     n = n / 10;
    // }
    // //cout << revNum << endl;
    // if(dup == revNum){
    //     cout << "true"<<  endl;
        
    // }else{
    //     cout << "false" << endl;
    // }
    
    
    int n;
    cin >> n;
    int revNum = 0;
    
    while (n >0)
    {
        int id = n % 10;
        revNum = (revNum * 10) + id;
        n = n / 10;
    }
    cout << revNum << endl;
    return 0;
}