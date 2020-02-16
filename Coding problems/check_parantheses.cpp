#include<bits/stdc++.h>
using namespace std;
ofstream  g("data.out");
bool solve(string str)
{
	stack<char> st;
	int len = str.length();
	for(int i=0; i < len-1; ++i){
		char ch;
		if(str[i] == '{' || str[i] == '(' || str[i] =='['){
			st.push(str[i]);
			ch = str[i];
			
		}
		else if(str[i] == '}' || str[i] == ')' || str[i] ==']'){
		
			char x = st.top();
			st.pop();
			if(x != ch || st.empty()){
				return false;
			} 
		}
	}
	if(st.empty()) 
			return true;
	return false;
}

int main(int argc, char const *argv[])
{
	string str = "{()[](){}}";
	if(solve(str)) g<<"true";
	else g<<"false";
	return 0;
}