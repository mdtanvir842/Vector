#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={7,1,2,4,6,3,8,0,3};
    sort(v.begin(),v.end());
    //0,1,2,3,3,4,6,7,8
    //1)If element exist in vector and we are finding lower bound than it gives exact value
    int n=lower_bound(v.begin(),v.end(),4)-v.begin();
    cout<<n<<" "<<v[n]<<endl;

    //2)If element exist in vector and we are finding upper bound than it gives the index of the next value
    int t=upper_bound(v.begin(),v.end(),3)-v.begin();
    cout<<t<<" "<<v[t]<<endl;

    //2)If element is the top most value of vector and we are finding upper bound than it gives the index of the next value(v.end())
    int p=upper_bound(v.begin(),v.end(),8)-v.begin();
    cout<<p<<" "<<v[p]<<endl;



    //extra
    //3)If element doesn't exist and we are finding lower bound than it gives the index of the next value.
    int m=lower_bound(v.begin(),v.end(),5)-v.begin();
    cout<<m<<" "<<v[m]<<endl;

    //4)If the element doesn't exists in vector and we are finding upper bound than it gives the index of the next value
    int x=upper_bound(v.begin(),v.end(),5)-v.begin();
    cout<<x<<" "<<v[x]<<endl;

    //5)If element doesn't exist and it is greater than the top most value of vector and we are finding lower bound than it gives the index of the next value(v.end())
    int z=lower_bound(v.begin(),v.end(),10)-v.begin();
    cout<<z<<" "<<v[z]<<endl;



    //6)If element doesn't exist and it is greater than the top most value of vector and we are finding upper bound than it gives the index of the next value(v.end())
    int y=upper_bound(v.begin(),v.end(),10)-v.begin();
    cout<<y<<" "<<v[y]<<endl;






    /* In short:lower_bound: if the element exists it gives the index of the exact value unless gives the index of the next value.
                upper_bound: No matter the element exists or not it gives the index of the next value.
    */


}
