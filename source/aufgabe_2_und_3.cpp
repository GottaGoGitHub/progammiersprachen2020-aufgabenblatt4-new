#include <list>
#include <set>
#include <map>
#include <vector>
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include<iostream>

int main() {
	std::cout << "aufgabe 2\n";

	std::vector<unsigned int> vector;

	for (int i = 1; i <= 100; i++) {
		vector.push_back(std::rand() % 100 + 1);
	}
	std::cout << "Vector elements:\n";
	for (int i : vector) {
		std::cout << i << "\n";
	}

	std::set<unsigned int> set;
	std::set<unsigned int> output_set;
	int counter = 0;

	for (int i : vector) {
		set.insert(i);
	}

	//counter unique elements in vector using set
	for (int i : set) {
		++counter;
	}
	std::cout << "Elemtents in vec:" << counter << "\n";

	for(int i = 1; i <= 100; i++){
	if (set.count(i) == 0) {
		output_set.insert(i);
		}
	}

	std::cout << "These numbers are not included in the set: " << "\n";
	for (int i : output_set) {
		std::cout << i << "\n";
	}

	std::map<unsigned int, unsigned int> amout_of_numbers;
	
	for (int i : vector) {
		if (amout_of_numbers.find(i) == amout_of_numbers.end()) {
			amout_of_numbers[i] = 1;
		}
		else {
			amout_of_numbers[i] += 1;
		}
	}

	for (auto const& pair_of_ints : amout_of_numbers) {
		std::cout << pair_of_ints.first << " is inside the list " << pair_of_ints.second << " times." << std::endl;
	}

	return 0;
}