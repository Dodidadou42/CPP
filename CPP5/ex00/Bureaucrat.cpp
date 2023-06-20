#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade){
	std::cout << "Bureaucrat object created : " << name << ", grade " << grade<< std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}
Bureaucrat::Bureaucrat(const Bureaucrat& ref){
	*this = ref;
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& ref){
	if (this != &ref)
		this->_grade = ref._grade;
	return *this;
}
Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat object destroyed : " << this->getName() << std::endl;
}

const std::string Bureaucrat::getName() const{
	return this->_name;
}
int	Bureaucrat::getGrade() const{
	return this->_grade;
}

std::ostream& operator<<(std::ostream &os, Bureaucrat const &ref){
	os << ref.getName() << ", bureaucrat grade " << ref.getGrade();
	return os;
}

void Bureaucrat::gradeUp(){
	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}
void Bureaucrat::gradeDown(){
	this->_grade++;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

