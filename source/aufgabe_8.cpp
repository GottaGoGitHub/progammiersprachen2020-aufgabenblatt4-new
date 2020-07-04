#include <cstdlib> // std :: rand ()
#include <vector> // std :: vector < >
#include <list> // std :: list < >
#include <iostream> // std :: cout
#include <iterator> // std :: ostream_iterator < >
#include <algorithm> // std :: reverse , std :: generate
int main()
{
	//init vector of size 10
	std::vector<int> v_0(10);

	//assign each element in v_0 a random value
	for (auto& v : v_0) {
		v = std::rand();
	}

	//print v_0
	//std::ostream_iterator<int>, that writes to the ostream by adding the elements of v_0 into std::cout
	std::copy(std::cbegin(v_0), std::cend(v_0),
	std::ostream_iterator<int>(std::cout, "\n"));

	//init l_0 using values of v_0
	std::list<int> l_0(std::cbegin(v_0), std::cend(v_0));

	//init l_1 using values of l_0
	std::list<int> l_1(std::cbegin(l_0), std::cend(l_0));

	//reverses l_1 and writes it to the ostream via iterator<int>
	std::reverse(std::begin(l_1), std::end(l_1));
	std::copy(std::cbegin(l_1), std::cend(l_1),
	std::ostream_iterator<int>(std::cout, "\n"));

	//sort l_1
	l_1.sort();
#
	//print l_1
	std::copy(l_1.cbegin(), l_1.cend(),
	std::ostream_iterator<int>(std::cout, "\n"));

	//iterates over v_0 and assings random elements
	std::generate(std::begin(v_0), std::end(v_0), std::rand);

	//print v_0
	std::copy(v_0.crbegin(), v_0.crend(),
	std::ostream_iterator<int>(std::cout, "\n"));

	return 0;
}