#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={2,4,6,8,10};
    vector<int>v1={1,3,5,7,6};
    vector<int>v3(v.size()+v1.size());
    merge(v.begin(),v.end(),v1.begin(),v1.end(),v3.begin());
    for(auto u:v3){
        cout<<u<<endl;
    }
}

