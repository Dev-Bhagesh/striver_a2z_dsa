#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    int arr[n] = {5,4,3,2,1};

    for(int i = n-1;i>=1;i--){
        for(int j = 0;j<i;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}