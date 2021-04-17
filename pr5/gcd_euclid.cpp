#include <bits/stdc++.h>
using namespace std;
// 42=2*2*2*3
//24=2*3*7   gcd=2*3=6

int Gcd_euclid(int a,int b){
    while (b!=0)                
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout << Gcd_euclid(a, b);

}