#include<iostream>
using namespace std;

class Complex{
	private: int real , imag;
	public:
		Complex(int r = 0, int i=0){
			real = r;
			imag = i;
		}

		// operator + deos not act as an arithmetic operator;
		
		// //syntax: ClassName operator operator (Class cosnt &object)
		Complex operator + (Complex const &obj){    
			Complex res;
			res.real = real + obj.real;
			res.imag = imag + obj.imag;

		}
		void print(){
			cout<<real<<"+i"<<imag<<endl;
		}
};
int main(int argc, char const *argv[])
{
	
	Complex c1(10,2), c2(20,4);
	Complex c4 = c1+c2; 
	c4.print();
		return 0;
}