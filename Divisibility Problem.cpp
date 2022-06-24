#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b,c;
        cin>>a>>b;
        c= b-(a%b);
        if(a%b==0){
            cout<<"0"<<"\n";
            }
            else
            cout<< c <<"\n";
             }
}
