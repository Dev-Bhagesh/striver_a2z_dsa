#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    int arr[n] = {1,1,2,3,4};
    int hash[n+1] = {0};
    int q = 5;
    int numbers[5] = {1,2,3,4,5};

    for(int i = 0;i<n;i++){
        hash[arr[i]] += 1;
    }

    int i = 0;
    while(q--){
        cout<<"The number "<<numbers[i]<<" repeated "<<hash[numbers[i]]<<endl;
        i++;
    }
    return 0;
}