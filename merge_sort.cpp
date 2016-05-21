//This is merge sort
#include<iostream>
#include<vector>


std::vector<int>	aux;

void merge_sort(std::vector<int> &vec,int lo, int mid, int hi)
{
	int i = lo;
	int j = mid+1;
	
		
	for (int k = lo; k <= hi;k++)
		aux[k] = vec[k];
	for (int k = lo;k <= hi; k++ )
	{
		if (i > mid)
			vec[k] = aux[j++];
		else if (j > hi)
			vec[k] = aux[i++];
		else if (aux[i ] > aux[j ])
			vec[k] = aux[j++];
		else
			vec[k] = aux[i++];
	}
}
void sort(std::vector<int> &vec,int lo ,int hi)
	{
		if (hi <= lo) return;
		int mid = lo +(hi - lo)/2;
		sort(vec,lo, mid);
		sort(vec,mid+1,hi);
		merge_sort(vec,lo,mid,hi);
	}
int main()
{
	int 	a;
	std::vector<int>	vec;


	for (int i = 0; i<=20;i++)
		aux.push_back(i);
	std::cout<<"please cin number"<<std::endl;
	
	while(std::cin>>a)
		vec.push_back(a);
	int hi = vec.size()-1;
	sort(vec,0,hi);
	for (auto i : vec)
		std::cout<<i<<" ";
	
	std::cout<<std::endl;
}
