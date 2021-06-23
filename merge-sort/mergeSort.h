#pragma once
#include <iostream>
#include <vector>

using namespace std;
class MergeSort
{
public:

	void merge(vector<int>& vect, int l, int m, int r)
	{
		vector<int> tmpL;
		vector<int> tmpR;
		for (int i = 0; i < m - l + 1 ; ++i)
		{
			tmpL.push_back(vect[l + i]);
		}

		for (int i = 0; i < r - m; ++i)
		{
			tmpR.push_back(vect[m + i + 1]);
		}

		unsigned int i = 0;
		unsigned int j = 0;
		unsigned int k = l;

		while ( (i < tmpL.size()) && ( j < tmpR.size()) )
		{
			if (tmpL[i] <= tmpR[j])
			{
				vect[k] = tmpL[i];
				++i;
			}
			else
			{
				vect[k] = tmpR[j];
				++j;
			}
			++k;
		}

		while (i < tmpL.size())
		{
			vect[k] = tmpL[i];
			++i;
			++k;
		}

		while (j < tmpR.size())
		{
			vect[k] = tmpR[j];
			++j;
			++k;
		}
	}
	void mergeSort(vector<int>& vect, int l, int r)
	{
		if (l < r)
		{
			int m = ((r-l)/2) + l;
			mergeSort(vect , l, m);
			mergeSort(vect, m+1, r);
			merge(vect, l, m, r);
		}
	}
};

