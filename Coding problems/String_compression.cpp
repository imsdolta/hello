/*
String Compression: Implement a method to perform basic string compression using the counts
of repeated characters. For example, the string aabcccccaaa would become a2blc5a3. If the
"compressed" string would not become smaller than the original string, your method should return
the original string. You can assume the string has only uppercase and lowercase letters (a - z
*/

 // h e l l o 
 // 0 1 2 3 4  i+1 < len

#include<bits/stdc++.h>
using namespace std;
string Compress(string str, int len)
{
	if(len == 0 || len ==1 )
		return str;

	int count = 0;  // count consecutive letter and append them to final answer
	string ans="";
	for(int i = 0; i < len; ++i ) {
		if(i+1 < len && str[i] == str[i+1])
		{
			count++;
			continue;
		}
		ans += str[i] + to_string(count+1);
		count = 0;
	}

	if(ans.length() == len )   // return original if len of compressed string is same
		return str;

	return ans;
}		
int main(int argc, char const *argv[])
{
	string str = "aabcccccaaa";
	int len = str.length();

	cout<<Compress(str,len);
	return 0;
}
