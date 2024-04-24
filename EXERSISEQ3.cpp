#include <iostream>
#include <string>


using namespace std;
int main(){
    // an array of 8 elements.
    string NumberPlate[] ={"B123","C234","A345","A15","B177","G3003","C235","B179",};
int size = 8;
// for loop  to iterate through each element of  array numberplate.
for (int i =0; i < size; i++ ){
    //statements to check if numberplate start with B
if (NumberPlate[i][0] == 'B') {
    // display to the console
    cout << NumberPlate[i] << endl;
        }
}

return 0;
}