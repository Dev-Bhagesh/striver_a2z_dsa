#include<iostream>
using namespace std;

void printDiviser(int n){
    for(int i = 1;i<=n;i++){
        if(n%i == 0){
            cout<<i<<endl;
        }
    }
}

int main(){
    int n = 4;
    printDiviser(n);
    return 0;
}