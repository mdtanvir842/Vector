#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);
#define endl '\n'
int main(){
    optimize();
    vector<int> s={1,2,3,4,5,6,7,8};
    //s.erase(s.begin()+2,s.begin()+6);
    int n=find(s.begin(),s.end(),4)-s.begin();
    s.erase(s.begin()+n);
    for(auto u:s){
        cout<<u<<endl;
    }
}
