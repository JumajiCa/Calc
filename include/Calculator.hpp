
#include <iostream> 

struct Calculator{ 
	char getOperator(){ 
		char Operator{}; 

		std::cout << "Enter An Operation. " << std::endl; 
		std::cin >> Operator; 

		return Operator; 

	}; 

	bool checkDivisionZero(double Number2, char Operator){ 

		if (Operator == '/' && Number2 == 0){ 
			std::cout << "Undefined. " << std::endl; 
			return true; 
		} 

		else{ 
			return false; 
		} 

	}; 

	void Calc(double Number1, double Number2, char Operator){ 
		bool zeroCase{checkDivisionZero(Number2, Operator)}; 

		if (zeroCase == false){ 
			switch (Operator){ 
				case '+': 
					std::cout << Number1 + Number2 << std::endl; 
					break; 
				case '-': 
					std::cout << Number1 - Number2 << std::endl; 
					break; 
				case '*': 
					std::cout << Number1 * Number2 << std::endl; 
					break; 
				case '/': 
					std::cout << Number1 / Number2 << std::endl; 
					break; 
				default: 
					std::cout << "Invalid Operation. " << std::endl; 
			}; 
		} 

		else{ 
			std::cout << "Division By Zero. " << std::endl; 
		} 

	}; 

}; 
