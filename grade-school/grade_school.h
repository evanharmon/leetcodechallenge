#if !defined(GRADE_SCHOOL_H)
#define GRADE_SCHOOL_H

#include <string>
#include <map>
#include <vector>

namespace grade_school {
	class school {

	public:
		std::map<int, std::vector<std::string>> roster() const;

		void add(std::string name, int grade);

		std::vector<std::string> grade(int gradeNumber) const;

		bool empty();

	private:
		std::map<int, std::vector<std::string>> studentRoster;
	};
}  // namespace grade_school

#endif // GRADE_SCHOOL_H