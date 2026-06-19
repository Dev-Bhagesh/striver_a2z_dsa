#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    vector<int>::iterator vt = v.begin();
    cout<<*vt <<" ";
    cout<<&vt <<" ";
    cout<<*v.begin()<<" ";
    cout<<*(vt)<<" ";
   vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);
    // cout<<vec[0].first;
    // cout<<vec[0].second;
    return 0;
}