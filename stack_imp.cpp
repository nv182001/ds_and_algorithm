                      
                    //   ****************nearest greater right***************//
                      
                      
#include <bits/stdc++.h>

using namespace std;
vector<long long> printNGE( vector<long long> arr, int n)
{
	stack<int> s;
	vector<long long > res;
	for (int i = n - 1; i >= 0; i--) {                    // n-1 to 0
		if (!s.empty()) {
			while (!s.empty() && s.top() <= arr[i]) {
				s.pop();
			}
		}
		if(s.empty()) {res.push_back(-1) ;}else res.push_back(s.top());
		s.push(arr[i]);
	}
	reverse(res.begin(),res.end());                         //reverse
	return res;
// 	for (int i = 0; i < n; i++)
// 		cout << arr[i] << " --> " << res[i] << endl;
}
// Driver Code
int main()
{
	std::vector<long long > arr = { 22,5,12,11, 13, 21, 3 };
	int n = arr.size();

	// Function call
	vector<long long >ans=printNGE(arr, n);
		for (int i = 0; i < n; i++)
		cout << ans[i]<<" ";
	return 0;
}

                  //****************nearest greater left***************//
                 
                 
#include <bits/stdc++.h>

using namespace std;
vector<long long> printNGE( vector<long long> arr, int n)
{
	stack<int> s;
	vector<long long > res;
	for (int i = 0; i <n; i++) {                 //just change the condition  =>        0 to n
		if (!s.empty()) {
			while (!s.empty() && s.top() <= arr[i]) {
				s.pop();
			}
		}
		if(s.empty()) {res.push_back(-1) ;}else res.push_back(s.top());
		s.push(arr[i]);
	}
// 	reverse(res.begin(),res.end());                     and do not reverse
	return res;
}
int main()
{
	std::vector<long long > arr = { 5,12,11, 13, 21, 3 };
	int n = arr.size();

	// Function call
	vector<long long >ans=printNGE(arr, n);
		for (int i = 0; i < n; i++)
		cout << ans[i]<<" ";
	return 0;
}


                  //  ****************nearest smaller right***************//


#include <bits/stdc++.h>

using namespace std;
vector<long long> printNGE( vector<long long> arr, int n)
{
	stack<int> s;
	vector<long long > res;
	for (int i = n-1; i>=0; i--) {                                //just change the condition
		if (!s.empty()) {
			while (!s.empty() && s.top() >= arr[i]) {            //change the condition
				s.pop();
			}
		}
		if(s.empty()) {res.push_back(-1) ;}else res.push_back(s.top());
		s.push(arr[i]);
	}
	reverse(res.begin(),res.end());
	return res;
}
int main()
{
	std::vector<long long > arr = { 5,12,11,11, 13, 21, 3 };
	int n = arr.size();

	// Function call
	vector<long long >ans=printNGE(arr, n);
		for (int i = 0; i < n; i++)
		cout <<arr[i] <<"->"<< ans[i]<<" ";
	return 0;
}

                  // ****************nearest smaller left***************//


#include <bits/stdc++.h>

using namespace std;
vector<long long> printNGE( vector<long long> arr, int n)
{
	stack<int> s;
	vector<long long > res;
	for (int i = 0; i <n; i++) {                                //just change the condition
		if (!s.empty()) {
			while (!s.empty() && s.top() >= arr[i]) {            //change the condition
				s.pop();
			}
		}
		if(s.empty()) {res.push_back(-1) ;}else res.push_back(s.top());
		s.push(arr[i]);
	}
// 	reverse(res.begin(),res.end());                              and do not reverse
	return res;
}
int main()
{
	std::vector<long long > arr = { 5,12,11,11, 13, 21, 3 };
	int n = arr.size();

	// Function call
	vector<long long >ans=printNGE(arr, n);
		for (int i = 0; i < n; i++)
		cout <<arr[i] <<"->"<< ans[i]<<" ";
	return 0;
}
