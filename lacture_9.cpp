#include <iostream>
#include <vector>
using namespace std;


// STL(standerd templete libariry) is libaryery in c++
// stl tools = vactor, que ,stack,set
// vactor = vactor dynamicaly in nature we can increse their size in memeory
// array hava fixed size we cant increase size but vactor size incresible
// VACTOR SYNTEX
// 1. vector<int>vec;
//2. vector<int>vec={1,2,3}
//3. vector<int>vec(3,0) // 3 = sz of vector and 0 = value per index

// what is differnce beetwen static and dynamic allocation
// static  = compile time run , creat in stack memeory, array allocate static
// dynamic = run time , creat in heap memory , vector allocate dynamicaly

int main(){
    // vector<int>vec; // sz = 0
    //vector <int>vec={1,2,3};  // sz =3
    // vector <int>vec(3,1);
    // cout<< vec[0]<<endl;
    // cout<< vec[1]<<endl;
    // cout<< vec[2]<<endl;
    // cout<< vec[3]<<endl;

    // for each loop for iteration
    // vector<char>vec = {'a','b','c','d','e'};
    // // deffernt method to perform diff opration
    // cout << "size = " << vec.size() << endl;
    // for(char i : vec){
    //     cout << i <<endl;
    // }


    // vector <int> vec;
    // cout << "size = " << vec.size() << endl;
    // vec.push_back(25);
    // vec.push_back(26);
    // vec.push_back(27);

    // vec.pop_back();
    // cout << "after push back size = " << vec.size() << endl;
    // for(int i : vec){
    //     cout << i << endl;
    // }

    // vector <int> vec;
    // vec.push_back(0);
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.push_back(4);
    // cout << vec.size() << endl; // total number of element inside vec
    // cout << vec.capacity() << endl; // total of space in side vec


    // linear search for vector
    vector <int>vec= {1,2,3,4,5,6};
    int target = 9;
    bool found = false;

    for(int val : vec){
        if(val == target){
            cout << "found :" << target << endl;
            found = true;
            break;
        }
        // cout << val << endl;
    }

    if(!found){
        cout << target << " not found" << endl;
    }
    return 0;
}