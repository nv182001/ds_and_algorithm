#include <bits/stdc++.h>
using namespace std;
int binaryToDecimal(int n){
    // ip=101 , op=5
    // modulo with 10 then will get last digit , multiply it with 2
    int ans = 0;
    int x = 1;
    while (n>0)
    {
        ans += x *( n % 10);
        x *= 2;
         n  /= 10;
    }
    return ans;
}
int octalToDecimal(int n){
     // modulo with 10 then will get last digit , multiply it with 8
    int ans = 0;
    int x = 1;
    while (n>0)
    {
        ans += x *(n % 10);
        x *= 8;
        n /= 10;
    }
    return ans;
}

int hexadecimalToDecimal(string n){
    //find size of given n and compare with 0 to 9 and A to F
    int ans = 0;
    int x = 1;
    int s = n.size();
    for (int i = s-1; i>=0; i--)
    {
        if (n[i]>='0'&&n[i]<='9')
        {
            ans += x * (n[i] - '0');
            /* code */
        }else if(n[i]>='A'&&n[i]<='F')
        {
            ans += x * (n[i] - 'A' + 10);
        }
        x *= 16;
        /* code */
    }
    return ans;
}

int decToBin(int n){
    //first modulo and divide by 2
    //exp ip=5, op=101
    int ans = 0;
    int x = 1;
    while (n>0)
    {
        ans += (n % 2) * x;
        n = n / 2;
        x = x * 10;
    }
    return ans;
}

int decToOct(int n){
    //first modulo and divide by 8
    //exp input=100 , output=144
    int ans = 0;
    int x = 1;
    while (n>0)
    {
        ans += (n % 8) * x;
        n = n / 8;
        x = x * 10;
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    cout << decToOct(n) << endl;
    return 0;
}

//decial to hexadecimal

// int main()
// {
//     int n, rem, i=0;
//     char ans[50];
//     cout<<"Enter the Decimal Number: ";
//     cin>>n;
//     while(n!=0)
//     {
//         rem = n%16;
//         if(rem<10)
//             rem = rem+48;
//         else
//             rem = rem+55;
//         ans[i] = rem;
//         i++;
//         n = n/16;
//     }
//     cout<<"\nEquivalent Hexadecimal Value: ";
//     for(i=i-1; i>=0; i--)
//         cout<<ans[i];
//     cout<<endl;
//     return 0;
// }