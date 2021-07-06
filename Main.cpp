
#include <iostream> 
#include "include/Calculator.hpp" 

int main(){ 

	double Number1, Number2; 
	Calculator Calc; 

	while (true){ 

		std::cout << "Enter A Number. " << std::endl; 
		std::cin >> Number1; 
		std::cout << "Enter Another Number. " << std::endl; 
		std::cin >> Number2; 

		char Operator{Calc.getOperator()}; 

		Calc.Calc(Number1, Number2, Operator); 

		std::cout << "Test. " << std::endl; 

		} 

	return 0; 


} 

