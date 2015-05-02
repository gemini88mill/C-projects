#include <iostream>

using namespace std;

int main() {
    //simple program to get the number of chirps from crickets (user defined), and calculate the temperature based on
    //a formula

    //number of chirps in minute = current temperature / 4

    int chirps = 0;
    int current_temp = 0;


    cout << "Please enter number of chirps observed in a minute: " << endl;
    cin >> chirps;
    cout << endl;

    current_temp = chirps / 4;

    cout << "Current Temp: " << current_temp << " degrees " << endl;


    return 0;
}