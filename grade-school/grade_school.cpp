#include "grade_school.h"

#include <iostream>

namespace grade_school {
	std::map<int, std::vector<std::string>> school::roster() const {
		return studentRoster;
	};

	void school::add(std::string name, int grade) {
		studentRoster[grade].push_back(name);
		std::sort(studentRoster.at(grade).begin(), studentRoster.at(grade).end());
	};

	std::vector<std::string> school::grade(int gradeNumber) const {
		// for (auto const& [k, v] : studentRoster) {
		// 	std::cout << "student Roster grade " << k << std::endl;
		// 	for (auto const& s : v) {
		// 		std::cout << "student Roster grade student names " << s << std::endl;
		// 	}
		// }
		try
		{
			const auto gradeRoster = studentRoster.at(gradeNumber);
			return gradeRoster;
		}
		catch(const std::exception& e)
		{
			return {};
		}
		
	};

	bool school::empty() {
		return studentRoster.empty();
	};
}  // namespace grade_school
