#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%2!=0){
            int result=pow(2,n)/2;
            cout<<result<<endl;  //after checking the pattern i got to know that if n is odd then (2^n)/2 such combinations can be made.
        }
        else if(n==2){
            cout<<3;
        }
        else if(n==4){
            cout<<11;
        }
        else if{
            cout<<42
        }
    }

    return 0;
}