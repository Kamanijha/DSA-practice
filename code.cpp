#include <iostream>
using namespace std;

// in c++ variable is called identifire
// primitive data type = int,char,float,bool,double
// int = ocuupy 4 bytes (1 bytes = 8 bits)
// char = ocuupy 1 bytes (8 bits)
// flaot = 4 bytes
// bool =  1 bytes 
// double = 8 bytes
int main() {
  //   cout << "kamani" << endl <<"jha" << endl;
  //    int age = 26;
  //    char grad = 'a'
  //    float PI = 3.14f;
  //    bool isSafe = false;  // true -> 1 & false -> 0
  //    double price = 100.98
  //    cout << sizeof(age) << endl;

  // input from user
  // int age;
  // cout << "Enter the age :";
  // cin >> age;
  // cout << "you age is :" << age << endl;

  // type casting two types = conversion and casting
  // conversion = implicit
  // casting = explicit
  // double price = 100.99;
  // int newPrice = (int)price;
  // cout << newPrice << endl;

  // int a = 5;
  // double b = 2;
  // cout << (a / b) << endl;
  // arithmatic oprator 
  // RELATIONAL oprator value = true and false
  // logical oprator OR(||) AND(&&) NOT(!)
  // if ans of NOT oprator (true = false) (false = true)
  // OR(||) In multiple statement if one statement will give true then final ans is true
  // T || F = T
  // F || T = T
  // T || T = T
  // F || F = F
  //AND (&&)  IF all statement gives true then ans wiil be true
  // cout << ((3 < 5) && (4 > 5)) << endl;
    

    // add two numer
   int a , b;
   cout << "enter the number :" ;
   cin >> a;
   cout << "enter the number :" ;
   cin >> b;
   int sum = a + b;
   int diff = a -b;
   int multi = a * b;
   int divsion = a / b;

   cout << sum << endl;
   cout << diff << endl;
   cout << multi << endl;
   cout << divsion << endl;
   
  //

  // increment ++ and dcrement -- oprator
  // a++  and  ++a 
  // a-- and --a

  // int a = 10;
  // int b = ++a;
  //  cout << "b = " << b << endl; // 11
  //  cout << "a = " << a << endl; // 11

   
  return 0;
}
