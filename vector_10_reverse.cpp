#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>x={9,7,5,3,1,2,4,6,8,10};
    reverse(x.begin(),x.end());
    for(auto i:x){
        cout<<i<<endl;
    }
}
