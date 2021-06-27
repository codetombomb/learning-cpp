#include <iostream>
using namespace std;

int main()
{
    int favoriteNum;

    cout << "Hello there! What is your favorite number? (between 1 and 100): ";

    cin >> favoriteNum;

    cout << endl;

    if (favoriteNum < 100 && favoriteNum > 0) {

        cout << favoriteNum << " is my favorite number too!\n"
             << endl;
    } else {
        cout << "Hmm, don't you read directions?!" << endl;
    }

    return 0;
}