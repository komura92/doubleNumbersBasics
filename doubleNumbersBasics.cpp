#include <iostream>
#include <string>

void basicNumbersRules();

int main() {
	basicNumbersRules();
	return 0;
}

void basicNumbersRules() {
	std::cout << "Do U think 1 - (2/3) = 1/3? Let's try.." << std::endl << std::endl;

	std::cout << 
	"	if ((1 - 2 / 3) == 1 / 3)\n\
		std::cout << \"It is!\" << std::endl;\n\
	else\n\
		std::cout << \"It's NOT!\" << std::endl; " << std::endl << std::endl;

	system("pause");
	if ((1 - 2 / 3) == 1 / 3)
		std::cout << "It is!" << std::endl;
	else
		std::cout << "It's NOT!" << std::endl;

	system("pause");
	system("cls");

	std::cout << \
		"Yeah, yeah.. I know.. Int divided by another int gives the int result.. \n(1/3)=" << \
		1 / 3 << \
		" and the (2/3)=" << \
		2 / 3 << \
		"\nSo using double type it should be OK..." << \
		std::endl << std::endl;

	std::cout <<
		"	if ((1.0 - 2.0 / 3.0) == 1.0 / 3.0)\n\
		std::cout << \"It is!\" << std::endl;\n\
	else\n\
		std::cout << \"It's NOT!\" << std::endl; " << std::endl << std::endl;

	system("pause");

	if ((1.0 - 2.0 / 3.0) == 1.0 / 3.0)
		std::cout << "It is!" << std::endl;
	else
		std::cout << "It's NOT!" << std::endl;

	std::cout << "Want know why?" << std::endl;
	system("pause");

	system("cls");
	std::cout << "Double numbers usually doesn't have expected value. This situation exists in case of variable declaration and receiving the result of mathematical operations. The problem occurs cause of differences between decimal and binary systems as well as limited bytes for variables (especially in periodic fractions)." << std::endl << std::endl; //TODO

	std::cout << "This code still gives interesting result:" << std::endl << std::endl;

	std::cout <<
		"	if ((1.0 - 0.7) == 0.3)\n\
		std::cout << \"It is!\" << std::endl;\n\
	else\n\
		std::cout << \"It's NOT!\" << std::endl; " << std::endl << std::endl;

	std::cout << "Result:\n";

	if ((1.0 - 0.7) == 0.3)
		std::cout << "It is!" << std::endl;
	else
		std::cout << "It's NOT!" << std::endl;

	std::cout << "So what to do with that?" << std::endl;

	system("pause");
	system("cls");

	std::string doublePrecisionCode = 
	"	if (fabs((1.0 - 2.0 / 3.0) - 1.0 / 3.0) <= 1e-10)\n\
		std::cout << \"It is!\" << std::endl;\n\
	else\n\
		std::cout << \"It's NOT!\" << std::endl; \n";

	std::cout << "All u have to do is think in precision perspective. How?\nFor example this code:" << std::endl << std::endl << \
		doublePrecisionCode << \
		"\ngives this result:" << std::endl;

	if (fabs((1.0 - 2.0 / 3.0) - 1.0 / 3.0) <= 1e-10)
		std::cout << "It is!" << std::endl;
	else
		std::cout << "It's NOT!" << std::endl;

	std::cout << std::endl;

	std::cout << "What just happened?" << std::endl;

	system("pause");
	system("cls");

	std::cout << "Firstly:\n";
	std::cout << "1e-10 = 0.0000000001\n";
	std::cout << "and it's ours precision or range of tolerance (when we can say the number is zero).\n";
	std::cout << "fabs(x) function returns the absolute value of 'x' variable.\n";
	std::cout << "Why we use it? We want to avoid the situation when the result of substraction is a negative number, cause of comparing with zero always gives true.";

	std::cout << std::endl << std::endl;
	std::cout << "Remember and have a nice day! :D" << std::endl;
	system("pause");
}