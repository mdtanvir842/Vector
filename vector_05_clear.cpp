#include<bits/stdc++.h>
using namespace std;
int main(){
    //vector<int>v={2,4,6,8,10};
    vector<int>v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(10);
    v.push_back(12);
    cout<<v.size()<<endl;
    cout<<v.empty()<<endl;
    v.clear();
    cout<<v.size()<<endl;
    cout<<v.empty()<<endl;
}
