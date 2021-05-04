#include <iostream>
#include <vector>
#include <utility>

auto find_two_single_numbers(const std::vector<int> &numbers) -> std::pair<int,int> {
	auto n1_xor_n2 = 0;
	for (auto num : numbers) {
		n1_xor_n2 ^= num;
	}
	// find right most bit that is 1 in n1_xor_n2
	int right_most_bit = 1;
	while((n1_xor_n2 & right_most_bit) == 0) { //while right_most_bit not set in n1_xor_n2
		right_most_bit = right_most_bit << 1;
	}
	// now var right_most_bit has the right most bit set to one of the numbers in n1_xor_n2
	// classify numbers accoring to right most bit and perform xor
	auto first = 0;
	auto second = 0;
	for(auto num : numbers) {
		if(num & right_most_bit)
			first ^= num;
		else
			second ^= num;
	}
	return std::make_pair(first, second);
}
auto main() -> int {
	auto v1 = std::vector<int>{1, 4, 2, 1, 3, 5, 6, 2, 3, 5};
	auto [num1, num2] = find_two_single_numbers(v1);
	std::cout << "Two single numbers are " << num1 << " and " << num2 << std::endl;
	return 0;
}
