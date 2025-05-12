#include <iostream>
using namespace std;

// void fun0(int n){
//     cout << "happy birthdy" << endl;
// }

// void fun1(int n){
//     cout << n << "days left for birthdays" << endl;
//     fun0(n-1);
// }

// void fun2(int n){
//     cout << n << "days left for birthdays" << endl;
//     fun1(n-1);
// }

// void fun3(int n){
//     if(n == 0){
//         cout << "happy birthdays" << endl;
//         return;
//     }
//     cout << n << "days left for birthdays" << endl;
//     fun3(n- 1);
// }

// print n to 1
// void printNumber(int n){
//    if(n == 0) return;
//    cout << n << endl;
//    printNumber(n-1);

// }

void printEvenNumber(int n)
{
    if (n == 1){
        cout << 1 << endl;
        return;
    }
    
    cout << n << endl;
    printEvenNumber(n - 2);
}
// chack number prime or not

int countDigit(int n){
    int cnt = 0;
    string sz = to_string(n);
    for(int i =0;i<sz.length();i++){
        cnt ++;
    }
    return cnt;
}


int removeDuplicate(int arr[],int n){

    int cnt;
    for(int i = 0;i<n;i++){
        if(arr[i] != cnt){
            cnt = arr[i];
            cnt ++;
        }
    }
    return cnt;
}
int main()
{
    
    int arr[] = {0,0,1,1,1,2,2,3,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << removeDuplicate(arr,n) << endl;
    // int n = 12334;
    // cout << countDigit(n) << endl;
   // printEvenNumber(9);
    // printNumber(15);
    //     int age;
    //     cout << "enter age :";
    //     cin >> age;

    //    if(age >= 18) {
    //        cout << "you can vote\n";
    //    }else{
    //        cout << "you cant vote\n";
    //    }

    // int marks;
    // cout << "enter marks :";
    // cin >> marks;

    // if(marks >= 90) {
    //     cout << "A\n";
    // }else if(marks >= 80 && marks < 90) {
    //     cout << "B\n";
    // }else if(marks >= 70 && marks < 80){
    //     cout << "C\n";

    // }else{
    //     cout << "D\n";
    // }

    // CHARCTER RELATED QUESTION
    // char ch;
    // cout << "enter char ;";
    // cin >> ch;

    // if(ch >= 'a' && ch <= 'z'){
    //     cout << "lowerCase\n";
    // }else{
    //     cout << "upperCase\n";
    // }

    // print 1 to n number
    // int count = 1;
    // while(count <= 15) {
    //     cout << count << " ";
    //     count++;
    // }
    // cout << endl;

    // int sum ;
    // int n = 5;
    // for(int i = 1; i <= n; i++){
    //     if(i % 2 == 1){
    //         // std::cout << i << std::endl;
    //         sum += i;
    //     }

    // }
    // cout << sum << endl;

    // recursion concept  in iterative apporach
    //  int n = 3;
    // for(int i = n; i>0;i--){
    //     cout << i << "days left for birthdays" << endl;
    // }
    // cout << "happy birthdays" << endl;
    // fun3(6);
    // fun2(2);
    // fun1(1);
    // fun0(0);
    return 0;
}
