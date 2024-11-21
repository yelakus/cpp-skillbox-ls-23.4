#include <iostream>

#define MONDAY "Monday"
#define TUESDAY "Tuesday"
#define WEDNESDAY "Wednesday"
#define THURSDAY "Thursday"
#define FRIDAY "Friday"
#define SATURDAY "Saturday"
#define SUNDAY "Sunday"
#define START_MESSAGE "Enter the day of the week as its sequence number:"
#define OUTPUT_MESSAGE(day) "You entered " day "\'s number"

int main(){
    int num;
    std::cout << START_MESSAGE << std::endl;
    std::cin >> num;
    
    if(num == 1)
    {
        std::cout << OUTPUT_MESSAGE(MONDAY) << std::endl;
    }
    else if(num == 2)
    {
        std::cout << OUTPUT_MESSAGE(TUESDAY) << std::endl;
    }else if(num == 3)
    {
        std::cout << OUTPUT_MESSAGE(WEDNESDAY) << std::endl;
    }else if(num == 4)
    {
        std::cout << OUTPUT_MESSAGE(THURSDAY) << std::endl;
    }else if(num == 5)
    {
        std::cout << OUTPUT_MESSAGE(FRIDAY) << std::endl;
    }else if(num == 6)
    {
        std::cout << OUTPUT_MESSAGE(SATURDAY) << std::endl;
    }else if(num == 7)
    {
        std::cout << OUTPUT_MESSAGE(SUNDAY) << std::endl;
    }
}