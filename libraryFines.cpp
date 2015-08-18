#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
const int
struct Date {
    unsigned short d;       // The day of the month
    unsigned short m;       // The month of the year
    unsigned short y;       // The year of the century
};
bool isBeforeDueDate (Date retDate, Date expectedDate) {
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
}
bool isOnSameMonth (Date retDate, Date expectedDate) {
    return retDate.m == expectedDate.m && retDate.y == expectedDate.y;
}
bool isOnSameYear (Date retDate, Date expectedDate) {
    return retDate.y == expectedDate.y;
}
unsigned int getFine (Date retDate, Date expectedDate) {
    int fine = 0;
    // Returned before the due date
    if (isBeforeDueDate (retDate, expectedDate) ) {
        return fine;
    } else
    // Returned on the month of the due date
    if (isOnSameMonth (retDate, expectedDate)) {
        fine = retDate.d - expectedDate 
    } else
    // Returned on same year of the due date 
    if (isOnSameYear (retDate, expectedDate)) {
        
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   
    return 0;
}
