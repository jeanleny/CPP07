#include <iter.hpp>

void	str_test(std::string elem)
{
	std::cout << elem << std::endl;
}

void	int_test(int elem)
{
	std::cout << elem << std::endl;
}

int main()
{
	int array[7];
	int	l = 7;
	for (int i = 0; i < l ; i++)
		array[i] = i;
	iter(array, l, int_test);

	std::string array2[7] = {"oui", "non", "bien", "sur", "nesspa", "kiki", "arg"};
	int l2 = 7;
	iter(array2, l2, str_test);
}
