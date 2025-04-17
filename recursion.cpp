#include <iostream>
using namespace std;
string str_name;

// print 1 to n number using resursion
// void printNumber(int num, int n)
// {
//     if (num == n)
//     {
//         cout << num << endl;
//         return;
//     }
//     cout << num << endl;
//     printNumber(num + 1, n);
// }

// void printNumber( int n)
// {
//     if (n == 1)
//     {
//         cout << "1" << endl;
//         return;
//     }
//     printNumber(n-1);
//     cout << n << endl;
// }

// print 1 to n even number using resursion
// void printEvenNumber(int n){
//      if(n == 2){
//         cout << 2 << endl;
//         return;
//      }

//      printEvenNumber(n -2);
//     cout << n << endl;
// }

// odd number using resursion

// void printOddNumber(int num,int n){

//    if(num > n){
//      return;
//    }
//     cout << num << endl;
//     printOddNumber(num + 2,n);
// }

//
int facto(int n)
{

    if (n == 1) return 1;

    return n * facto(n - 1);
}

// int cnt = 5;
// void printNum(){
    
//     if(cnt == 1) return ;
//     cout << cnt << endl;
//     cnt --;
//     printNum();

// }

void printNum(int n){
    if(n == 0) 
       return;
       cout<< n <<endl;
        printNum(n - 1);
       
}

int sumNumber(int n){
   if(n == 0) return 0;
   int sum = n + sumNumber(n -1);
   return sum;
}


int factorial(int n){
    if(n == 1) return 1;

    return n * factorial(n-1);
}


void reverseArr(int st , int end, int arr[], int n ){
    if(st >= end) return ;
   swap(arr[st],arr[end]);
   reverseArr(st +1,end-1,arr,n);

}

bool plindrome(int st,int end, string s){
    if(st>=end) return true;
    if(s[st] != s[end]) return false;
    return  plindrome(st +1,end -1,s); 
}

int fibNth(int n){
   if(n == 0 || n == 1) return n;
   return fibNth(n-1) + fibNth(n-2);

}

int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fib(n-1) + fib(n-2);
}

void printFibSeries(int n){
   for(int i = 0;i<n;i++){
    cout << fib(i) << " " ;
   }
}
int main()
{
    
    printFibSeries(20);
    //cout << fibNth(5) << endl;

    // string s= "abcdcba";
    // //string s = "asdfg";
    // int n = s.length();
    
    // if(plindrome(0,n-1,s)){
    //     cout << "  plindrome" ;
    // }else{
    //    cout << "not plindrome";
    // };
    // for(int i = 0;i<n;i++){
    //     cout << s[i] ;
    // }
    // int arr[5] = {3,4,5,6,2};
    //  int n = sizeof(arr) / sizeof(arr[0]);
     
    //  reverseArr(0,n-1,arr,n);
    //  for(int i = 0; i<n;i++){
    //    cout << arr[i] << " ";
    //  }
    // cout << endl;

    //cout <<factorial(8) << endl;
    //sumNumber(5);
    //printNum(10);
    //cout << facto(6) << endl;
    // printNumber (5);
    // printEvenNumber(20);
    // printOddNumber(1,11);
    
    return 0;
};