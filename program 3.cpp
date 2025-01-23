#include <iostream>
using namespace std;
int main() 
{
    int number;
    int positiveCount = 0, negativeCount = 0;

    cout << "Enter integers repeatedly (enter 0 to stop): ";
    
    do {
        cin >> number;  

        if (number > 0) 
		{
            positiveCount++;  
        } 
		else if (number < 0) 
		{
            negativeCount++;  
        }
        
    } 
	while (number != 0); 
	
    cout << "Number of positive integers: " << positiveCount << endl;
    cout << "Number of negative integers: " << negativeCount << endl;

    return 0;
}
