#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

auto largest_K_numbers(const vector<int>& numbers, int K) -> vector<int> {
    //put first K numbers in min heap
    auto min_heap = vector<int>(numbers.begin(), numbers.begin() + K);
    make_heap(min_heap.begin(), min_heap.end(), greater<>());

    for (int i=K; i < numbers.size(); i++) {
        if( numbers[i] > min_heap.front()) {
            pop_heap(min_heap.begin(), min_heap.end(), greater<>());
            min_heap.pop_back();
            min_heap.push_back(numbers[i]);
            push_heap(begin(min_heap), end(min_heap), greater<>());
        }
    }
    return min_heap;
}

auto main () -> int {
    auto numbers = vector<int>{5, 13, 9, -1, 14};
    auto K = 3;
    auto result = largest_K_numbers(numbers, K);
    for (auto& elem : result) {
        cout << elem << '\n';
    }
    return 0;
}
