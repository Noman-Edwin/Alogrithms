#include <iostream>
#include <vector>


int partition(std::vector<int> &vec,int lo, int hi);

void quick_sort(std::vector<int> &vec,int lo, int hi)
{
	if (lo >= hi) 
		return ;
	int j = partition(vec, lo, hi);
	
	quick_sort(vec, lo, j-1);
	quick_sort(vec, j+1, hi);
}

int partition(std::vector<int> &vec,int lo, int hi)
{
	int num = vec[lo];
	int i = lo;
	int j = hi+1;
	
	while (1)
	{
		while (vec[++i] < num)
			if (i == hi)
				break;
		while (vec[--j] > num)
			if (j == lo)
				break;
		if (i >= j)
			break;

		int tmp = vec[i];
		vec[i] = vec[j];
		vec[j] = tmp;
	}
	int tmp = vec[lo];
	vec[lo] = vec[j];
	vec[j] = tmp;

	return j;
	
	
}
int main()
{
	int 	a;
	std::vector<int>  vec;
	std::cout<<"please cin number"<<std::endl;
	
	while(std::cin>>a)
		vec.push_back(a);
	int hi = vec.size()-1;
	quick_sort(vec,0,hi);
	for (auto i : vec)
		std::cout<<i<<" ";
	
	std::cout<<std::endl;
}
