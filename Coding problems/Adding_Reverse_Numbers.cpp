#include<bits/stdc++.h>
/*
	given two numbers num1 and num2 
	reverse num1 and num2
	add num1 and num2 
	display  addition
	

*/
using namespace std;
int revnum(int num){     // fun to reverse 
	int rev = 0;
	while(num > 0){
		int digit = num % 10;
		 rev = rev * 10 + digit;
		num /=10;
	}
	return rev;
}
int main(int argc, char const *argv[])
{
	int t;
	int num1,num2;
	cin>>t;
	while(t--){
		cin>>num1>>num2;
		cout<<revnum(num1) +  revnum(num2);
	}
	return 0;
}