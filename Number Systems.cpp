#include <iostream>


using namespace std;

string Dec2Base(int Num, int Base);

int main() 
{
    int UserNum,
        BaseChoice;
    
    
    
    cout << "Hello! This program will convert any positive number from \n";
    cout << "base 10 to any other base greater than or equal to 2 and \n";
    cout << "less than or equal to 36.\n\n";
    
    cout << "Please enter the base 10 number you would like to convert: ";
    cin >> UserNum;
    cout << "\nPlease enter the base you would like to convert " << UserNum;
    cout << " to: "; 
    cin >> BaseChoice;
    
    
    
//--CHECKS USER INPUT----------------------------------------------------------    
    if (UserNum < 0)
    {
        cout << "You entered in invalid number.\n";
        cout << "Please run the program again and enter a valid number.\n";
        return 0;
    }
    else if (BaseChoice < 2 || BaseChoice > 36)
    {
        cout << "You entered in invalid base option.\n";
        cout << "Please run the program again and enter a valid base.\n";
        return 0;
    }
//------------------------------------------------------------------------------    
    
    
    
    
    cout << "The number " << UserNum << " in base " << BaseChoice << " is ";
    cout << Dec2Base(UserNum, BaseChoice) << ".";
    
    return 0;
}

string Dec2Base (int Num, int Base)
{
    string NewNum = " ";
    string bases = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXZY";
    while (Num != 0)
    {
        NewNum = bases[Num%Base] + NewNum;
        Num /= Base;
    }
    return NewNum;
} 