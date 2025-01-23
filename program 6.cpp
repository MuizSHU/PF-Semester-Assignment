#include <iostream>
using namespace std;

int main() {
    int counter = 2;

    // Start a loop from counter = 2 to counter = 25
    while (counter <= 25) {
        // If counter reaches 13, 16, or 19, skip the iteration
        if (counter == 13 || counter == 16 || counter == 19) {
            counter++;  // Increment counter before using continue
            continue;   // Skip the rest of the loop body for this iteration
        }

        // If counter reaches 23, terminate the loop
        if (counter == 23) {
            break;  // Break the loop when counter reaches 23
        }

        // Print the counter value
        cout << counter << " ";

        // Increment counter for the next iteration
        counter++;
    }

    return 0;
}
