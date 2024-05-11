#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={5,4,1,8,2,9,4,7,5,4,2,0};
    sort(v.begin(),v.end());
    for(auto i:v){
        cout<<i<<endl;
    }
    vector<int>v1={5,4,3,8,2,9,4,7,5,4,2,0};
    sort(v1.begin()+2,v1.begin()+6);
    cout<<"space"<<endl;
        for(auto j:v1){
            cout<<j<<endl;
        }
    vector<int>v2={5,4,3,8,2,9,4,7,5,4,2,0};
    sort(v2.begin()+2,v2.end()-4);
    cout<<"space"<<endl;
    for(auto k:v2){
        cout<<k<<endl;
    }
}
