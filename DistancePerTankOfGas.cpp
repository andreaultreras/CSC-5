#include <iostream>

using namespace std;

int main() 
{
  double SizeTank,     //size of the gas tank
           AvgTown,     //average miles per gallon in town
           AvgHW,       //average miles per gallon on the highway
           OneTown,     //distance car can travel on one tank of gas in town
           OneHW;       //distance car can travel w/ one tank of gas on highway
    
    cout << "Hello! This program will calculate the distance your car\n";
    cout << " can travel on one tank of gas in town and on the highway.\n";
    cout << "\n";
    cout << "First, please type in the size of your car's gas tank in gallons.\n";
        cin >> SizeTank;
    cout << "Next, enter the average miles per gallon the car gets in town.\n";
        cin >> AvgTown;
    cout << "Finally, enter the average miles per gallon the car gets on the highway.\n";
        cin >> AvgHW;
    
            OneTown = SizeTank * AvgTown;
            OneHW = SizeTank * AvgHW;
    
    cout << "The distance your car can travel on one tank of gas in town is ";
    cout << OneTown << " miles," << endl;
    cout << "and "<< OneHW << " miles on the highway." << endl;
    return 0;
}

