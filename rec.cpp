#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
int sum = 0;

int fact = 1;
int cn = 1;
int f(int n){
    // if(n < 1) 
    // return n;
    // cout<<n<<" ";
    // n--;

    if(cn > n)
    return fact;
    fact = cn * fact;
    cout<<fact<<" ";
    cn++;
    int ans = f(n);
     return ans;
}

int main(){
    int n = 5;
    int ans = f(n);
    cout<<endl;
    cout<< "the factorial of "<< n <<" is "<< ans; 
    return 0;
}