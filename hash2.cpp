#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int q;
    cin>>q;

    int hash[256] = {0};

    for(int i = 0;i<s.size();i++){
        hash[s[i]] += 1;
    }

    while(q--){
         char c;
         cin>>c;
        cout<<"The total number of time the "<<c<<" repeted is "<<hash[c];
    }

    return 0;
}