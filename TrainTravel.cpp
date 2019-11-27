#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    //VARIABLES
    int speed, hours;
    char again;
    
    do
    {
        //ASK FOR INPUT
        cout << "What is the speed of the train in mph? ";
        cin >> speed;
        cout << "How many hours has it traveled? ";
        cin >> hours;

        //VALIDATES INPUT IF SPEED IS INVALID
        while (speed > 310 || speed <= 0) 
        {
            cout << "\nPlease enter a speed less than 310mph\n";
            cout << "and more than 1 hour traveled\n";
            cin >> speed >> hours;
        }
        //VALIDATES INPUT IF HOURS IS INVALID
        while (hours < 1)
        {
            cout << "Please enter a speed less than 310mph\n";
            cout << "and more than 1 hour traveled\n";
            cin >> speed >> hours;
        }
        
        //DISPLAY THE HEADER
        cout << "\nHour\tDistance\n";
        cout << "----------------\n";
        
        //GETS & OUTPUTS DISTANCE
        int num = 1;
        while (num <= hours)
        {
            cout << num << "\t";
            cout << right << setw(5) << (speed * num) << endl;
            num++; 
        }
        
        //ASKS USER IF THEY WANT THE PROGRAM TO RUN AGAIN
        cout << "\nDo you want to run the program again? (Y/N) ";
        cin >> again;
        cout << endl;
        
      //ENDS OR RUNS THE PROGRAM AGAIN  
    } while (again == 'Y' || again == 'y');
    return 0;
}

