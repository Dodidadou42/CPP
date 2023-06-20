#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}
ScalarConverter::ScalarConverter(const ScalarConverter &ref){(void)ref;}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter &ref){(void)ref;return *this;}
ScalarConverter::~ScalarConverter(){}

std::string ScalarConverter::getType(const char *str){
	bool nums = false;
	std::string s(str);
	std::string literals[6] = {"nan", "nanf", "+inf", "+inff", "-inf", "-inff"};

	if (s.empty())
		return "IMPOSSIBLE";
	for (int i = 0; i < 6; i++)
		if (s == literals[i])
			return "LITERALS";
	if (s.length() == 1)
	{
		if (*str >= '0' && *str <= '9')
			return "INT";
		else
			return "CHAR";
	}
	if (str[0] != '-' && (str[0] < '0' || str[0] > '9'))
		return "IMPOSSIBLE";
	else if (str[0] != '-')
		nums = true;
	unsigned long i = 0;
	while (str[++i]){
		if (str[i] >= '0' && str[i] <= '9')
			nums = true;
		else if (str[i] == '.'){
			if (nums == true && i != s.length() - 1){
				nums = false;
				break;
			}
			else
				return "IMPOSSIBLE";
		}
		else 
			return "IMPOSSIBLE";
	}
	if (nums == true)
		return "INT";
	while (str[++i]){
		if (str[i] >= '0' && str[i] <= '9')
			nums = true;
		else if (str[i] == 'f' && i == s.length() - 1 && nums == true)
			return "FLOAT";
		else
			return "IMPOSSIBLE";
	}
	return "DOUBLE";
}

bool ScalarConverter::checkOverflow(std::string type, const char *str){
	try
	{
		if (type == "INT"){
			int value = std::stoi(str);
			(void)value;
		}
		else if (type == "FLOAT"){
			float fValue = std::stof(str);
			(void)fValue;
		}
		else if (type == "DOUBLE"){
			double dValue = std::stod(str);
			(void)dValue;
		}
		return true;
	}
	catch (std::exception &e){
		std::cerr << type << " Overflow";
		return false;
	}
	return false;
}

void	ScalarConverter::print(char c, int n, float f, double d, int p){
	if (c >= 32 && c <= 127)
		std::cout << "char : '" << c << "'" << std::endl;
	else
		std::cout << "char : Non displayable" << std::endl;
	if (d > INT_MAX || d < INT_MIN)
		std::cout << "int : Overflow" << std::endl;
	else
		std::cout << "int : " << n << std::endl;
	if (d > FLT_MAX || d < -FLT_MAX)
		std::cout << "float : Overflow" << std::endl;
	else
		std::cout << "float : " << std::fixed << std::setprecision(p)<< f << "f" << std::endl;
	std::cout << "double : " << d << std::endl;
}

void ScalarConverter::convertChar(const char* str){
	char	c = str[0];
	int		n = static_cast<int>(c);
	float	f = static_cast<float>(n);
	double	d = static_cast<double>(n);
	ScalarConverter::print(c, n, f, d, 1);
}
void ScalarConverter::convertInt(const char* str){
	int		n = std::stoi(str);
	char	c = static_cast<char>(n);
	float	f = static_cast<float>(n);
	double	d = static_cast<double>(n);
	ScalarConverter::print(c, n, f, d, 1);
}
void ScalarConverter::convertFloat(const char* str){
	float	f = std::stof(str);
	char	c = static_cast<char>(f);
	int		n = static_cast<int>(f);
	double	d = static_cast<double>(f);
	std::string s(str);
	int i = s.find(".");
	ScalarConverter::print(c, n, f, d, s.size() - i - 2);
}
void ScalarConverter::convertDouble(const char* str){
	double	d = std::stod(str);
	char	c = static_cast<char>(d);
	float	f = static_cast<float>(d);
	int		n = static_cast<int>(d);
	std::string s(str);
	int i = s.find(".");
	ScalarConverter::print(c, n, f, d, s.size() - i - 1);
}

void ScalarConverter::printLiterals(const char *str){
	std::cout << "char : impossible" << std::endl;
	std::cout << "int : impossible" << std::endl;
	std::string f = "float : ";
	std::string d = "double : ";
	if (*str == 'n'){
		f += "nanf";
		d += "nan";
	}
	else if (*str == '-'){
		f += "-inff";
		d += "-inf";
	}
	else if (*str == '+'){
		f += "+inff";
		d += "+inf";
	}
	std::cout << f << std::endl;
	std::cout << d << std::endl;
}

void ScalarConverter::convert(const char *str){
	std::string type = ScalarConverter::getType(str);
	if (!ScalarConverter::checkOverflow(type, str))
		return ;
	if (type == "CHAR")
		ScalarConverter::convertChar(str);
	else if (type == "INT")
		ScalarConverter::convertInt(str);
	else if (type == "FLOAT")
		ScalarConverter::convertFloat(str);
	else if (type == "DOUBLE")
		ScalarConverter::convertDouble(str);
	else if (type == "LITERALS")
		ScalarConverter::printLiterals(str);
	else
		std::cout << "Unknown Type Error" << std::endl;
}