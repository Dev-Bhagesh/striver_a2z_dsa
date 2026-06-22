#include<iostream>
using namespace std;
int main(){
    long long n = 773489;
    int count = 0;
    while(n>0){
        // int digit = n%10;
        count++;
        // cout<<digit<<" ";
        n = n/10;
    }
    cout<<endl;
    cout<<count;
    return 0;
}