// --------------------using sliding window--------------------
#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<char,int>mp;
    int i=0;int j=0,maxer=0;
    string s="aabacbdcebebed";
    while(j<s.size()){
         
         mp[s[j]]++;
         
         if(mp[s[j]]==1){
             maxer=max(maxer,j-i+1);
             j++;
             
         }
 
        else if(mp[s[j]]==2){
            while(mp[s[j]]!=1){
                mp[s[i]]--;
                i++;
            }
            j++;
        }
        
    }
    cout<<maxer;
   
}


// TC: O(n), SC: O(N)     --> Without Sliding window
#include<bits/stdc++.h>
using namespace std;

int longestSusbstr(string s) {

   int result = 0, i = 0, j = 0;
   set<int> seet;
   
   while (i < s.length()) {
	if (!seet.count(s.at(i))) {
		seet.insert(s.at(i));
		i++;
		result = max(result, i - j);
	} else {
		seet.erase(s.at(j));
		j++;
	}
   }
   return result;
}

int main(){
    string s="abcdeeeeeeefghijkl";
    int ans=longestSusbstr(s);
    cout<<ans;
    return 0;
}