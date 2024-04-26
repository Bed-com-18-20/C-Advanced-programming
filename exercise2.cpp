#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    // Generating random numbers between 0 and 10.
    int daysUntilExpiration = (rand() % 11); 
    switch (daysUntilExpiration) {
        case 0:
            cout << "Your subscription has expired" << endl;
            break;
        case 1:
            cout << "Your subscription expires within a day! Renew now and save 20%!" << endl;
            break;
        case 2:
        case 3:
        case 4:
            cout << "Your subscription expires in " << daysUntilExpiration << " days. Renew now and save 10%!" << endl;
            break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            cout << "Your subscription will expire soon. Renew now!" << endl;
            break;
        default:
            cout << "You have an active subscription." << endl;
    }

    return 0;
}
