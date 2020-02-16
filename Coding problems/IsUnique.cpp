#include<bits/stdc++.h>
using namespace std;
// Implement an algorithm to determine if a string has all unique characters. What if you
// cannot use additional data structures?

//how i solve it
/*1.  put all chars in s set
 {
	string str ="sachinnn";
	if(str.size-1 > 128)
 	cout<<"not Unique";
 	set<char> set;
	for(auto c: str){
		set.insert(c);
	}
	for(auto a: set) cout<<a;
 }
*/
/*
2. string str = "sachin";
	int n = str.size();

	for(int i=0; i<n; i++){
		for(int j=i+1;j<n;j++)
		{
			if(str[i] == str[j])
			{
				cout<<"NO";
				exit(0);
			} 

		}
	}
	cout<<"yes";
*/
int main(int argc, char const *argv[])
{
	
	
	return 0;
}