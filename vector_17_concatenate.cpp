#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>s1={1,3,5,7,9};
    vector<int>s2={2,4,6,8,10};
    s1.insert(s1.end(),s2.begin(),s2.end());
    for(auto u:s1){
        cout<<u<<endl;
    }
}

