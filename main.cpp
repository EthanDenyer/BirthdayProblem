// ED CRYPT PORTFOLIO 12/10/2026
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

// Globals
int GlobalSampleSize = 100; // Please alter this to the number of participants
vector<int> Birthdays;

// Date Assign
int dateassign()
{
    Birthdays.clear();
    for (int i = GlobalSampleSize; i > 0; i--)
    {
        int RandomDay = rand() % 365 + 1;
        Birthdays.push_back(RandomDay);
    }
    return 0;
}

// Collision Check
int collision()
{
    int VectorSampleSize = Birthdays.size();
    int duplication = 0;
    for (int i = 0; i < VectorSampleSize; i++)
    {
        for (int j = i + 1; j < VectorSampleSize; j++)
        {
            if (Birthdays[i] == Birthdays[j])
            {
                duplication++;
            }
        }
    }
    return duplication;
}

int main()
{
    srand(time(nullptr));

    int Rooms = 10000;
    int RoomsWithMatch = 0;

    for (int i = 0; i < Rooms; i++)
    {
        dateassign();
        int Matches = collision();
        if (Matches > 0)
        {
            RoomsWithMatch++;
        }
    }

    double Percentage = (double)RoomsWithMatch / Rooms * 100;
    cout << GlobalSampleSize << " people per room, " << Rooms << " rooms" << "\n";
    cout << RoomsWithMatch << " rooms had a shared birthday (" << Percentage << "%)" << "\n";
}