#include <iostream>
#include <vector>
#include <string>

#define CALL(func) { for (int i = 0; i < 10; ++i){func(&wagons, &overcrowded_wagons, &wagons_with_empty_seats, &number_of_all_passengers, i+1);} }

void input_passengers(std::vector<int>* wagons, std::vector<int>* overcrowded_wagons,std::vector<int>* wagons_with_empty_seats, int* sum, int num_of_wagon){    
    std::cout << "Enter number of passengers in wagon #" + std::to_string(num_of_wagon) << std::endl;

    int number_of_passengers;
    std::cin >> number_of_passengers;
    wagons->push_back(number_of_passengers);

    *sum+=number_of_passengers;

    if (number_of_passengers > 20) {
        overcrowded_wagons->push_back(num_of_wagon);
        std::cout << "Wagon #" + std::to_string(num_of_wagon) + " is overcrowded" << std::endl;
    }
    if (number_of_passengers < 20) {
        wagons_with_empty_seats->push_back(num_of_wagon);
        std::cout << "Wagon #" + std::to_string(num_of_wagon) + " has empty seats" << std::endl;
    }
}


int main(){
    int number_of_all_passengers = 0;
    std::vector<int> wagons, overcrowded_wagons, wagons_with_empty_seats;
    CALL(input_passengers);
    
    std::cout << "Overcrowded wagons numbers:" << std::endl;
    for (auto i: overcrowded_wagons) std::cout << i << ' ';
    std::cout << std::endl;

    std::cout << "Wagons with empty seats numbers:" << std::endl;
    for (auto i: wagons_with_empty_seats)std::cout << i << ' ';
    std::cout << std::endl;

    std::cout << "Number of passengers in all wagons:" << std::endl;
    std::cout << number_of_all_passengers << std::endl;
}