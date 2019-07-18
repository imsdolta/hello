#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int num=12321;
    int temp;
    int reverse=0,lastdigit;
    temp=num;
    while(num!=0)
    {
        lastdigit=num%10;                         //take out last digit
        reverse=(reverse*10)+lastdigit;           //add it to rev
        num=num/10;                               //delete last digit
        
    }
    cout<<reverse;
    if(temp==reverse) cout<<"it's palindrome";
    return 0;
}
