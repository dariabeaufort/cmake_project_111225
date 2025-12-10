#pragma once

#include "menu.hpp"

namespace Jrwh {
	const MenuItem* show_menu(const MenuItem* current);
	
	const MenuItem* exit(const MenuItem* current);
	
	const MenuItem* study_algebra(const MenuItem* current);
	const MenuItem* study_math_analysis(const MenuItem* current);
	const MenuItem* study_go_back_to_main(const MenuItem* current);
	
	const MenuItem* algebra_summ(const MenuItem* current);
	const MenuItem* algebra_substract(const MenuItem* current);
	const MenuItem* algebra_multiply(const MenuItem* current);
	const MenuItem* algebra_divide(const MenuItem* current);
	const MenuItem* algebra_go_back(const MenuItem* current);
	
	const MenuItem* math_analysis_diff(const MenuItem* current);
	const MenuItem* math_analysis_integral(const MenuItem* current);
	const MenuItem* math_analysis_back(const MenuItem* current);
}