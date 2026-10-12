// ED CRYPT PORTFOLIO
#include <iostream>
#include <vector>
using namespace std;

// Globals
int GlobalSampleSize = 300; // Please alter this to the number of participants
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
         for (int j = i + 1; j < VectorSampleSize; j++){
            if (Birthdays[i] == Birthdays[j]){
                int duplication = 0;
                duplication = + 1;
                cout << duplication << "Duplication Found" << "\n";
            }
         }
    }
    return 0;
}

int main() {
    dateassign(); 
    collision();
}
