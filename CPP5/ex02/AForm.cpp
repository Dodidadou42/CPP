#include "AForm.hpp"

AForm::AForm(std::string name, int sgrade, int egrade) : _name(name), _signed(0), _grade_sign(sgrade), _grade_exec(egrade){
	if (sgrade > 150 || egrade > 150)
		throw AForm::GradeTooLowException();
	if (sgrade < 1 || egrade < 1)
		throw AForm::GradeTooHighException();
}
AForm::AForm(const AForm &ref) : _name(ref._name), _signed(0), _grade_sign(ref._grade_sign), _grade_exec(ref._grade_exec){}
AForm& AForm::operator=(const AForm &ref){
	if (this != &ref)
		this->_signed = ref._signed;
	return *this;
}
AForm::~AForm(){}

const std::string AForm::getName() const{return this->_name;}
bool AForm::getSigned() const{return this->_signed;}
int AForm::getGradeSign() const{return this->_grade_sign;}
int AForm::getGradeExec() const{return this->_grade_exec;}

void AForm::beSigned(const Bureaucrat &ref){
	if (ref.getGrade() <= this->getGradeSign())
		this->_signed = true;
	else
	{
		std::cout << ref.getName() << " couldn't sign " << this->getName() << " : ";
		throw AForm::GradeTooLowException();
	}
}

void AForm::checkExecute(const Bureaucrat &executor) const{
		if (!this->getSigned()){
			std::cout << executor.getName() << " couldn't execute " << this->getName() << " : ";
			throw AForm::NotSignedException();
		}
		if (executor.getGrade() > this->getGradeExec()){
			std::cout << executor.getName() << " couldn't execute " << this->getName() << " : ";
			throw AForm::GradeTooLowException();
		}
}

std::ostream& operator<<(std::ostream& os, const AForm &ref){
	os << "AForm " << ref.getName() << "\n_signed = " << ref.getSigned() << "\n_grade_sign = " << ref.getGradeSign() << "\n_grade_exec = " << ref.getGradeExec() << '\n';
	return os;
}

// FAUT PAS EXIT APRES UNE EXCEPTION
// TROUVER UN INT RANDOM