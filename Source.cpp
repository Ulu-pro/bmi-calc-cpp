#include <iostream>
#include <iomanip>
using namespace std;

int bmi() {
    float w, h;
    cout << "Enter your weight (kg): ";
    cin >> w;
    cout << "Enter your height (sm): ";
    cin >> h;
    h /= 100;

    float bmi = w / (h * h);
    cout << "\nYour BMI: " << fixed << setprecision(1) << bmi << "\n\n";

    string info;
    if (bmi >= 35)
        info = "Extremely Obese";
    else if (bmi >= 30)
        info = "Obese";
    else if (bmi >= 25)
        info = "Overweight";
    else if (bmi >= 18.5)
        info = "Normal";
    else
        info = "Underweight";

    cout << info << "\n\n";
    return 0;
}
int main() {
    cout << "Author: Ulugbek Ravshanbekov\nCalculator of \"Body Mass Index\"\n\n";
    bool done;
    while (true) {
        bmi();
        for (int i = 0; i < 25; i++)
        {
            cout << "~";
        }
        cout << "\nRepeat it again? (0,1): ";
        cin >> done;
        cout << endl;
        if (!done) {
            exit(0);
        }
    }
    return 0;
}