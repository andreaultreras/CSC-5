#include <iostream>
using namespace std;

int displayMenu();

int main() 
{
    int choice;
    
    const int MSG_ONE = 1,
              MSG_TWO = 2,
              MSG_THREE = 3,
              QUIT = 4;
       
    do
    {
        choice = displayMenu();

        switch (choice)
        {
            case MSG_ONE:
                cout << "Hello!\n"; 
                break;
            case MSG_TWO:
                cout << "How are you?\n";
                break;
            case MSG_THREE:
                cout << "Keep up the good work!\n";
                break;
        }
    }while (choice != QUIT);
    
    return 0;
}


int displayMenu()
{   
    int choice;
    cout << "\n\t\tOutput Message Menu\n"
         << "\tEnter 1 for Surprise Message #1\n"
         << "\tEnter 2 for Surprise Message #2\n"
         << "\tEnter 3 for Surprise Message #3\n"
         << "\tEnter 4 to quit the program\n"
         << "\nEnter your choice: ";
         
          cin >> choice;
        
        while (choice < 1 || choice > 4)
        {
            cout << "Please enter a valid menu choice: ";
            cin >> choice;
        }
          
    return choice;
}