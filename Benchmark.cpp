#include <iostream>
using namespace std;

//DECLARE GLOBAL CONSTANTS
const int NUM = 5;

//FUNCTION PROTOTYPES
int getInput();
int linearSearch(int[], int, int);
int binarySearch(int[], int, int);
void swap(int &, int &);
void bubbleSort(int[], int);
void selectionSort(int[], int);
//void displayString();


int main() 
{
    cout << "This part of the program uses\n";
    cout << "both linear and binary search algorithms.\n";
//FILLS THE FIRST ARRAY-------------------------------------------------------
    //DECLARE VARIABLES AND INITIALIZE ARRAYS
    int count;          
    int first_array[NUM];
    
    //INPUT INTEGERS INTO THE ARRAY
    for (count = 0; count < NUM; count++)
    {
        //ASKS THE USER FOR INPUT
        cout << "Enter value " << (count + 1) << " for array 1: ";
        cin >> first_array[count];
    }
    //GET THE ITEM TO SEARCH FOR----------------------------------------------
    int searchfor;
    searchfor = getInput();
    //SEARCH FOR THE ITEM W/ LINEAR-------------------------------------------
    int results;
    results = linearSearch(first_array, NUM, searchfor);
    if (results == -1)
        cout << "Value not found in linear :(";
    else
    {
        cout << "With linear search, the value " << searchfor;
        cout << " was found in element " << (results + 1) << endl;
    }  
    //SORT THE ARRAY----------------------------------------------------------
    bubbleSort(first_array, NUM);   
    //SEARCH FOR THE ITEM W/ BINARY-------------------------------------------
    int index;       //To hold search results
    index = binarySearch(first_array, NUM, searchfor);
    if (index == -1)
        cout << "Value not found in binary:(";
    else
    {
        cout << "With binary search, the value " << searchfor;
        cout << " was found in element " << (index + 1) << endl;
    }

    
    
    cout << "\n---------------------------------------------------------------";
    cout << "\nThis part of the program uses\n";
    cout << "both bubble and selection sort algorithms.\n";
//FILLS THE SECOND ARRAY------------------------------------------------------
    //DECLARE VARIABLES AND INITIALIZE ARRAYS
    int counttwo;          
    int second_array[NUM];
    //INPUT INTEGERS INTO THE ARRAY
    for (counttwo = 0; counttwo < NUM; counttwo++)
    {
        //ASKS THE USER FOR INPUT
        cout << "Enter value " << (counttwo + 1) << " for array 2: ";
        cin >> second_array[counttwo];
    }
    //ASSIGNS SECOND ARRAY VALUES TO THIRD ARRAY
    int third_array[NUM];
    for (int counttwo = 0; counttwo < NUM; counttwo++)
        third_array[counttwo] = second_array[counttwo];           
    //GET THE ITEM TO SEARCH FOR----------------------------------------------
    int searchnext;
    searchnext = getInput();
    //SORT THE ARRAY----------------------------------------------------------
    bubbleSort(second_array, NUM);
    //SEARCH FOR THE ITEM W/ BINARY-------------------------------------------
    int indexnext;       //To hold search results
    indexnext = binarySearch(second_array, NUM, searchnext);
    if (indexnext == -1)
        cout << "\nValue not found :(";
    else
    {
        cout << "The value " << searchnext;
        cout << " was found in element " << (indexnext + 1) << endl;
    }
    
    
    
//CALLS THE THIRD FUNCTION
    //SORT THE ARRAY----------------------------------------------------------
    selectionSort(third_array, NUM);
    
    //SEARCH FOR THE ITEM W/ BINARY-------------------------------------------
    int indexlast;       //To hold search results
    indexlast = binarySearch(third_array, NUM, searchnext);
    if (indexlast == -1)
        cout << "Value not found :(";
    else
    {
        cout << "The value " << searchnext;
        cout << " was found in element " << (indexlast + 1) << endl;
    }
    
    return 0;
}

//GETS A VALUE TO SEARCH FOR
int getInput()
{
    int search;
    cout << "\nEnter the value you wish to search for: ";
    cin >> search;
    
    return search;
}

//LINEAR SEARCH FUNCTION
int linearSearch (int arr[], int size, int value)
{
    int index = 0;
    int compares = 0;
    int position = -1;
    bool found = false;
    
    while (index < size && !found)
    {
        if (arr[index] == value)        //If the value is found
        {
            found = true;
            position = index;           //Records the value's subscript
        }
        compares++;
        index++;                        //Go to the next element
    }
    cout << "\nLinear search took " << compares << " comparisons." << endl;
            
    return position;
}

//BINARY SEARCH FUNCTION
int binarySearch(int array[], int numElems, int value)
{
    int first = 0,
        last = numElems - 1,
        middle,
        position = -1;
    
    int compares=0;
    bool found = false;
    
    while (!found && first <= last)
    {
        middle = (first + last)/2;
        compares++;
        if (array[middle] == value)
        {
            found = true;
            position = middle;
        }
        else if (array[middle] > value) //If value is in lower half
            last = middle - 1;
        else
            first = middle + 1;         //If value is in upper half
    }
    
    cout << "Binary search took " << compares << " comparisons." << endl;
    
    return position;
}   

//BUBBLE SORT FUNCTION
void bubbleSort(int array[], int size)
{
    int maxElement;
    int index;
    int swapElem = 0;
    
    for (maxElement = size -1; maxElement > 0; maxElement--)
    {
        for (index = 0; index < maxElement; index++)
        {
            if (array[index] > array[index + 1])
            {
                swap(array[index], array[index + 1]);
                swapElem++;
            }
        }
    }
    cout << "\nBubble sort took " << swapElem << " switches." << endl;

}

//SWAP FUNCTION
void swap (int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

//SELECTION SORT FUNCTION
void selectionSort(int array[], int size)
{
    int minIndex, minValue;
    int swapElem = 0;
    
    for (int start = 0; start < (size -1); start++)
    {
        minIndex = start;
        minValue = array[start];
        for (int index = start + 1; index < size; index++)
        {
            if (array[index] < minValue)
            {
                minValue = array[index];
                minIndex = index;
            }
        }
        swap(array[minIndex], array[start]);
        swapElem++;
    }
    cout << "\nSelection sort took " << swapElem << " switches." << endl;

}