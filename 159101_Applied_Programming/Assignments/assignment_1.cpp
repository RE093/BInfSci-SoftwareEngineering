#include <iostream>
using namespace std;

/**

Write a C++ program that does the following:
a) input a number of days from -7 to 7. This value is called the difference.
b) input a date as day month year
c) display the date that is difference days from the input date

 */

int input_difference;
int input_day;
int input_month;
int input_year;
int prev_month;
int day_in_calculation;
int days_in_current_month;
int days_in_prev_month;
int output_day;
int output_month;
int output_year;

bool input_year_is_century;
bool is_leap_year;
bool is_month_with_31_days;
bool is_month_with_30_days;
bool is_month_with_29_days;
bool is_month_with_28_days;
bool is_prev_month_with_31_days;
bool is_prev_month_with_30_days;
bool is_prev_month_with_29_days;
bool is_prev_month_with_28_days;

int main() {
    // ---------- Get user inputs ---------- //
    cout << "\nEnter the difference in days: "; 
    cin >> input_difference;

    cout << "\nEnter a date in the form day month year: ";
    cin >> input_day >> input_month >> input_year;

    // ---------- Calculate if leap year ---------- //
    input_year_is_century = input_year % 100 == 0;
    
    if (input_year_is_century && input_year % 400 == 0) {
        is_leap_year = true;
    } else if (!input_year_is_century && input_year % 4 == 0) {
        is_leap_year = true;
    } else {
        is_leap_year = false;
    }

    // ---------- Calculate previous months ---------- //
    if (input_month == 12) {
        prev_month = 11;
    } else if (input_month == 1) {
        prev_month = 12;
    } else {
        prev_month = input_month - 1;
    }

    // ---------- Date checks for reference ---------- //
    // 1: January = 31
    // 2: February = 28 or 29
    // 3: March = 31
    // 4: April = 30
    // 5: May = 31
    // 6: June = 30
    // 7: July = 31
    // 8: August = 31
    // 9: September = 30
    // 10: October = 31
    // 11: November = 30
    // 12: December = 31 

    // ---------- Calculate current month ---------- //
    is_month_with_31_days = input_month == 1 || input_month == 3 || input_month == 5 || input_month == 7 || input_month == 8 || input_month == 10 || input_month == 12;
    is_month_with_30_days = input_month == 4 || input_month == 6 || input_month == 9 || input_month == 11;
    is_month_with_29_days = input_month == 2 && is_leap_year;
    is_month_with_28_days = input_month == 2 && !is_leap_year;

    if (is_month_with_31_days) {
        days_in_current_month = 31;
    } else if (is_month_with_30_days) {
        days_in_current_month = 30;
    } else if (is_month_with_29_days) {
        days_in_current_month = 29;
    } else if (is_month_with_28_days) {
        days_in_current_month = 28;
    }

    // ---------- Calculate prev month ---------- //
    is_prev_month_with_31_days = prev_month == 1 || prev_month == 3 || prev_month == 5 || prev_month == 7 || prev_month == 8 || prev_month == 10 || prev_month == 12;
    is_prev_month_with_30_days = prev_month == 4 || prev_month == 6 || prev_month == 9 || prev_month == 11;
    is_prev_month_with_29_days = prev_month == 2 && is_leap_year;
    is_prev_month_with_28_days = prev_month == 2 && !is_leap_year;

    if (is_prev_month_with_31_days) {
        days_in_prev_month = 31;
    } else if (is_prev_month_with_30_days) {
        days_in_prev_month = 30;
    } else if (is_prev_month_with_29_days) {
        days_in_prev_month = 29;
    } else if (is_prev_month_with_28_days) {
        days_in_prev_month = 28;
    }

    // ---------- Calculate outputs ---------- //
    day_in_calculation = input_day + input_difference;

    if (day_in_calculation < days_in_current_month && day_in_calculation > 0) {
        output_day = day_in_calculation;
        output_month = input_month;
        output_year = input_year;

    } else if (day_in_calculation > days_in_current_month) {
        output_day = day_in_calculation - days_in_current_month;

        if (input_month == 12) {
            output_month = 1;
            output_year = input_year + 1;
        } else {
            output_month = input_month + 1;
            output_year = input_year;
        }

    } else if (day_in_calculation <= 0) {
        output_day = day_in_calculation + days_in_prev_month;

        if (input_month == 1) {
            output_month = 12;
            output_year = input_year - 1;
        } else {
            output_month = prev_month;
            output_year = input_year;
        }
    }

    // ---------- Return output to the user ---------- //
    cout << "\nThe final date is: " << output_day << "/" << output_month <<  "/" << output_year << "\n\n";
}