#include <iter.hpp>

void	str_test(const std::string elem)
{
	std::cout << elem << std::endl;
}

void	int_test(const int elem)
{
	std::cout << elem << std::endl;
}

template<typename R>
int	return_test(const R elem)
{
	if (elem % 2 == 0)
		std::cout << elem << std::endl;
	return(1);
}

int main()
{
	int array[7];
	const int	l = 7;
	for (int i = 0; i < l ; i++)
		array[i] = i;
	iter(array, l, int_test);

	const std::string array2[7] = {"oui", "non", "bien", "sur", "nesspa", "kiki", "arg"};
	const int l2 = 7;
	iter(array2, l2, str_test);

	iter(array, l2, return_test<int>);
}
