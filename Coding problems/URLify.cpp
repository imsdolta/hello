/*
URLify: Write a method to replace all spaces in a string with '%20'. You may assume that the string
has sufficient space at the end to hold the additional characters, and that you are given the "true"
length of the string. (Note: If implementing in Java, please use a character array so that you can
perform this operation in place.)
EXAMPLE
Input: "Mr John Smith ", 13
Output: "Mr%20John%20Smith" 
*/

/*
method: i/p->	exam ple
	when space is encountered move all the elements post space two position forward 
	insert %,2 and 0 individually in new 3 spaces
	
	
*/
#include<bits/stdc++.h>
using namespace std;
string URLify(string str, int n)
{
	if(n == 1 ) return str;

	for(int i=0; i < n; ++i){
		if(str[i] ==' '){
			for(int j=n+2; j>=i;--j)   // creating extra 2 spaces 
				str[j] = str[j-2];      

			str[i++]='%'; 
			str[i++]='2';
			str[i++]='0';
		}
	}
     
	return str;
}
int main()
{
	string str = "M";
	int n = str.size()-1;
	cout<<URLify(str,n);
	return 0;
}