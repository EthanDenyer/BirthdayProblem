// ED CRYPT PORTFOLIO
#include <iostream>
#include <vector>
using namespace std;

// Globals
int GlobalSampleSize = 50; // Please alter this to the number of participants
vector<int> Birthdays;

// Date Assign
int dateassign() {
    for (int i = GlobalSampleSize; i > 0; i--){
        int RandomDay = rand() % 365 + 1;
        Birthdays.push_back(RandomDay);
    }
        for (int Birthday : Birthdays ) {
        cout << Birthday << "\n";
    }
    
    return 0;
}

// Main
int main() {
    dateassign();
    return 0;
}
