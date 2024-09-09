#include <iostream>
using namespace std;

string getSeason(int month) {
    switch (month) {
        case 3: case 4: case 5:
            return "Spring";
        case 6: case 7: case 8:
            return "Summer";
        case 9: case 10: case 11:
            return "Autumn";
        case 12: case 1: case 2:
            return "Winter";
        default:
            return "Invalid Month Entered";
    }
}

int main() {
    int month;
    cout << "Enter month (1 to 12): ";
    cin >> month;

    string season = getSeason(month);
    cout << "Season: " << season << endl;

    return 0;
}
