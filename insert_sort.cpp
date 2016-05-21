//This is a insert sort
#include<iostream>
#include<vector>

void insert_sort(std::vector<int> &a)
{
	auto m = a.size();

	for (int i = 1; i < m;i++)
	{
		for (int j = i; j > 0;j--)
		{
			if (a[j] < a[j-1])
			{

				int tmp = a[j-1];
				a[j-1] = a[j];
				a[j] = tmp;
			}	
		}
	}
			
}

int main()
{
	int 	a;
	std::vector<int>	vec;

	std::cout<<"please cin number"<<std::endl;
	
	while(std::cin>>a)
		vec.push_back(a);
	insert_sort(vec);
	for (auto i : vec)
		std::cout<<i<<" ";
	
	std::cout<<std::endl;
}
