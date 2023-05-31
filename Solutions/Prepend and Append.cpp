#include <bits/stdc++.h>
using namespace std;
 
void solved(){
int n;
cin>>n;
string s;
cin>>s;
int a=0,b=n-1;
while(a<b){
	if(s[a]!=s[b]){
		a++;b--;
	}
	
	else{
break;
}
}
cout<<(b-a+1)<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
	solved();
}
}
