#include<bits/stdc++.h>
using namespace std;

void f(int n, int zero , int one,int cnt){
    if(n == cnt)
    return ;
    int fib = zero + one;
    cout<< fib << " ";
    int temp = zero;
    zero = one ;
    one = temp + zero;
    cnt++;
    return f(n,zero,one,cnt);
}

int main(){
    int n = 10;
    f(n,0,1,0);
    return 0;
}