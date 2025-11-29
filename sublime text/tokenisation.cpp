#include <bits/stdc++.h>
using namespace std;
int main() {
    char text[] = " Welcome to C++ programming with Mirai School of Techenolgy.";
    const char* delimiters = " ,!."; 
   vector<string> tokens;
    char* token =strtok(text, delimiters); 
    while (token != nullptr) {
        tokens.push_back(token);
        token = strtok(nullptr, delimiters); 
    }
    for (const auto& word : tokens) {
        cout << word << endl;
    }
    return 0;
}
