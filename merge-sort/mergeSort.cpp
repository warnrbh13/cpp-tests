#include "mergeSort.h"


std::ostream& operator<<(std::ostream& stream, std::vector<int>& v) {
	for (unsigned int i = 0 ; i<v.size() ; ++i) {
		stream << v[i] << " ";
	}
	return stream;
}

int main()
{
	vector<int> v{23, 65, 87, 986, 4321, 33, 1 , 4, 0};
	MergeSort solution;

	std::cout << v << std::endl;
	solution.mergeSort(v, 0, v.size() - 1);
	std::cout << v << std::endl;
	
	std::cin.get();
	return 0;
}