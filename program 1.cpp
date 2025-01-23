#include <iostream>
using namespace std;
int main() 
{
    int n, sum = 0, i = 1;

    cout << "Input the value for the nth term: ";
    cin >> n;

    while (i <= n) 
	{        
	    int term = i * i;  
        cout << i << "*" << i << " = " << term << endl; 
        sum += term;  
        i++;  
    }
    
    cout << "The sum of the above series is: " << sum << endl;

    return 0;
}
