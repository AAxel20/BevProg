#include <iostream>
#include "std_lib_facilities.h"

int main()
{
	std::string first_name;
	std::string friend_name;

	std::cout << "Enter your name.\n";
	std::cin >> first_name;
	std::cout << "Enter the name of the person you want to write to\n";
	std::cin >> friend_name;
	std::cout << "Dear " << friend_name << ", How are you? I am fine. I miss you.\n";

	char friend_sex = 0;

	std::cout << "Enter an m if the friend is male and an f if the friend is female. \n";
	std::cin >> friend_sex;

	if (friend_sex == 'f') {
		std::cout << "If you see " <<friend_name<<" please ask her to call me.\n";
	}
	else if (friend_sex == 'm') {
		std::cout << "If you see " <<friend_name<<" please ask his to call me.\n";
	}

	int age;
	std::cout << "How old?\n";
	std::cin >> age;

	if (age < 0 || age>110) {
		simple_error("you're kidding!");
	}

	std::cout << "I hear you just had a birthday and you are " << age << " years old.\n";

	if (age < 12) {
		std::cout << "Next year you will be " << age + 1 << "\n";
	}
	else if (age == 17) {
		std::cout << "Next year you will be able to vote.\n";
	}
	else if (age > 70) {
		std::cout << "I hope you are enjoying retirement.\n";
	}

	std::cout<<"Yours sincerely,\n\n"<<first_name;
}
