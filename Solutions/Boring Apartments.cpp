#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int b =a;
        int num=a%10;
        int count=0;
        while(a>0){
            a/=10;
            count++;
        }
        if(count==1){
            cout<<((num*10)-10)+1<<endl;
        }
         else if(count==2){
            cout<<((num*10)-10)+3<<endl;
        }
         else if(count==3){
            cout<<((num*10)-10)+6<<endl;
        }
         else if(count==4){
            cout<<((num*10)-10)+10<<endl;
        }
        
    }
}
