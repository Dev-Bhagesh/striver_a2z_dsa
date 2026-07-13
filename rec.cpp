#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
int sum = 0;
int f(int n){
    // if(n < 1) 
    // return n;
    // cout<<n<<" ";
    // n--;

    if(cnt > n)
    return cnt;
    sum = cnt + sum;
    cout<<sum<<" ";
    cnt++;
    int ans = f(n);
     return ans;
}

int main(){
    int n = 10;
    int ans = f(n);
    cout<<endl;
    cout<< "last output" <<" "<< ans; 
    return 0;
}