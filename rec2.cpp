#include<bits/stdc++.h>
using namespace std;

void f(int cnt, string name){
    if(cnt <= 0)
    return ;
    cout<<name<<" ";
    cnt--;
    return f(cnt,name);
}
int main(){
    string name = "Bhagesh";
    int cnt = 5;
    f(5,"Bhagesh");
    return 0;
}