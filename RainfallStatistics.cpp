//This program lets the user enter the total rainfall for each 
//of the 12 months into an array of doubles
#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    //DECLARE VARIABLES AND INITIALIZE ARRAYS
    int count;        
    double total = 0,
           average,
           lowest, 
           highest;
    const int MONTHS = 12;  
    double rainfall[MONTHS];
    
    //INPUT THE RAINFALL PER MONTH
    for (count = 0; count < MONTHS; count++)
    {
        //ASKS THE USER FOR INPUT
        cout << "Enter the total rainfall for month " << (count + 1) << ": ";
        cin >> rainfall[count];
        
        //INPUT VALIDATION
        while (rainfall[count] < 0)
        {
            cout << "Error, number is less than zero. Enter a new number: ";
            cin >> rainfall[count];
        }
    }

    lowest = rainfall[0];
    highest = rainfall[0];    
    for(count=0; count < MONTHS; count++)
    {
        //FINDS LOWEST AND HIGHEST VALUE
        if (rainfall[count] <= lowest)
        lowest = rainfall[count];
        if (rainfall[count] > highest)
        highest = rainfall[count];
        
        //GETS AVERAGE AND TOTAL
        total += rainfall[count];
        average = total/MONTHS;
    }
    
    //DISPLAY THE TOTAL, AVERAGE, LOWEST AND HIGHEST
    cout << fixed << showpoint << setprecision(2);
    cout << "\nThe total rainfall for the year is: " << total << endl;
    cout << "The average rainfall for the year is: " << average << endl;
    cout << "The lowest amount of rainfall for the ";
    cout << "year is: " << lowest << endl;
    cout << "The highest amount of rainfall for the ";
    cout << "year is: " << highest << endl;
    return 0;
}

