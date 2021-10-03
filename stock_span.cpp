                      
                    //   ****************stock span problem ***************  //
                    
  //consecutive smaller or equal before it      =>  if NGL index found then  =>   i-NGL indedx 
  // for that use pair<ngl,ngl-index> of stak , push ngl index in vector then minus from i,  OR directly push  res.push_back(i-s.top().second)
//   NGL=nearest greater element
                      
#include <bits/stdc++.h>

using namespace std;
vector<long long> printNGE( vector<long long> arr, int n)
{
	stack<pair<int,int>> s;
	vector<long long > res;
	for (int i =0; i <n; i++) {                    // n-1 to 0
		if (!s.empty()) {
			while (!s.empty() && s.top().first <= arr[i]) {
				s.pop();
			}
		}
// 		if(s.empty()) {res.push_back(-1) ;}else res.push_back(s.top().second);
if(s.empty()) {res.push_back(1) ;}else res.push_back(i-s.top().second);
		s.push({arr[i], i});
	}
                
// 	for(int i=0;i<res.size();i++){
// 	    res[i]=i-res[i];
// 	}	      
	return res;
}
int main()
{
	std::vector<long long > arr = { 100,80,60,70,60,75,85 };
	int n = arr.size();

	// Function call
	vector<long long >ans=printNGE(arr, n);
		for (int i = 0; i < n; i++)
		cout << ans[i]<<" ";
	return 0;
}


                      
