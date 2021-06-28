#include <iostream>
using namespace std;


string renderBoard(string arr[9])
{
    cout << "_" << arr[0] << "_|_" << arr[1] << "_|_" << arr[2] << "_" << endl;
    cout << "_" << arr[3] << "_|_" << arr[4] << "_|_" << arr[5] << "_" << endl; 
    cout << "_" << arr[6] << "_|_" << arr[7] << "_|_" << arr[8] << "_" << endl;   
    return "";
}

int main() 
{

    string board[9] = {"x", "", "o" ,"", "x", "", "", "", ""};
    // Render board from array
    renderBoard(board);
    

    return 0;

}

