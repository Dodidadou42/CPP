#include "Form.hpp"

Form::Form(std::string name, int sgrade, int egrade) : _name(name), _signed(0), _grade_sign(sgrade), _grade_exec(egrade){
	if (sgrade > 150 || egrade > 150)
		throw Form::GradeTooLowException();
	if (sgrade < 1 || egrade < 1)
		throw Form::GradeTooHighException();
}
Form::Form(const Form &ref) : _name(ref._name), _signed(0), _grade_sign(ref._grade_sign), _grade_exec(ref._grade_exec){}
Form& Form::operator=(const Form &ref){
	if (this != &ref)
		this->_signed = ref._signed;
	return *this;
}
Form::~Form(){}

const std::string Form::getName() const{return this->_name;}
bool Form::getSigned() const{return this->_signed;}
int Form::getGradeSign() const{return this->_grade_sign;}
int Form::getGradeExec() const{return this->_grade_exec;}

void Form::beSigned(const Bureaucrat &ref){
	if (ref.getGrade() <= this->getGradeSign())
		this->_signed = true;
	else
	{
		std::cout << ref.getName() << " couldn't sign " << this->getName() << " : ";
		throw Form::GradeTooLowException();
	}
}

std::ostream& operator<<(std::ostream& os, const Form &ref){
	os << "Form " << ref.getName() << "\n_signed = " << ref.getSigned() << "\n_grade_sign = " << ref.getGradeSign() << "\n_grade_exec = " << ref.getGradeExec() << '\n';
	return os;
}