//This is a shell sort
#include<iostream>
#include<vector>

void shell_sort(std::vector<int> &a)
{
	auto m = a.size();
	int  h = 1;

	while (h < m/3) 
		h = 3*h +1;
	while (h >= 1)
	{
		for (int i = h; i < m;i++)
		{
			for (int j = i; j >= h;j-=h)
			{
				if (a[j] < a[j-h])
				{
	
					int tmp = a[j-h];
					a[j-h] = a[j];
					a[j] = tmp;
				}	
			}
	
		}
		h = h/3;
	}		
}

int main()
{
	int 	a;
	std::vector<int>	vec;

	std::cout<<"please cin number"<<std::endl;
	
	while(std::cin>>a)
		vec.push_back(a);
	shell_sort(vec);
	for (auto i : vec)
		std::cout<<i<<" ";
	
	std::cout<<std::endl;
}
