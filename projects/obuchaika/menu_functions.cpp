#include "menu_functions.hpp"

#include <cstdlib>
#include <iostream>

const Jrwh::MenuItem* Jrwh::show_menu(const MenuItem* current) {
	std::cout << "Обучайка приветствует тебя, мой юный ученик!" << std::endl;
	for (int i = 1; i < current->children_count; i++) {
		std::cout << current->children[i]->title << std::endl;
	}
	std::cout << current->children[0]->title << std::endl;
	std::cout << "Обучайка > ";
	
	int user_input;
	std::cin >> user_input;
	std::cout << std::endl;
	
	return current->children[user_input];
}

const Jrwh::MenuItem* Jrwh::exit(const MenuItem* current) {
	std::exit(0);
}

const Jrwh::MenuItem* Jrwh::study_algebra(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl;
	return current->parent;
}

const Jrwh::MenuItem* Jrwh::study_math_analysis(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl;
	return current->parent;
}

const Jrwh::MenuItem* Jrwh::study_go_back_to_main(const MenuItem* current) {
	// TODO
	return current->parent->parent;
}

const Jrwh::MenuItem* Jrwh::algebra_summ(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl;
	return current->parent;
}

const Jrwh::MenuItem* Jrwh::algebra_substract(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl;
	return current->parent;
}

const Jrwh::MenuItem* Jrwh::algebra_multiply(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl;
	return current->parent;
}

const Jrwh::MenuItem* Jrwh::algebra_divide(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl;
	return current->parent;
}

const Jrwh::MenuItem* Jrwh::algebra_go_back(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl;
	return current->parent->parent;
}

const Jrwh::MenuItem* Jrwh::math_analysis_diff(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl;
	return current->parent;
}

const Jrwh::MenuItem* Jrwh::math_analysis_integral(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl;
	return current->parent;
}

const Jrwh::MenuItem* Jrwh::math_analysis_back(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl;
	return current->parent->parent;
}