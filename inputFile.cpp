#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//FUNCTION PROTOTYPES
string getFileName();

int main() 
{
    //DECLARE VARIABLES AND ARRAY
    int count, index, num;
    const int arrROW = 5, arrCOL = 2;
    long double arr[arrROW][arrCOL];
    string name; 
    
    //GET FILE NAME FROM FUNCTION
    name = getFileName();
    
    //OPEN THE FILE
    ifstream inputFile;
    inputFile.open(name.c_str());
    
    //FILE NAME INPUT VALIDATION
    if (inputFile) 
    {
        //READS THE DATA INTO THE 2D ARRAY
        for(count = 0; count < arrROW; count++)
        {
            for(index = 0; index < arrCOL; index++)
            {
                inputFile >> arr[count][index];
            }       
        }
        inputFile.close();
    } 
    else 
    {
        cout << "File could not be opened for reading..." << endl;
        return 1;
    }
    
    //OUTPUT THE ARRAY
    cout << "The array reads: \n";
    for (int x = 0; x < count; x++)
    {
        for (int y = 0; y < index; y++)
        {
            cout << arr[x][y] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

//GET FILE NAME FROM USER
string getFileName()
{
    string name;
    
    cout << "What file do you want to open? ";
    getline(cin,name,'\n');
    
    return name;
}