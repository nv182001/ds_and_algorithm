#include <bits/stdc++.h>
using namespace std;
int Fibonacci(int n){
    //0,1,1,2,3,5,13
    if(n==0||n==1){
        return n;
    }
    return ( Fibonacci(n - 1)+Fibonacci(n-2));
}
int main(){
    int n;
    cin >>n;
    cout<<Fibonacci(n);
    return 0;
}