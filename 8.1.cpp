//Integer Writer
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() 
{
    string filename;
    
    cout << "What would you like to name the file?\n";
    getline(cin,filename,'\n');
    
    ofstream outputfile;
    
    outputfile.open(filename.c_str());
    
    if(outputfile)
    {
        int input;
        do
        {
            cout << "Enter an integer (-999999 to stop): ";
            cin >> input;
            
            if (input == -999999) break;
            
            outputfile << setw(8) << input << "\r\n";
                    outputfile.flush();
        } while(input != -999999);
    }
    else
    {
        cout << "File could not be opened for writing..." << endl;
        return 1;
    }
    
    outputfile.close();
    cout << "File named: " << filename << " written." << endl;
    
    return 0;
}