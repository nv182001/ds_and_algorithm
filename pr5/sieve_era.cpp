#include <bits/stdc++.h>
using namespace std;

void SieveOfEra(int n){
    bool prime[n + 1];
    //memeset sets the values of prime to true upto its size
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}
int main(){
    int n;
    cin>>n;
    cout << "prime no from ";
    cout<<(n)  <<endl;
    SieveOfEra(n);
    return 0;
}