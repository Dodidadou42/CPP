#include <iostream>
#include <fstream>

void	ft_sed(std::string file, std::string s1, std::string s2)
{
	std::ifstream	ifs(file);
	std::string		tmp;

	if (ifs.is_open())
	{
		if (std::getline(ifs, tmp, '\0'))
		{
			std::ofstream ofs(file + ".replace");
			int	pos = tmp.find(s1);
			while (pos != std::string::npos)
			{
				tmp.erase(pos, s1.length());
				tmp.insert(pos, s2);
				pos = tmp.find(s1);
			}
			ofs << tmp;
			ofs.close();
		}
		else
			std::cout << "File empty";
		ifs.close();
	}
	else
	{
		std::cout << "Invalid file name" << std::endl;
		std::exit (0);
	}	
}

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string	file = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		ft_sed(file, s1, s2);
	}
	else	
		std::cout << "Invalid argument quantity." << std::endl;
	return (0);
}