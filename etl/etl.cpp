#include "etl.h"
#include <iostream>

namespace etl {
	std::map<char, int> transform(std::map<int, std::vector<char>> old) {
		// build up shape in to result format
		std::map<char, int> result;
		for (auto const& [score, v] : old) {
			for (auto const letter : v) {
				const auto lc = static_cast<char>(std::tolower(letter));
				result.insert(std::pair<char, int>(lc, score));
			}
		}
		return result;
	};
}  // namespace etl
