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

// longest common prefix in string

string commonPrefix(string str[],int n){
   sort(str,str+n);
   string first = str[0];
   string last = str[n-1];
   string prefix ="";
   for(int i = 0;i<n;i++){
    if(first[i] == last[i]){
        prefix += first[i];
        
    }else{
        break;
    }
   }
    return prefix;
}


// isomorphic string

int isIsomorphic(string s1,string s2){
    if(s1.length() != s2.length()){
        return false;
    }

    int n = s1.length();
    for(int i = 0; i<n;i++){
        char c1 = s1[i];
        char c2 = s2[i];

        for(int j = 0;j<n;j++){

            if(s1[j] == c1 && s2[j] != c2){
                return false;
            }

            if(s2[j] == c2 && s1[i] != c1){
                return false;
            }
        }
    }
    return true;
}
int main(){

    string s1 = "paper";
    string s2 = "title";
    cout << isIsomorphic(s1,s2) << endl;

     
    // string str[] = {"ball","caby","banana"};
    // cout << str->length() << endl;
    // int n = sizeof(str)/sizeof(str[0]);
    // string res = commonPrefix(str,n) ;
    // cout << res ;
    //string s = {"hello","world"};
    //cout << reverseWord(s) << endl;
    //cout << s ;
    //string str = "2345";
    //cout << maxOdd(str) << endl ;
   
    return 0;
}