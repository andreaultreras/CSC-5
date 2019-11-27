#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float futureValue(float, int);

int main()
{
    //DECLARE VARIABLES
    int months;
    float final_value,
          present_value;
    
    //ASK THE USER FOR INPUT
    cout << "Enter the current amount of money in your savings account: $";
    cin >> present_value;
    cout << "Enter the number of number of months the money\n";
    cout << "Will be left in the account: ";
    cin >> months;
    
    //CALL THE FUNCTION & OUTPUT THE TOTAL
    final_value = futureValue(float (present_value), int (months));
    cout << "The final amount of money in your account after ";
    cout << months << " months is: $" << final_value;
    
    return 0;
}

//CALCULATES THE FUTURE VALUE OF THE ACCOUNT
float futureValue(float total, int num)
{
    //DECLARE VARIABLES
    float sum, 
          interest = 0.0675;
    
    //CALCULATE SUM
    interest += 1;
    interest = pow(interest, num);
    sum = interest * total;
    cout << fixed << showpoint << setprecision(2);
    
    //RETURNS THE SUM
    return sum;
}
