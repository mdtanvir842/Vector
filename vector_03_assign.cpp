#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={2,4,8,1,3};
    v[0]=10;
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    //another
    vector<int>v1(10);
    for(int i=0;i<v1.size();i++){
        cin>>v1[i];
    }
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<endl;
    }
}
