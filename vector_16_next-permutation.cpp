#include<bits/stdc++.h>
using namespace std;
int isVowel(char c){
    return(c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u');
}
int main(){
    vector<int>v={1,2,3};
    do{
        for(auto u:v){
            cout<<u;
        }
        cout<<"\n";
    }while(next_permutation(v.begin(),v.end()));
}
