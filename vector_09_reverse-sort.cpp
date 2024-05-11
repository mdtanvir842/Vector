#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>x={9,7,5,3,1,2,4,6,8,10};
    sort(x.begin(),x.end(),greater<int>());
    for(auto i:x){
        cout<<i<<endl;
    }
    cout<<"Space"<<endl;
    vector<int>x1={9,7,5,3,1,2,4,6,8,10};
    sort(x1.rbegin(),x1.rend());
    for(auto j:x1){
        cout<<j<<endl;
    }
}
