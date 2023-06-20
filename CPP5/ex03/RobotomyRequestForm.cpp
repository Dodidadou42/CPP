#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target){}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &ref) : AForm(ref){*this = ref;}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &ref){
	if (this != &ref)
		this->_target = ref._target;
	return *this;
}
RobotomyRequestForm::~RobotomyRequestForm(){}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const{
	this->checkExecute(executor);
	std::cout << "*loud drill sounds*" <<std::endl;
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(0, 1);
	int i = dis(gen);
	if (i % 2 == 0)
		std::cout << _target << " succesfully robotomised" << std::endl;
	else
		std::cout << "Failed to robotomize " << _target << std::endl;
}