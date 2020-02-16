#include<bits/stdc++.h>
using namespace std;
// ifstream f("data.in");
// ofstream g("data.out");

int main(){
	int range1,range2,t;
	bool prime=true;	
	cin>>t;
	while(t--){
		cin>>range1>>range2;
		for(int i=range1; i < range2; ++i)
		{
			int n = i;
			for(int j = 2; j< n; ++j){
				if(n%j == 0) {
					prime = false;
					 break;
				}		
			}	
			if(prime) cout<<n<<" ";
			prime = true;
		}
	}
	
	return 0;
}




























// global vars are initialized to zero and locals are not 