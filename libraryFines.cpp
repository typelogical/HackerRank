#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Date {
    unsigned short d;       // The day of the month
    unsigned short m;       // The month of the year
    unsigned short y;       // The year of the century
};

const int RETURNED_EARLY = 0;
const int LATE_DAYS_FINE = 15;
const int LATE_MONTHS_FINE = 500;
const int FIXED_FINE = 10000;
/*
    Determines if return date is earlier than the expected date
*/
bool isBeforeDueDate (const Date retDate, const Date expectedDate) {
    //return retDate.d <= expectedDate.d && retDate.m <= expectedDate.m && retDate.y <= expectedDate.y
    // Note: Could of used short circuit logic to make it less verbose, but also less readable
    // Returned before due date year, so must be valid
    if (retDate.y < expectedDate.y) {
        return true;     
    } else
    // Returned in same year, so still must check extra conditions
    if (retDate.y == expectedDate.y) {
        // Returned before due date month, so must be valid
        if (retDate.m < expectedDate.m) {
            return true;
        } else // Returned in same month, so still must check extra conditions
        if (retDate.m == expectedDate.m) {
            if (retDate.d <= expectedDate.d) {
                return true;
            }
        }
    }
    return false;
}
/*
    Determines wheather the return date if is within the same year of the due date is 
    also in the same month
*/
bool isOnSameMonth (const Date retDate, const Date expectedDate) {
    return retDate.m == expectedDate.m && retDate.y == expectedDate.y;
}
/*
    Determines whether the return date is in the same year
*/
bool isOnSameYear (Date retDate, Date expectedDate) {
    return retDate.y == expectedDate.y;
}

unsigned int getFine (const Date retDate, const Date expectedDate) {
    // Returned before the due date
    if (isBeforeDueDate (retDate, expectedDate) ) {
        return RETURNED_EARLY;
    } else
    // Returned on the month of the due date
    if (isOnSameMonth (retDate, expectedDate)) {
        int diff = retDate.d - expectedDate.d;
        if (diff > 0) {
            return diff * LATE_DAYS_FINE; 
        }
    } else
    // Returned on same year of the due date 
    if (isOnSameYear (retDate, expectedDate)) {
        int diff = retDate.m - expectedDate.m;
        if (diff > 0) {
            return diff * LATE_MONTHS_FINE;
        }
    } else // Returned after late day, so is late
    {
        return FIXED_FINE;
    }
    return 0;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    Date retDate, expectedDate;
    unsigned int fine = 0;
    cin >> retDate.d >> retDate.m >> retDate.y >> expectedDate.d >> expectedDate.m >> expectedDate.y;
    fine = getFine (retDate, expectedDate);
    cout << fine << endl;
    return 0;
}
