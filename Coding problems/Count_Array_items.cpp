// Appearance Array 
// Udemy 
#include<bits/stdc++.h>
using namespace std;
ifstream f("data.in"); 
ofstream g("data.out");
int a[100];
int main(int argc, char const *argv[])
{
	int n;
	f>>n;     // read from f and put in n 
	for(int i=1; i<=n;++i)
	{
		int x;
		f>>x;
		x+=10;        
		++a[x];
	}
	if (a[7] > 0 ) g<< "Appears";
	else g<<"NO";

	return 0;
}