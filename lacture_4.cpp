#include <iostream>
using namespace std;

// which function does not return any type of value called(void)
// function definition
// void printHello(){
//     cout << "hello\n" ;
// }


// min of 2 number
// int minOfNum(int a, int b){
//     if(a < b){
//       return a;
//     }else{
//         return b;
//     }
    
// }


// sum of n number
// int sumOfNum(int n) {
//     int sum = 0;

//     for(int i = 1; i<=n;i++){
//         sum += i;
//     }
//     return sum;
// }

// factorial of n number

// int factOfNum(int n){
//     int fact = 1;

//     for(int i = 1;i<=n;i++){
//         fact *= i;
//     }
//     return fact;
// }



// pass by value
 // first example;
// int sum(int a,int b){
//     a = a + 10; // 15
//     b = b + 10; // 14
//     return a+b;
// }

//2nd example;
// int changeX(int x){
//     x = 2*x;
//     cout << x << endl;
// }

// caiculate digit sum of given number

// int digitSum(int num){
//     int digitSum = 0;
//     while(num > 0){
//         int lastDigit = num % 10;
//         num /= 10;
//         digitSum +=lastDigit;
//     }
//     return digitSum;
// }


// calculate bionomial coficiant

// factorial function calculate factorial in any number

// int factorial(int n){
//     int fact = 1;
//     for(int i = 1;i<=n;i++){
//         fact *= i;
//     }
//     return fact;
// }

//  int nCr(int n,int r){
//      int fact_n = factorial(n);
//      int fact_r = factorial(r);
//      int fact_nmr = factorial(n-r);

//      return fact_n/(fact_r*fact_nmr);
//  }


// WAF to chack if a number is prime or not
bool isPrime = true;
void chackPrime(int n){
    for(int i = 2;i<n;i++){
        if(n % i == 0){
           isPrime = false;
           break;
        }
    }
        if(isPrime == true){
            cout << "this is prime number"<<endl;
        }else{
            cout << "this is not  prime number"<<endl;
        }
        
    
    return;
}
int main() {
   //printHello();
   // cout << minOfNum(12,44) << endl;
   // cout << sumOfNum(15) << endl;
   //  cout << factOfNum(4) << endl;
    //    int x = 5 ,y = 4;
    //    cout << sum(x,y) << endl;
    //    cout << x << endl;
    //    cout << y << endl;
     
    //  int x = 5;
    // changeX(x);
    // cout << x << endl;
    // cout << digitSum(2356456)<< endl;
    
    // int n = 8,r = 2;
    // cout << nCr(n,r) << endl;
     chackPrime(101);
     cout << endl;

    return 0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
}
