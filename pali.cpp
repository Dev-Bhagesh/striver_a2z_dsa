#include<bits/stdc++.h>
using namespace std;

bool f(vector<int> v){
    if(v.size() == 0 || v.size() == 1)
    return true;

    int last = v.back();
    int front = v.front();

    if(last == front){
        v.erase(v.begin());
        v.pop_back();
        return f(v);
    }else{
        return false;
    }
}

int main(){
    vector<int> v = {1,2,3,2,1};
    int ans = f(v);
    if(ans){
        cout<<"It is a palindrome";
    }else{
        cout<<"int is not a palindrome";
    }
    return 0;
}