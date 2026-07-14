#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter n"<<endl;
    int n;
    cin>>n;
    int arr[n] ={0};
    map<long,long> map;
    cout<<"Insert array values"<< endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        map[arr[i]]+=1;
    }
    cout<<"map insertion complete"<<endl;
    cout<<"enter q"<<endl;
    int q;
    cin>>q;
    while(q--){
        cout<<"enter the number you want to check: ";
        int number;
        cin>>number;
        cout<<endl;
        cout<<"The total number of times "<<number<<" is repeted "<<map[number]<<endl;
    }
    int maxfreq = 0;
    int ele = 0;
    for(auto it:map){
        if(it.second > maxfreq){
            maxfreq = it.second;
            ele = it.first;
        }
    }

    cout<<"The element with maximum frequency is "<<endl;
    cout<<ele<<" : "<<maxfreq;

    return 0;
}