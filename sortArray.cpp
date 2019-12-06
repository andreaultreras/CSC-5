#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//FUNCTION PROTOTYPES
string getInputName();
string getOutputName();
void bubbleSort(long double, int);
void swap(long double, long double);

const int ROW = 5,
          COL = 5;

int main() 
{
    //DECLARE VARIABLES AND ARRAYS
    int sortcol,                        //the column the user wants to sort
        order;                          //holds user sorting order decision    
    string outputName, inputName;
    long double arr[ROW][COL];
    
    //GET FILE NAME FROM FUNCTION
    inputName = getInputName();
    
    //OPEN THE FILE
    ifstream inputFile;
    inputFile.open(inputName.c_str());
    
    //READ THE DATA INTO A 2-D ARRAY && INPUT VALIDATION
    if (inputFile) 
    {
        for(int count = 0; count < ROW; count++)
        {
            for(int index = 0; index < COL; index++)
            {
                inputFile >> arr[count][index];
            }        
        }inputFile.close();
    } 
    else 
    {
        cout << "File could not be opened for reading..." << endl;
        return 1;
    }
    
    //GET COLUMN SORTED
    cout << "Which column from the array would you like to sort?";
    cin >> sortcol;
    cout << "To sort the column in ascending order, enter 1.\n";
    cout << "To sort the column in descending order enter 2.";
    cin >> order;
    while (order < 1 || order > 2)
    {
        cout << "Enter a valid option: ";
        cin >> order;
    }
    if (order == 1)
    {
     bubbleSort(arr[][sortcol], ROW);   
    }
    else if(order == 2)
    {
        return 1;
    }
    
    //CALL FUNCTION TO GET AND CREATE THE OUTPUT FILE NAME
    outputName = getOutputName();
    ofstream outputFile;
    outputFile.open(outputName.c_str());
    cout << "File " << outputName << " was created.\n";
    
    //FILL THE FILE WITH HEADER
    cout << "Filling the file...\n";
    outputFile << "SORTED\n";
    outputFile << "This file has " << ROW;
    outputFile << " rows and " << COL << " columns.\n\n";
    
    //OUTPUT THE ARRAY TO AN OUTPUT FILE
    for (int x = 0; x < ROW; x++)
    {
        for (int y = 0; y < COL; y++)
        {
            outputFile << arr[x][y] << "  ";
        }
        outputFile << endl;
    }
    outputFile.close();

    return 0;
}

//GET INPUT FILE NAME FROM USER
string getInputName()
{
    string name;
    
    cout << "What file do you want to open? ";
    getline(cin,name,'\n');
    
    return name;
}

//GET OUTPUT FILE NAME FROM USER
string getOutputName()
{
    string name;
    
    cout << "What do you want to call the new file? ";
    getline(cin,name,'\n');
    
    return name;
}

//BUBBLE SORT FUNCTION
void bubbleSort(long double array[], int size)
{
    int maxElement;
    int index;
    
    for (maxElement = size -1; maxElement > 0; maxElement--)
    {
        for (index = 0; index < maxElement; index++)
        {
            if (array[index] > array[index + 1])
            {
                swap(array[index], array[index + 1]);
            }
        }
    }
}

void swap(long double &a, long double &b)
{
    long double temp = a;
    a = b;
    b = temp;
}