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
    return 0;
}

// Collision Check
int collision() {
    int VectorSampleSize = Birthdays.size();
    for (int i = 0; i < VectorSampleSize; i++) {
         cout << i + 1 << ": " << Birthdays[i] << "\n";
    }
    cout << "Executed Collision";
    return 0;
}

int main() {
    dateassign(); 
    collision();
}