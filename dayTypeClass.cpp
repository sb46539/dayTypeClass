#include <iostream>
#include "dayType.h"

int main() {
    // precond: The dayType clas properly implemented with the required functions

    dayType day1;
    std::cout << "Default day: ";
    day1.printDay();

    // postcond: day1 is initialized with the Sunday.

    std::cout << "Previous day: " << day1.getPrevDay() << std::endl;

    // postcond: the previous day of day1 is printed

    std::cout << "Next day: " << day1.getNextDay() << std::endl;

    // postcond: the next day of day1 is printed

    dayType day2("Monday");

    // precond: dayType constructor with a string argument is implemented to set the day name

    std::cout << "Value of second object: " << day2.getDay() << std::endl;

    // postcond: the day name of day2 is printed

    day2.addDays(3);
    std::cout << "New day after adding 3 days: ";
    day2.printDay();

    // postcond: day2's day is incremented by 3 days and printed

    day2.addDays(30);
    std::cout << "New day after adding 30 days: ";
    day2.printDay();

    // postcond: day2's day is incremented by 30 days and printed

    day2.addDays(365);
    std::cout << "New day after adding 365 days: ";
    day2.printDay();

    // postcond: day2's day is incremented by 365 days and printed

    return 0;
}
