#include <bits/stdc++.h>
#include <ctime>
using namespace std;

int main() {
    auto start_time = clock();	
	string s;
	cin>>s;

	for(int i=0;i<s.size();){
		if(s[i]=='A' ||s[i]=='a' ||s[i]=='E' ||s[i]=='e' ||s[i]=='I' ||s[i]=='i' ||s[i]=='O' ||s[i]=='o' ||s[i]=='u' ||s[i]=='U'){
			i++;
		}
		else{
			cout<<"Not A Good String";
			return 0;
		}
	}
cout<<"Good String";
auto end_time = clock();	


 cerr << "Time: " << (double)(end_time - start_time) / CLOCKS_PER_SEC << "s" << endl;
    
    return 0;
}