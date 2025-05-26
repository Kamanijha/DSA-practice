#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// impliment stack with array
// class Stack {
//     int * arr;
//     int size;
//     int top;
   
//    // constructer

//    public:
//    bool flag;
//     public:
//     Stack(int s){
//       size = s;
//       top = -1;
//       flag = 1;
//       arr = new int[s];
//     }

//     // push
//     void push(int value){
//         if(top == size-1){
//            cout << "stack overFlow";
//            return;
//         }else{
//             top ++;
//             arr[top] = value;
//             cout << arr[top] << " pushed into the stack" << endl;
//         }
//     }
//     // pop
//     void pop(){
//         if(top == -1){
//             cout << "stack underFlow";
//             return;
//         }else{
//             top --;
//             cout << arr[top +1] << " poped from  the stack" << endl;
//             if(top == -1)
//             flag = 0;
//         }

//     }
//     // peek
//     int peek(){
//         if(top == -1){
//             cout << "stack is empty\n";
//             return -1;
//         }else{
//             return arr[top];
//         }
//     }
//    // isEmpty

//     bool IsEmpty(){
//         return top == -1;
//     }
    
//      // isSize
//     int IsSize(){
//         return top + 1;
//     }
// };


// create satck using vector

class Stack{
    vector <int> s;
    

    public:
    void push(int val){
        s.push_back(val);
    }

    void pop(){
        if(!s.empty()){
            s.pop_back();
        }
    }

    int top(){
        if(!s.empty()){
           return s.back();
        }
        return -1;
    }

    int Empty(){
        return s.empty();
    }

    void display(){
        for(int i = s.size() -1; i >= 0;i--){
            cout << s[i] << " ";
        }
    }
};



int main(){
    // Stack S(5);
    // int value =  S.peek();
    // if(S.flag == 0);

    Stack s;
    s.push(23);
    cout << s.Empty() << endl;
    //cout << s.top() << endl;
    s.display();
    return 0;
}