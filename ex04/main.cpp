#include <iostream>
#include <fstream>

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
	if (ac != 4)
		return 1;

	std::string filename = av[1];
	std::ifstream file(filename.c_str());
	if (!file.is_open())
		return 1;

	std::ofstream output((filename + ".replace").c_str());
	if (!output.is_open())
		return 1;

	std::string s1 = av[2];
	std::string s2 = av[3];

	std::string line;

	if (s1.empty())
	{
		while (std::getline(file, line))
			output << line << "\n";
		return (0);
	}

	while (std::getline(file, line))
	{
		std::string result;
		size_t start = 0;
		size_t pos;

		pos = line.find(s1, start);
		while (pos != std::string::npos)
		{
			result += line.substr(start, pos - start);
			result += s2;
			start = pos + s1.length();
			pos = line.find(s1, start);
		}
		result += line.substr(start);
		output << result << "\n";
	}
	return (0);
}
