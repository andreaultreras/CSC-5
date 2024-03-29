//Average of Integers File Reader
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main() 
{
    string filename;
    
    cout << "Enter name of file you want to read: ";
    getline(cin, filename, '\n');
    
    ifstream inputFile;
    inputFile.open(filename.c_str());
    
    if (inputFile)
    {
        int input,
        sum = 0,
        count = 0;
        
        do
        {
            if( (inputFile >> input) )
            {
                cout << "Found the value: " << input << endl;
                
                if (input == -999999) break;
                sum = sum + input;
                count++;
            }
            else break;
        
        } while (input != -999999);
        
        inputFile.close();
        
        cout << "Average: " << setw(10) << fixed << setprecision(5);
        cout << sum/(float)count << endl;
        
    }
    else
    {
        cout << "File could not be opened for reading..." << endl;
        return 1;
    }
    
    return 0;
}