#include<bits/stdc++.h>
using namespace std;

//  https://www.geeksforgeeks.org/print-all-palindrome-permutations-of-a-string/
/*
Palindrome Permutation: Given a string, write a function to check if it is a permutation of
a palindrome. A palindrome is a word or phrase that is the same forwards and backwards. A
permutation is a rearrangement of letters. The palindrome does not need to be limited to just
dictionary words.
EXAMPLE
Input: Tact Coa
Output: True (permutations: "taco cat'; "atco eta·; etc.)
*/
string l = string("sdfsd");

int freq[26];
bool isPalindrome(string str)
{
	int n = str.length();
	memset(freq , 0 , 26*sizeof(int));   
	for(int i = 0; i < n ; ++i)
	{
		freq[str[i] - 'a']++;
	}
    /* Palindrome condition : 
    if length is odd then only one letter's frequency must be odd 
    if length is even no letter should have odd frequency */
	int odd = 0;
	for(int i=0; i<n;++i){        
		if(freq[i] % 2== 1) 
			odd++;
	}

	if((n%2==1 && odd ==1) || (odd ==0 && n%2 ==0 ))
		return true;
	return false;

}
string reverse(string str){
	
	reverse(str.begin(), str.end());
	return str;
}
void printPermutations(string str){
	string half = " ";
	int l = str.length();
	char Oddc; // to add that odd middle character (odd_char)^~~~


	for(int i=0; i<26; ++i)
	{
		if(freq[i] % 2 == 1)
			Oddc = i +'a';
		half += string(freq[i]/2 , i+'a');  // half part of the string
	}
	cout<<half;
	string palin=""; // stores palindrome string

	do{
		palin = half; 
        if (l % 2 == 1) 
            palin += Oddc; 
        palin += reverse(half); 
        cout << palin << endl; 
	}while(next_permutation(half.begin(),half.end()));


}
int main()
{
	string str ="dbaacaabd";
	printPermutations(str);

	// if(isPalindrome) cout<<"isPalindrome";
	// else cout<<"Not a Palindrome";
	return 0;
}
