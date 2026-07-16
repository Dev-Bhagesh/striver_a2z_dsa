#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 3;
    int min = 0;
    int arr[n] = {1,2,0};
    int jin = 0;

    cout<<"befor sorting"<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
     
    cout<<endl;

    for(int i = 0;i<n-1;i++){
        min = arr[i];
       
        for(int j = i;j<=n-1;j++){
            if(arr[j]<min){
                min = arr[j];
                jin = j;
            }
        }
        if(jin != 0){
            int temp = arr[i];
            arr[i] = min;
            arr[jin] = temp;
        }
        
        jin = 0;

    }

    cout<<"after sorting "<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}