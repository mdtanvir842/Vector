#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,3,3,5,5,0,4,9,4,7,7,6,6};
    int n=max_element(v.begin(),v.end())-v.begin();//hint:iterator
    int n1=min_element(v.begin(),v.end())-v.begin();
    cout<<v[n]<<endl;
    cout<<v[n1]<<endl;
}
