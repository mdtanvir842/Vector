#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int p;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>p;
        v.push_back(p);
    }
    cout<<"Size of vector is "<<v.size()<<endl;
    for(int j=0;j<v.size();j++){
        cout<<v[j]<<endl;
    }
}
