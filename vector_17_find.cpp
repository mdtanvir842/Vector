#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>x={2,4,6,8};
    cout<<find(x.begin(),x.end(),4)-x.begin()<<endl;//returns position
    cout<<find(x.begin(),x.end(),10)-x.begin()<<endl;//returns size

}

