// ED CRYPT PORTFOLIO 12/10/2026
#include <iostream>
#include <vector>
using namespace std;

// Globals
int GlobalSampleSize = 100; // Please alter this to the number of participants
vector<int> Birthdays;

// Date Assign
int dateassign()
{
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
        cout << i + 1 << ": " << Birthdays[i] << "\n";
        for (int j = i + 1; j < VectorSampleSize; j++)
        {
            if (Birthdays[i] == Birthdays[j])
            {
                duplication++;
                cout << Birthdays[i] << Birthdays[j] << "\n";
                cout << "Person " << i + 1 << " and Person " << j + 1 << " share day " << Birthdays[i] << "\n";            }
        }
    }
    if (duplication == 1)
    {
        cout << duplication << " Duplication Found" << "\n";
    }
    else
    {
        cout << duplication << " Duplications Found" << "\n";
    }
    return 0;
}

int main()
{
    dateassign();
    collision();
}
