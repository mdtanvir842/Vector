#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	vector<int>v={4,6,8,10,12,13};
	int x=accumulate(v.begin(), v.end(), 1, multiplies<int>());
	cout<<x<<endl;

}
