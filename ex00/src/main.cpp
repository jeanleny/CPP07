#include <whatever.hpp>
#include <iostream>

int main()
{
	int	a = 4;
	int	b = 8;
	std::cout << a << std::endl << b << std::endl;
	swap<int>(a, b);
	std::cout << a << std::endl << b << std::endl;
	
	std::cout << "min : " << min<int>(a, b) << std::endl;
	std::cout << "max : " << max<int>(a, b) << std::endl;

	a = 5;
	b = 5;
	std::cout << "min : " << min<int>(a, b) << std::endl;
	std::cout << "max : " << min<int>(a, b) << std::endl;

	std::string oui = "ouite";
	std::string non = "nion";
	std::cout << oui << std::endl << non << std::endl;
	::swap<std::string>(oui, non);
	std::cout << oui << std::endl << non << std::endl;

	a = 2;
	b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;

}
