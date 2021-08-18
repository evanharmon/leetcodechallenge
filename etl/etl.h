#if !defined(ETL_H)
#define ETL_H
#include <map>
#include <vector>

namespace etl {
	std::map<char, int> transform(std::map<int, std::vector<char>> old); 
}  // namespace etl

#endif // ETL_H