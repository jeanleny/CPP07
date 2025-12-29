#include <Array.hpp>

int main()
{

	std::cout << "DEFAULT constructor test\n" << std::endl;
	Array<std::string> 	a_str(8);
	Array<int> 	a_int;
	Array<int> 	a_arg_int(9);
	Array<int> 	a_arg_int2(9);
	std::cout << a_str.size() << std::endl;
	std::cout << a_arg_int.size() << std::endl;
	for (size_t i = 0; i < a_arg_int.size(); i++)
	{
		a_arg_int._array[i] = i;
		a_arg_int2._array[i] = i+4;
	}
	std::cout << "\nCOPY constructor test" << std::endl;
	Array<int> a_intcpy(a_arg_int);
	Array<std::string> a_strcpy(a_str);
	std::cout << a_intcpy.size() << std::endl;
	std::cout << a_strcpy.size() << std::endl;
	for (size_t i = 0; i < a_arg_int.size(); i++)
		std::cout << a_intcpy._array[i];

	std::cout << "\nASSIGNEMENT OVERLOAD test" << std::endl;
	a_int = a_intcpy;
	a_intcpy = a_arg_int2;
	for (size_t i = 0; i < a_arg_int2.size(); i++)
		std::cout << a_intcpy._array[i];
	std::cout << std::endl;
	for (size_t i = 0; i < a_int.size(); i++)
		std::cout << a_int._array[i];
	std::cout << std::endl;

	std::cout << "\nSUBSCRIPT OVERLOAD test" << std::endl;
	try 
	{
		for (size_t i = 0; i < a_intcpy.size(); i++)
			std::cout << a_intcpy[i] << std::endl;
		std::cout << std::endl;
		for (size_t i = 0; i < 50; i++)
			std::cout << a_intcpy[i] << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\nCONST SUBSCRIPT OVERLOAD test" << std::endl;
	Array<int> c_intarray(6);
	try 
	{
		for (size_t i = 0; i < c_intarray.size(); i++)
			std::cout << c_intarray[i] << std::endl;
		std::cout << std::endl;
		for (size_t i = 0; i <= c_intarray.size(); i++)
			std::cout << c_intarray[i] << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::string content[10] = {"unte", "deuxe", "troike", "kwarte", "sainkits", "sausiss", "saip", "ouite", "neuv", "diks"};
	Array<std::string> t_strarray(10);
	for (size_t i = 0; i < t_strarray.size(); i++)
		t_strarray._array[i] = content[i];
	for (size_t i = 0; i < t_strarray.size(); i++)
		std::cout << t_strarray[i] << std::endl;
}
