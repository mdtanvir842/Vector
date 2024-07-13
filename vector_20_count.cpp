#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);
#define endl '\n'
int main(){
    optimize();
    vector<int> s={1,2,3,4,5,6,7,8,4,4};
    int n=count(s.begin(),s.end(),4);
    cout<<n<<endl;

}
