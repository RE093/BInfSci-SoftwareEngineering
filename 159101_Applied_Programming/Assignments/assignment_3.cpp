#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float voltage_total, voltage_average, ten_percent, fifteen_percent, ten_percent_min, ten_percent_max, change_difference, voltages[6], voltage_outliers[6], voltage_change_outliers[6];
int i;
bool problems_exist;

void print_ten_percent_outliers(int hour, float outlier) {
    cout << "Voltage at hour " << i + 1 << " was " << fixed << setprecision(1) << outlier << " volts (" << "difference of " << fixed << setprecision(1) << abs(outlier - voltage_average) << " volts)." << endl;
}
void print_change_outliers(int from_hour, int to_hour, float difference) {
    cout << "Voltage change from hour " << from_hour << " to hour " << to_hour << " was " << fixed << setprecision(1) << difference << " volts." << endl;
}

int main() {
    cout << "Enter 6 voltages: ";
    cin >> voltages[0] >> voltages[1] >> voltages[2] >> voltages[3] >> voltages[4] >> voltages[5];

    // Part 1: Calculate average and %'s
    for (i=0; i<6; i++) {
        voltage_total += voltages[i];
    }

    voltage_average = voltage_total / 6;
    ten_percent = voltage_average * 0.1;
    fifteen_percent = voltage_average * 0.15;
    
    cout << "The average is " << voltage_average << " volts." << endl;
    cout << "10% = " << fixed << setprecision(1) << ten_percent << " volts." << endl;
    cout << "15% = " << fixed << setprecision(1) << fifteen_percent << " volts." << endl;
    cout << endl;

    // Part 2: Calculate 10% outliers
    ten_percent_min = voltage_average - ten_percent;
    ten_percent_max = voltage_average + ten_percent;

    for (i=0; i<6; i++) {
        if (voltages[i] < ten_percent_min || voltages[i] > ten_percent_max) {
            problems_exist = true;
            voltage_outliers[i] = voltages[i];
        }
    }

    // Part 3: Calculate change pairs
    for (i=0; i<5; i++) {
        change_difference = abs(voltages[i] - voltages[i + 1]);
        if (change_difference > fifteen_percent) {
            problems_exist = true;
            voltage_change_outliers[i] = change_difference;
        }
    }

    // Part 4: Display problems if exist
    if (problems_exist) {
        cout << "The following problems occured:" << endl;
        for (i=0; i<6; i++) {
            if (voltage_outliers[i] != 0) {
                print_ten_percent_outliers(i, voltage_outliers[i]);
            }
            if (voltage_change_outliers[i] != 0) {
                print_change_outliers(i + 1, i + 2, voltage_change_outliers[i]);
            }
        }
    } else {
        cout << "No problems were encountered.";
    }
}
