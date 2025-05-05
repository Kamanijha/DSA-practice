#include <iostream>
#include <string>
using namespace std;

// reverse word in string 
// string reverseWord(string s){
//     int n = s.length();
//     string ans = "";
//     reverse(s.begin(), s.end());

//     for(int i = 0;i<n;i++){
//         string word = "";
//         while (i < n && s[i] != ' ')
//         {
//            word += s[i];
//            i++;
//         }
//         reverse(word.begin(),word.end());
//         if(word.length() > 0)
//         ans += ' ' + word;
        
//     }
//     return ans.substr(1);

    
// }

// max odd substrig in string
// string maxOdd(string str){
//     int n = str.length();
//     for(int i = n -1;i >= 0;i--){
//         if(str[i] % 2 != 0){
//             // string s = str.substr(0,i+1);  
//             // return s;
//             // without using substr function
//             string res= "";
//             for(int j = 0;j <= i;j++){
//                 res += str[j];
//             }
//             return res;
//         }
//     }
//     return " ";
// }



int main(){

    string s = {"hello","world"};
    //cout << reverseWord(s) << endl;
    cout << s ;
    string str = "2345";
    //cout << maxOdd(str) << endl ;
   
    return 0;
}