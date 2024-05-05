#include <iostream>

#define MONDAY 1
#define TUESDAY 2
#define WEDNESDAY 3
#define THURSDAY 4
#define FRIDAY 5
#define SATURDAY 6
#define SUNDAY 7

#define MONDAY_NAME "MONDAY"
#define TUESDAY_NAME "TUESDAY"
#define WEDNESDAY_NAME "WEDNESDAY"
#define THURSDAY_NAME "THURSDAY"
#define FRIDAY_NAME "FRIDAY"
#define SATURDAY_NAME "SATURDAY"
#define SUNDAY_NAME "SUNDAY"

#define GET_DAY(day) day ## _NAME

int main() {
    while (true) {
        int day = 0;
        std::cin >> day;
        if (day >= 1 && day <= 7) {
            if (day == MONDAY)
                std::cout << GET_DAY(MONDAY) << std::endl;
            if (day == TUESDAY)
                std::cout << GET_DAY(TUESDAY) << std::endl;
            if (day == WEDNESDAY)
                std::cout << GET_DAY(WEDNESDAY) << std::endl;
            if (day == THURSDAY)
                std::cout << GET_DAY(THURSDAY) << std::endl;
            if (day == FRIDAY)
                std::cout << GET_DAY(FRIDAY) << std::endl;
            if (day == SATURDAY)
                std::cout << GET_DAY(SATURDAY) << std::endl;
            if (day == SUNDAY)
                std::cout << GET_DAY(SUNDAY) << std::endl;
        } else {
            std::cout << "Incorrect day number. Should be from 1 to 7" << std::endl;
        }
    }
}