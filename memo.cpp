#include <iostream>
using namespace std;
int main(){
    int a,b,k;
    cin>>a>>b>>k;
    if(a%k==0 && b%k==0){
        cout<<"Both";
    }
    else if(a%k==0){
        cout<<"Memo";
    }
    else if(b%k==0){
        cout<<"Momo";

    }
    else{
        cout<<"No One";50
    }
    return 0;
}