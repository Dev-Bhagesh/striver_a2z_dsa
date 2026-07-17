#include<bits/stdc++.h>
using namespace std;

void insertion(int n,int arr[]){
    cout<<"befor sorting"<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i = 0;i<n;i++){
        for(int j = i;j>0;j--){
            if(arr[j]<arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
    cout<<"after sorting"<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return;
}

int main(){
    int n = 5;
    int arr[n] = {5,4,3,2,1};
    insertion(n,arr);
    return 0;
}