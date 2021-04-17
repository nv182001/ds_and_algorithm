#include <bits/stdc++.h>
using namespace std;

void reverse(string s){
    if(s.length()==0){
        return;
    }
    //s.substr(1) prints elements after 1st position
    string ros = s.substr(1); //ros is rest of the string
    reverse(ros);
    cout << s[0];
}
int main(){
    string s;
    cin>>s;
    reverse(s);
    return 0;
}