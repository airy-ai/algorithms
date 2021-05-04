#include <iostream>
#include <vector>

auto invert_flip_image(std::vector<std::vector<int>> image) -> std::vector<std::vector<int>> {
	for(auto &row : image) {
		auto start = 0;
		auto end = row.size() -1 ;
		while(start < end) {
			auto temp  = row[start] ^ 1;
			row[start++] = row[end] ^ 1;
			row[end--]   = temp;
		}
		if(start == end) {
			row[end] ^= 1;
		}
	}
	return image;
}

auto print_image(const std::vector<std::vector<int>>& image) -> void {
	for(auto &row : image) {
		for(auto &cell : row) {
			std::cout << cell << " ";
		}
		std::cout << std::endl;
	}
}

auto main(int argc, char *argv[]) -> int {
	std::vector<std::vector<int>> image{{1, 0, 1},
					    {1, 1, 1},
					    {0, 1, 1}};
	auto new_image = invert_flip_image(image);
	print_image(new_image);
	return 0;
}
