#include<bits/stdc++.h>
using namespace std;

vector<int> f(vector<int> v, vector<int> b){
    if(v.size() == 0)
    return b;

    int last = v.back();
    // b.insert(b.begin(),last);
    b.push_back(last);
    v.pop_back();
    return f(v,b);
}

int main(){
    vector<int> v = {1,2,3,4,5};
    vector<int> b ;
    vector<int> ans = f(v,b);
    cout<<"Original vector"<<endl;
    for(int j = 0;j<v.size();j++){
        cout<<v[j]<<" ";
    }
    cout<<endl;
    cout<<"After reversing "<<endl;
    for(int i = 0 ;i< ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}