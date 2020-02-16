/*
Not checked for all the test cases
One Away: There are three types of edits that can be performed on strings: insert a character,
remove a character, or replace a character. Given two strings, write a function to check if they are
one edit (or zero edits) away.

EXAMPLE
pale, bae -> false 
pale, ple -> true
1111  000
odds=0,
pales, pale -> true
11111  00
pale, bale -> true
1111  1111
*/
#define M 26
int freq[M];
#include<bits/stdc++.h>
using namespace std;
bool OneAway(string str,string test){
	int len = str.length();
	int lenT = test.length();

	if(len == 0  || lenT ==0 || (len == lenT) )
	 	return false;

	 memset(freq, 0, M*sizeof(int));
	for(int i=0; i<len;++i)
		freq[str[i]-'a']++;

	int odds = 0;

	for(int i=0;i<lenT;++i)
	{
		if(freq[test[i]-'a'] == 1)
			freq[test[i]-'a'] = 0;
		else 
			odds++;

	}

	if(odds==1) return false;
	if(odds%2 == 1 && odds > 1 )
		return true;
	return true;

}
int main(int argc, char const *argv[])
{
	string str = "pale";
	string test ="bae";
	if(OneAway(str,test)) cout<<"true\n";
	else cout<<"False\n";
	return 0;
}

