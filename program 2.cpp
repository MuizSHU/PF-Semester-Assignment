#include <iostream>
using namespace std;
int main() 
{
    int start, end;
    int productOdd = 1;  
    bool oddFound = false;  

    cout << "Enter the starting number: ";
    cin >> start;
    cout << "Enter the ending number: ";
    cin >> end;

    cout << "Even numbers between " << start << " and " << end << " are: " << endl;
    
    for (int i = start; i <= end; i++) 
	{
        if (i % 2 == 0) 
		{
            cout << i << " ";  
        }
        else 
		{
            productOdd *= i;  
            oddFound = true;  
        }
    }

    if (oddFound) 
	{
        cout << endl << "The product of all odd numbers is: " << productOdd << endl;
    } 
	else 
	{
        cout << endl << "No odd numbers found in the range." << endl;
    }

    return 0;
}
