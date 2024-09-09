#include <iostream>
#include <string>
using namespace std;

int countValleys(const string& steps) {
    int altitude = 0;
    int valleys = 0;
    bool inValley = false;

    for (char step : steps) {
        // Update altitude
        if (step == 'U') {
            altitude++;
        } else if (step == 'D') {
            altitude--;
        }

        // Check if we are in a valley
        if (altitude < 0 && !inValley) {
            inValley = true;
        }

        // Check if we are exiting a valley
        if (altitude >= 0 && inValley) {
            valleys++;
            inValley = false;
        }
    }

    return valleys;
}

int main() {
    int n;
    string steps;

    cout << "Enter the number of steps: ";
    cin >> n;

    cout << "Enter the sequence of steps (U for up, D for down): ";
    cin >> steps;

    int result = countValleys(steps);

    cout << "Number of valleys: " << result << endl;

    return 0;
}
