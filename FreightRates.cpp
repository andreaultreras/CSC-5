#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() 
{
    float Weight, Miles;
    float Charges;
    const float RateA = 1.75,
                RateB = 2.95, 
                RateC = 3.55, 
                RateD = 4.95; 
    
    cout << "Enter weight (in ounces - max: 1800): ";
    cin >> Weight;
        if(Weight <= 0 || Weight > 1800)
        {
            cout << "Error. Weight out of range. Program terminating.";
            
            return 0;
        }
         
    cout << "Enter miles shipping (max 3500): ";
    cin >> Miles;
        if(Miles <= 0 || Miles > 3500)
        {
            cout << "Error. Shipping distance out of range.\n";
            cout << "Program terminating.";
            
            return 0;
        }
  
    cout << ceil(Miles/525) << endl;
    
    if (Weight <= 60)
    {
        Charges = (RateA * ceil(Miles/525));
        cout << fixed << showpoint << setprecision(2);
        cout << "Shipping charges: $" << Charges;
    }
    else if (Weight > 60 && Weight <= 120)
    {
        Charges = (RateB * ceil(Miles/525));
        cout << fixed << showpoint << setprecision(2);
        cout << "Shipping charges: $" << Charges;
    }
    else if (Weight > 120 && Weight <= 400)
    {
        Charges = (RateC * ceil(Miles/525));
        cout << fixed << showpoint << setprecision(2);
        cout << "Shipping charges: $" << Charges;
    
    }
    else if (Weight > 400 && Weight <= 1800)
    {
        Charges = (RateD * ceil(Miles/525));
        cout << fixed << showpoint << setprecision(2);
        cout << "Shipping charges: $" << Charges;
    }
    
    return 0;
}

