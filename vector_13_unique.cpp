#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,3,3,5,5,4,4,7,7,6,6};
    sort(v.begin(),v.end());
    int size=unique(v.begin(),v.end())-v.begin();//hint:iterator
    for(int i=0;i<size;i++){
        cout<<v[i]<<endl;
    }
}
