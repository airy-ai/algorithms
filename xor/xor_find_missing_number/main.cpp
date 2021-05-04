#include <iostream>
#include <vector>

int findMissingNumber(const std::vector<int>& numbers) {
	int len = numbers.size() + 1; // one number missing in array, hence added 1
	// find xor of all numbers from 1 .. n
	int xor_n = 0;
	for (int i = 1; i <= len; i++) {
		xor_n ^= i;
	}
	std::cout << "xor of n numbers: " << xor_n << std::endl;
	// find xor of all numbers in input array
	int xor_arr = 0;
	for (auto num : numbers) {
		xor_arr ^= num;
	}
	std::cout << "xor of input numbers: " << xor_arr << std::endl;

	return xor_n ^ xor_arr;
}

auto main() -> int {
	std::vector<int> arr{ 1,2,4,5,6 };
	auto missing_number = findMissingNumber(arr);
	std::cout << "Missing Number = " << missing_number << std::endl;
	return 0;
}
