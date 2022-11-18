#include "pch.h"

void FizznBuzz();

int main(){
	
	std::cout<<"Hi welcome to fizz&buzz game!"<<std::endl;
	
	std::cout<<"START \nMODES \nQUIT"<<std::endl;

	string userInput;

	while(true)
	{
		getline(cin , userInput);

		tolower(userInput);

		if("start" == userInput)
		{
			FizznBuzz();
		}
		else if("mode" == userInput)
		{
			std::cout<<"Welcome modes menu! \nUnfortunateley for now modes are under construction."<<std::endl;
			std::cout<<"RACE AGAINST TIME \n"
			continue;
		}
		else if ("quit" == userInput || "quıt" == userInput)
		{
			return 0;
		}
		
	}
}
