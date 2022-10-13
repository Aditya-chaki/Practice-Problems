#include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=1; i<=t; i++){
	 int l;
	 cin>>l;
	 string s;
	 int sum = 0;
	
	  cin>>s;
	 
	 int ans=0; 
	 
	 for(int i=0 ; i<l; i++){
	     if(s[i]=='1'){
	         ans++;
	     }
	       if(s[i+1]=='0'){
	         ans++;
	     }
	     else if(s[i+1]=='1'){
	         break;
	     }
	   
	 }
	cout<<ans<<endl;

	}	 
	return 0;
}
