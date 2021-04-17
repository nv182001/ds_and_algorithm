#include <bits/stdc++.h>
using namespace std;
//subsequence with ascii of given string
void subseq2(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    int code = ch;
    string ros = s.substr(1);
    subseq2(ros, ans);
    subseq2(ros, ans + ch);
    subseq2(ros, ans + to_string(code));
}
int main(){

    subseq2("ABC", "");
    return 0;
}