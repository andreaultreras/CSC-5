#include <iostream>
using namespace std;

double * shiftValues(double *);
double * reverseValues(double *);
const int SIZE = 5;

int main()
{
//SHIFT ARRAY----------------------------------------------------------------
    int count;
    double shift_array[SIZE];
    double *shift = nullptr;
    shift = shift_array;
    
    cout << "This part of the program shifts the array.\n";
    for (count = 0; count < SIZE; count++)
    {
        cout << "Enter value " << (count + 1) << " : ";
        cin >> *(shift_array + count);
    }
    
    cout << "You entered: ";
    for (count = 0; count < SIZE; count++)
        cout << *(shift + count) << " ";
    
    cout << "\n\nAfter shifting the array over once\n";
    cout << "and filling the first element with 0,\n";
    cout << "the new array reads: \n";
    shift=shiftValues(shift_array);
    
    //displays array
    for (int indexnext = 0; indexnext < (SIZE+1); indexnext++)
        cout << shift[indexnext] << " ";
 //REVERSE ARRAY--------------------------------------------------------------
    int countnext;
    double reverse_array[SIZE];
    double *ptr = nullptr;
    ptr = reverse_array;
    
    cout << "\n\nThis part of the part of the program reverses the array.\n";
    for (countnext = 0; countnext < SIZE; countnext++)
    {
        cout << "Enter value " << (countnext + 1) << " : ";
        cin >> *(reverse_array + countnext);
    }
    
    cout << "\nHere are the numbers you entered in reverse order:\n";
    ptr=reverseValues(reverse_array);
    
    //displays array
    for (int indexnext = 0; indexnext < SIZE; indexnext++)
        cout << ptr[indexnext] << " ";
    return 0;
}

//CREATES A NEW ARRAY THAT IS ONE ELEMENT LARGER
double * shiftValues(double *shift)
{
    int index,
        indexnext;
    double * copy_arr = new double[(SIZE+1)];
    //copies array
    copy_arr[0]=0.0;
    
    for (int index = 0; index < SIZE; index++)
    {
        copy_arr[index+1] = (shift[index]);
    }
    return copy_arr;
    
}

//COPIES ARRAY AND SHOWS IT IN REVERSE ORDER
double * reverseValues(double *ptr)
{
    int index;
    double *copy_array = new double[SIZE];
    
    for (int index = 0; index < SIZE; index++)
        copy_array[index] = ptr[index];    
    
    index=0;
    while (index<SIZE)
    {
        copy_array[index] = ptr[SIZE-index-1];
        index++;
    }
    return copy_array;
}