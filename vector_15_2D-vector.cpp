#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>v;
    vector<int>a1={1,2,3,4,5};
    vector<int>a2={2,4,6,8,10};
    v.push_back(a1);
    v.push_back(a2);
    for(auto u:v){
        for(auto n:u){
            cout<<n<<" ";
        }
        cout<<endl;
    }
}
