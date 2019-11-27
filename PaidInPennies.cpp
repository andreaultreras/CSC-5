#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    //VARIABLES
    const int MinNum = 1,
              MaxNum = 45;
    int days; 
    float totalpay,
          dailypay = 0.01;
    
    //ASKS THE USER TO INPUT THE AMOUNT OF DAYS
    cout << "For how many days will the pay double? ";
    cin >> days;
    cout << "\n";
    
   //VALIDATES USER INPUT
    while (days < MinNum || days > MaxNum)
    {
        cout << "Please enter a value greater than 1 but less than 45.\n";
        cin >> days;   
    }
    
    //DISPLAYS HEADER
    cout << "Day\t\tTotal Pay\t\t\n";
    cout << "-----------------------------------\n";
    
    //CALCULATES AND OUTPUTS THE DAILY PAY
    for (int num = MinNum; num <= days; num++)
    {
        cout << num << "\t\t$\t";
        cout << right << setw(10) << fixed << setprecision(2);
        cout << dailypay << endl;
        
        totalpay += dailypay;
        dailypay *= 2; 
    }
   
    //OUTPUTS TOTAL PAY 
    cout << "-----------------------------------";
    cout << "\nTotal\t\t$\t";
    cout << right << setw(10) << fixed << setprecision(2) << totalpay;
    
    return 0;
}