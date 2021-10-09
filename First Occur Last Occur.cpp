
*******************************************************************************/

#include <iostream>

using namespace std;
int firstIndex(int a[],int k,int n){
    
    int start=0;
    int end=n-1;
    int mid=0;
    int focc,locc=-1;
    while(start<=end){
        mid=start + (end-start)/2;
        if(a[mid]==k){
            focc=mid;
            end=mid-1;
        }else if(a[mid]>k){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }return focc;
}
int lastIndex(int a[],int k,int n){
    
    int start=0;
    int end=n-1;
    int mid=0;
    int locc=-1;
    while(start<=end){
        mid=start + (end-start)/2;
        if(a[mid]==k){
            locc=mid;
            start=mid+1;
        }else if(a[mid]>k){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }return locc;
}
int main()
{
    int a[]={2,3,5,5,5,8,10};
    int n=sizeof(a)/sizeof(a[0]);
    int k=5;
    cout<<"Occurence of "<<k<< " is from "<<firstIndex(a,k,n)<<" ";
    cout<<"to "<<lastIndex(a,k,n);
    

    return 0;
}
