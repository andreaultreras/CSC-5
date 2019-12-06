#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//FUNCTION PROTOTYPES
string getFileName();

int main()
{
    //DECLARE VARIABLES
    string name;
    int ROWS, COLS;
    
    //GET FILE NAME AND CREATE FILE
    name = getFileName();
    ofstream outputFile;
    outputFile.open(name.c_str());
    cout << "File " << name << " was created.\n";
    
    //GET ARRAY SIZE
    cout << "\nNow lets create a 2-D array to fill the file.\n";
    cout << "How many rows will the 2-D array have: ";
    cin >> ROWS;
    cout << "How many columns will the 2-D array have: ";
    cin >> COLS;

    //DECLARE AND FILL THE ARRAY
    cout << "\nFill out the following information.\n";
    long double ArrayFile[ROWS][COLS];
    for (int rowcount = 0; rowcount < ROWS; rowcount++)
    {
        for (int colcount = 0; colcount < COLS; colcount++)
        {
            cout << "Row " << (rowcount + 1); 
            cout << ", Column " << (colcount + 1) << ": ";
                 cin >> ArrayFile[rowcount][colcount];
        }
    }
    
    //FILL THE FILE WITH THE ARRAY
    cout << "Filling the file...\n";
    outputFile << "UNSORTED\n";
    outputFile << "This file has " << ROWS;
    outputFile << " rows and " << COLS << " columns.\n";
    
  
    for (int x = 0; x < ROWS; x++)
    {
        for (int y = 0; y < COLS; y++)
        {
            
            outputFile <<ArrayFile[x][y] << "  ";
        }
        outputFile << endl;
    }
    outputFile.close();
    
    return 0;
}

//FUNCTION THAT GETS THE FILE NAME
string getFileName()
{
    string name;
    
    cout << "What do you wish to name the file: ";
    getline(cin,name,'\n');
    
    return name;
}