#include <iostream>

// Declaration: as the name intend, this just tells the compiler, that something (symbol or function) called Log exists
// Definition: this is waht this declaration means
// Linker error when we build the whole project, linker will find this Log function inside the project, if it can not find
// Linker will thorw an error
// __cdecl pulling convention
// @@YAXPEBD@Z actual ID
// Just ignore them, just look at void (return type) Log (symbol name) (char const *) (parameter type) referneced in function main (used in)

void Log(const char* message);

int main()
{
	//std::cout << "Hello World!" << std::endl; //intuitively equals to std::cout.print("Hello World!").print(std::endl);
	//										  // "<<" operators are also functions

	Log("Hello World!");

	std::cin.get();							  //this function waits until we press Enter
}
