#include <iostream>
#include <vector>

std::ostream& operator <<(std::ostream& stream, const std::vector<int>& vect) {
	for(auto item : vect)
		std::cout << item << " ";
	std::cout << std::endl;
	return stream;
}

void Merge(std::vector<int>& vect, int begin, int middle, int end) {
    std::vector<int> left_tmp{};
    std::vector<int> right_tmp{};

    for (auto i = begin ; i <= middle ; ++i)
        left_tmp.push_back(vect[i]);
    for (auto i = middle + 1 ; i <= end ; ++i)
        right_tmp.push_back(vect[i]);

    std::cout << left_tmp << std::endl;
    std::cout << right_tmp << std::endl;

    int i{0};
    int j{0};
    int k{begin};

    while ( i < middle - begin && j < end - middle + 1 ) {

        if (left_tmp[i] <= right_tmp[j]) {
            vect[k] = left_tmp[i];
            ++i;
        }
		else {
            vect[k] = right_tmp[j];
            ++j;
        }
		++k;
    }

	while (i < middle - begin)
	{
		vect[k] = left_tmp[i];
		++k;
		++i;
	}

	while (j < end - middle + 1)
	{
		vect[k] = right_tmp[j];
		++k;
		++j;
	}
	
}

int main () {
	std::vector<int> first_vector{1,5,10,30,0,5,11,24};
	std::cout << "First Vector: " << first_vector << std::endl;
	int begin{};
	int end{};
	int middle{};
	end = first_vector.size() - 1;
	middle = (end - begin)/2 + begin;

	Merge(first_vector, begin, middle, end);

	std::cout << "Sorted Vector: " << first_vector << std::endl;
	return 0;
}