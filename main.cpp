#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Please enter your age: ";
    cin >> age;


    switch (age){
        case 16:
            cout << "Ghar jow bd mai ana. " << endl;
            break;
        case 18:
            cout << "Ab tum bray ho gy ho. " << endl;
            break;
        case 21:
            cout << "Kia kar raha ho aj kal. " << endl;
            break;
        default:
            cout << "Abhi ap ka time nahi howa hai. " << endl;
    }
}
