#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    string b;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
    	for (int j = 0; j <s.size() ; j++)
    	{
    		b=s.substr(i,j-i+1);
    		cout<<b;
    	}
    }
    
    return 0;
}