#include <bits/stdc++.h>
using namespace std;
//remove duplicate adjacent from string
string removeDupli(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans = removeDupli(s.substr(1));
    if (ans[0]==ch)
    {
        return ans;
    }
    return (ch + ans);
}
int main(){
    
    cout<<removeDupli("aabsfyssyyyyy");
    return 0;
}