#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade){
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
Bureaucrat::~Bureaucrat(){}

const std::string Bureaucrat::getName() const{
	return this->_name;
}
int	Bureaucrat::getGrade() const{
	return this->_grade;
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

void Bureaucrat::signForm(AForm &ref){
	ref.beSigned(*this);
	std::cout << this->getName() << " signed " << ref.getName() << std::endl;
}

void Bureaucrat::executeForm(const AForm &form){
	form.execute(*this);
	std::cout << this->getName() << " executed " << form.getName() << std::endl;
}

std::ostream& operator<<(std::ostream &os, Bureaucrat const &ref){
	os << "Bureaucrat " << ref.getName() << "\n_grade = " << ref.getGrade() << '\n';
	return os;
}
