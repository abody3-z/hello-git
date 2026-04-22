#include <iostream>

using namespace std;

int main() {
    double weight, height, bmi;

    cout << "Get weight in kg :";
    cin >> weight;

    cout << "\nGet height in meter :";
    cin >> height;

    bmi = weight / (height * height);

    cout << "\nYour bmi = " << bmi << endl;

    cout << "\nYour weight category is : ";
    if (bmi < 18.5) {
        cout << "Underweight" << endl;
    } else if (bmi < 25.0) {
        cout << "Normal weight" << endl;
    } else if (bmi < 30.0) {
        cout << "Overweight" << endl;
    } else {
        cout << "Obesity" << endl;
    }

    return 0;
}