#include "menu_items.hpp"

#include <cstddef>

#include "menu_functions.hpp"

const Jrwh::MenuItem Jrwh::ALGEBRA_SUMM = {
	"1 - Хочу научиться складывать!", Jrwh::algebra_summ, &Jrwh::STUDY_ALGEBRA, nullptr, 0
};
const Jrwh::MenuItem Jrwh::ALGEBRA_SUBSTRACT = {
	"2 - Хочу научиться вычитать!", Jrwh::algebra_substract, &Jrwh::STUDY_ALGEBRA, nullptr, 0
};
const Jrwh::MenuItem Jrwh::ALGEBRA_MULTIPLY = {
	"3 - Хочу научиться умножать!", Jrwh::algebra_multiply, &Jrwh::STUDY_ALGEBRA, nullptr, 0
};
const Jrwh::MenuItem Jrwh::ALGEBRA_DIVIDE = {
	"4 - Хочу научиться делить!", Jrwh::algebra_divide, &Jrwh::STUDY_ALGEBRA, nullptr, 0
};
const Jrwh::MenuItem Jrwh::ALGEBRA_GO_BACK = {
	"0 - Вернуться к выбору предметов.", Jrwh::algebra_go_back, &Jrwh::STUDY_ALGEBRA, nullptr, 0
};

namespace {	
	const Jrwh::MenuItem* const algebra_children[] = {
		&Jrwh::ALGEBRA_GO_BACK,
		&Jrwh::ALGEBRA_SUMM,
		&Jrwh::ALGEBRA_SUBSTRACT,
		&Jrwh::ALGEBRA_MULTIPLY,
		&Jrwh::ALGEBRA_DIVIDE,
	};
	const int algebra_size = sizeof(algebra_children) / sizeof(algebra_children[0]);
}

const Jrwh::MenuItem Jrwh::MATH_ANALYSIS_DIFF = {
	"1 - Хочу изучать дифференциальное исчисление!", Jrwh::math_analysis_diff, &Jrwh::STUDY_MATH_ANALYSIS, nullptr, 0
};
const Jrwh::MenuItem Jrwh::MATH_ANALYSIS_INTEGRAL = {
	"2 - Хочу изучать интегральное исчисление!", Jrwh::math_analysis_integral, &Jrwh::STUDY_MATH_ANALYSIS, nullptr, 0
};
const Jrwh::MenuItem Jrwh::MATH_ANALYSIS_BACK = {
	"0 - Вернуться к выбору предметов.", Jrwh::math_analysis_back, &Jrwh::STUDY_MATH_ANALYSIS, nullptr, 0
};

namespace {	
	const Jrwh::MenuItem* const math_analysis_children[] = {
		&Jrwh::MATH_ANALYSIS_BACK,
		&Jrwh::MATH_ANALYSIS_DIFF,
		&Jrwh::MATH_ANALYSIS_INTEGRAL,
	};
	const int math_analysis_size = sizeof(math_analysis_children) / sizeof(math_analysis_children[0]);
}

const Jrwh::MenuItem Jrwh::STUDY_ALGEBRA = {
	"1 - Хочу изучать алгебру!", Jrwh::show_menu, &Jrwh::STUDY, algebra_children, algebra_size 
};
const Jrwh::MenuItem Jrwh::STUDY_MATH_ANALYSIS = {
	"2 - Хочу изучать математический анализ!", Jrwh::show_menu, &Jrwh::STUDY, math_analysis_children, math_analysis_size
};
const Jrwh::MenuItem Jrwh::STUDY_GO_BACK_TO_MAIN = {
	"0 - Выйти в главное меню.", Jrwh::study_go_back_to_main, &Jrwh::STUDY, nullptr, 0
};

namespace {	
	const Jrwh::MenuItem* const study_children[] = {
		&Jrwh::STUDY_GO_BACK_TO_MAIN,
		&Jrwh::STUDY_ALGEBRA,
		&Jrwh::STUDY_MATH_ANALYSIS,
	};
	const int study_size = sizeof(study_children) / sizeof(study_children[0]);
}	

const Jrwh::MenuItem Jrwh::STUDY = {
	"1 - Хочу учиться математике!", Jrwh::show_menu, &Jrwh::MAIN, study_children, study_size
};
const Jrwh::MenuItem Jrwh::EXIT = {
	"0 - Я лучше пойду полежу...", Jrwh::exit, &Jrwh::MAIN, nullptr, 0
};

namespace {
	const Jrwh::MenuItem* const main_children[] = {
		&Jrwh::EXIT,
		&Jrwh::STUDY
	};
	const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const Jrwh::MenuItem Jrwh::MAIN = {
	nullptr, Jrwh::show_menu, nullptr, main_children, main_size
};
