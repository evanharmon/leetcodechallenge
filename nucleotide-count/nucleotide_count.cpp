#include "nucleotide_count.h"
#include <iostream>
#include <stdexcept>

namespace nucleotide_count {
	// counter accepts a nucleotide string and builds a count of each element type
	counter::counter(std::string s) {
		if (s == "") return;
		// iterate through string
		// throw on invalid nucleotide types
		// otherwise bump cnt of type
		for (char const c : s) {
			if (c != 'A' && c != 'C' && c != 'G' && c != 'T') {
				throw std::invalid_argument("");
			}
			cnt.at(c)++;
		}
	};
	// nucleotide_counts returns shape of nucleotide types with counts
	std::map<char, int> counter::nucleotide_counts() const {
		return counter::cnt;
	};
	// count searches the nucleotide count shape and returns the count for the given char
	// throws if char does not exist in nucleotide count shape
	int counter::count(char c) const {
		auto it = cnt.find(c);
		if (it == cnt.end()) throw std::invalid_argument("");
		return cnt.at(c);
	}
}  // namespace nucleotide_count
