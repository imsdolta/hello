#include<iostream>
using namespace std;
int main()
{
    int i, j;
    int x = 5;   // 5  lines of *s
    int y = 1;   // coz starts print in increments of 1 starting from 1 

    for(j = 1; j <= 5; j++)    // outer loop and 2 inner loops
    {
        for(i = 1; i <= x; i++)   // to print spaces 
        {
            cout << " ";
        }
        x--;

        for(i = 1; i <= y; i++)    // to print * next to spaces 
        {
            cout << "*";   //prints 2 stars in each line
        }
        y += 2;   // 2 * increment

       cout << endl;
    }
}