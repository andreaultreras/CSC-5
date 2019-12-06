#include <iostream>
#include <cstdlib>
#include <fstream>
#include <ctime>
using namespace std;

const int ROW = 2, COL = 2;
void randSize();
void fillArray(const int [ROW][COL]);

int main()
{
    const int ROW = 2, COL = 2;
    
    ofstream outputFile;
    outputFile.open("RandomArray.txt");
    
    //ROW = randSize();
    //cout << "Now getting random number of rows: " << ROW;
    //COL = randSize();
    //cout << "\nNow getting random number of columns: " << COL;
    
    randSize();
    
    long double array[ROW][COL];
    fillArray(array);
    
    for (int x = 0; x < ROW; x++)
    {
        for (int y = 0; y < COL; y++)
        {
            
            cout << array[x][y] << "  ";
        }
        cout << endl;
    }
    
    /*
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
     */
    
    return 0;
}

void randSize()
{
    //DECLARE VARIABLES
    int row, col;
    const int MAX = 10,
              MIN = 2;
    
    //GET RANDOM VALUE
    unsigned seed = time(0);
    srand(seed);
    
    //LIMIT THE RANGE OF THE RANDOM VALUE
    row = (rand() % (MAX - MIN + 1)) + MIN;
    col = (rand() % (MAX - MIN + 1)) + MIN;
    int test = (rand()%101)/100
    cout << row << endl;
    cout << col << endl;
}

void fillArray(const int arr[ROW][COL])
{
    for (int rowcount = 0; rowcount < ROW; rowcount++)
    {
        for (int colcount = 0; colcount < COL; colcount++)
        {
            cout << "Row " << (rowcount + 1); 
            cout << ", Column " << (colcount + 1) << ": ";
                 cin >> arr[rowcount][colcount];
        }
    }
}