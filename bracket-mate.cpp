#include <iostream>
#include <vector>
#include <string>


int main()
{
	std::vector<char>	vec;
	std::string 		m;
	
	std::cout<<"please cin a bracks string"<<std::endl;
	std::cin >> m;
	
	for (auto c : m)
	{
		char 	tmp;
		
		switch(c)
		{
			case '{':
				vec.push_back(c);
				break;
			
			case '[':
				vec.push_back(c);
				break;
			case '(':
				vec.push_back(c);
				break;
			case '}':
				tmp = vec.back();
				vec.pop_back();
				if (tmp == '{') 
					break;
				else
				{
					std::cout<<"False"<<std::endl;
					return 0;
				}
			case ']':
				tmp = vec.back();
				vec.pop_back();
				if (tmp == '[') 
					break;
				else
				{
					std::cout<<"False"<<std::endl;
					return 0;
				}
			case ')':
				tmp = vec.back();
				vec.pop_back();
				if (tmp == '(') 
					break;
				else
				{
					std::cout<<"False"<<std::endl;
					return 0;
				}
			default :
				{
					std::cout<<"False"<<std::endl;
					return 0;
				}
				
		}
	}
	std::cout<<"True"<<std::endl;
	return 0;

}
