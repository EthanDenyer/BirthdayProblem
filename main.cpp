// ED CRYPT PORTFOLIO 11/10/2026
// Last edit 12/10/2026
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

// Globals
int GlobalSampleSize = 23; // Please alter this to the number of participants
bool ShowExampleRoom = true;  // When true it will print the first room in full. Good way to see how code is running / debug.
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
int collision(bool ShowDetails)
{
    int VectorSampleSize = Birthdays.size();
    int duplication = 0;
    {
        cout << "Example Room:" << "\n";
        for (int i = 0; i < VectorSampleSize; i++)
        {
            cout << "Person " << i + 1 << ": day " << Birthdays[i] << "\n";
        }
        cout << "\n";
    }

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
        if (ShowDetails)
    {
        if (duplication == 1)
        {
            cout << duplication << " Duplication Found" << "\n\n";
        }
        else
        {
            cout << duplication << " Duplications Found" << "\n\n";
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