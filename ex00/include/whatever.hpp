#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T &p1, T &p2)
{
	T tmp = p1;
	p1 = p2;
	p2 = tmp;
}

template<typename T>
T const& min(T const& p1, T const& p2)
{
	return ((p1 < p2) ? p1 : p2);
}

template<typename T>
T const& max(T const& p1, T const& p2)
{
	return ((p1 >= p2) ? p1 : p2);
}

#endif
