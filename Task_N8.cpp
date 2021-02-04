#include <iostream>
using namespace std;

int main ()
{
    int number = 0, i = 2;

    cout << " Enter number: ";
    cin >> number;
    cout << "\n";

    bool isNumberSimple = true;
    for (int i = 2; i < number; i++){
        if (number%i==0){
            isNumberSimple = false;
            break;
        }
    }
    if(isNumberSimple){
        cout << " The number is simple ";
    }
    else{
        cout << " The number is composite ";
    }

    return 0;
}