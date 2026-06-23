#include<iostream>
using namespace std;

bool isArm(int n){
    int dup = n;
    int cap = 0;
    int result = 0;
    int count = 0;
    int temp = 0;
    while(n != 0){
        count++;
        n = n/10;
        
    }
    n = dup;
    cout<<"n is = "<<n<<endl;
    for(int j = 0;j<count;j++){
        temp = n % 10;
        int digit = n % 10;
        cout<<"---------------"<<endl;
        cout<<endl;
        cout<<"digit at iteration "<<digit<<endl;
        cout<<endl;
        for(int i = 1;i<count;i++){
            cout<<"cap assigned"<<"-----------"<<endl;
            cout<<endl;
            cap =digit * temp;
            cout<<cap<<" ";
            cout<<endl;
            digit = digit * temp;
            cout<<"digit = digit * count <<"<<digit<<endl;
            cout<<endl;
        }
        
        n = n/10;
        result = result + cap;
        cout<<"after inner loop the result is = ";
        cout<<result<<endl;
        cout<<endl;
        cap = 0;
    }
    cout<<"----------"<<endl;
    cout<<result<<endl;
    if(result == dup){
        return true;
    }else{
        return false;
    }
}

int main(){
    int n = 1634;
    cout<<isArm(n);
    return 0;
}