#include <iostream>
using namespace std;
int main(){
    char x;
    cin>>x;
    if(x>='0'&& x<='9'){
    cout<<"IS DiGIT";
    }
    else{
        if(x>='a' && x<='z'){
            cout<<"ALPHA"<<endl<<"IS SMALL";
        }
        else{
            cout<<"ALPHA"<<endl<<"IS CAPITAL";
        }
    }
    return 0;
    
}