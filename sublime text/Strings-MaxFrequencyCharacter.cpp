#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
	cin>>s;
	int count=1;
	int max=0;
	vector<pair<char, int>> v;
	for(int i=0;i<s.size();i++){
		count =1;
		for(int j=1;j<s.size();j++){
			if(s[i]==s[j]){
				count++;
				if(max<count){
					max=count;
				}
			}
		}
	}
    
    return 0;
}