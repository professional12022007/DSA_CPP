#include <bits/stdc++.h>
#include <string>
using namespace std;
int main() {
    string s;
    cin>>s;
    string ans;
    int count=0;
    for(int i=1;i<s.size();i++){
    	if(s[i]==s[i-1]){
    		count++;
    		if(i==1){
    			count++;
    		}
    	}
    	else{
    		ans=ans+s[i-1];
    		ans=ans+to_string(count);
    		count=1;
    	}
    }
    cout<<ans;
    
    return 0;
}