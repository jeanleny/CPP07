#include <Array.hpp>

int main()
{
	Array<std::string> 	a_str(8);
	Array<int> 	a_int;
	Array<int> 	a_arg_int(9);
	std::cout << a_str.size() << std::endl;
	std::cout << a_arg_int.size() << std::endl;
	
}
