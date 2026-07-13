#include<bits/stdc++.h>
using namespace std;

void printDiviser(int n){
    // for(int i = 1;i<=n;i++){
    //     if(n%i == 0){
    //         cout<<i<<endl;
    //     }
    // }
    vector<int> ls;
    for(int i = 1;i<=sqrt(n);i++){
        if(n%i == 0){
            // cout<<i<<" ";
            ls.push_back(i);
            if((n/i) != i){
                ls.push_back(n/i);
                // cout<<(n/i)<<endl;
            }
        }
    }
    sort(ls.begin(),ls.end());
    for(auto i : ls) cout<<i<<" ";
}

int main(){
    int n = 36;
    printDiviser(n);
    return 0;
}