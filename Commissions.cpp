#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    float Sales,
          Commission;
    const float Level1 = .10,
                Level2 = .15,
                Level3 = .20;
    
    cout << "Hello! This program determines your commission \n";
    cout << "based on your amount of sales.\n\n";
    
    cout << "Please enter amount of sales: ";
    cin >> Sales;
    
    
    if (Sales < 5000)
    {   
        Commission = (Sales * Level1);
        cout << fixed << showpoint << setprecision(2);
        cout << "Sales: $" << Sales << endl;
        cout << "Commission: $" << Commission << endl;
        
    }
    else if (Sales >= 5000 && Sales < 25000)
    {
        Commission = (Sales * Level2);
        cout << fixed << showpoint << setprecision(2);
        cout << "Sales: $" << Sales << endl;
        cout << "Commission: $" << Commission << endl;
    }        
    else if (Sales >= 25000)
    {
        Commission = (Sales * Level3);
        cout << fixed << showpoint << setprecision(2);
        cout << "Sales: $" << Sales << endl;
        cout << "Commission: $" << Commission << endl;
    }   
    
    return 0;
}

