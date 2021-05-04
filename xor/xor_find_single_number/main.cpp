#include <iostream>
#include <vector>

// In a non-empty array of integers, every number appears twice except for one, find that single number.
// Time Complexity: Time complexity of this solution is O(n) as we iterate through all numbers of the input once.
// Space Complexity: The algorithm runs in constant space O(1).
int findSingleNumber(const std::vector<int>& numbers) {
	int len = numbers.size() + 1; // one number missing in array, hence added 1
	// find xor of all numbers in input array
	int xor_arr = 0;
	for (auto num : numbers) {
		xor_arr ^= num;
	}
	return xor_arr;
}

auto main() -> int {
	std::vector<int> arr{ 1, 4, 2, 1, 3, 2, 3 };
	auto single_number = findSingleNumber(arr);
	std::cout << "Single Number = " << single_number << std::endl;
	return 0;
}
