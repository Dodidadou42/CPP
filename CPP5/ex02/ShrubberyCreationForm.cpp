#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target){}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ref) : AForm(ref){*this = ref;}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &ref){
	if (this != &ref)
		this->_target = ref._target;
	return *this;
}
ShrubberyCreationForm::~ShrubberyCreationForm(){}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const{
	this->checkExecute(executor);
	std::ofstream os(this->_target + "_shrubbery");
	os << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
	os << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
	os << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
	os << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
	os << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@/@#(@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
	os << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%/@/&@@@/***//&/@@%///%//@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
	os << "@@@@@@@@@@@@@@@@@@@@@%@/((#@@/***////*******////*****///(/////////@@@@@@@@@@@@@@@" << std::endl;
	os << "@@@@@@@@@@@@@@@@@@@@///**/////***********************************//&@@@@@@@@@@@@@" << std::endl;
	os << "@@@@@@@@@@@@@@@@/(//(************************************************/&//@@@@@@@@" << std::endl;
	os << "@@@@@@@@@@@@@@@/////****************************/(***********@*********//(&@@@@@@" << std::endl;
	os << "@@@@@@@@@@@@@@@@@///****************************//@@*********//********@@@@@@@@@@" << std::endl;
	os << "@@@@@@@@@@@@@@###%&@/******************************////////////********//*//@@@@@" << std::endl;
	os << "@@@@@@@@@@##(((##****************************************///***************//@@@@" << std::endl;
	os << "@@@@@@@@@##(((&%#*********************,&/********************************///@@@@" << std::endl;
	os << "@@@@@@@@@@@#((#&#*************(*******,.%//****************************/@@@@@@@@" << std::endl;
	os << "@@@@@@##(###%***/**********%.*********.///*****************************//@@@@@@" << std::endl;
	os << "@@@@@@###(((#@&*************//@,@.*,@@@////*****************************//@@@@@@" << std::endl;
	os << "@@@@@@@%##((#@*(#************/////////********************************(//@(@@@@@" << std::endl;
	os << "@@@@@@@@@@@#(((##&&*********************************************,.#/**/#@@@@@@@@" << std::endl;
	os << "@@@@@@@@@@&##((#//(/**************************************/.*******.&/***@@@@@@@@" << std::endl;
	os << "@@@@@@@@##(((((##&/////*******************,//%*************/@.@/ @//*****&@@@@@@@@" << std::endl;
	os << "@@@@@@@@@#@##%#((##%@@#***********/(*****&((@%///************////****/@@@@@@@@@@@" << std::endl;
	os << "@@@@@@@@@@@@@%#((##@(/******@******//%@(%@((@//@///*******************@@@@@@@@@@@" << std::endl;
	os << "@@@@@@@@@@@@@#(((##%@///*/#,%*&.@@(////@/%(##//(@%@*,///****************&@@@@@@@@" << std::endl;
	os << "@@@@@@@@@@@@@@@@((&@%@(@//(((@%%@/////@%(@///(@##(#(*////***********((@@@@@@@@@@" << std::endl;
	os << "@@@@@@@@@@@@#((((###@(((((((@%&#////@%(@//((@%#@%@%%.,/////&/&//@@@@@@@@@@@@@@" << std::endl;
	os << "@@@@@@@@@@@@@##((((####%@(&(@%&(((/@*%(@(%(&&%#%&(&/////(@@@@@@@@@@@@@@@@@@@@@" << std::endl;
	os << "@@@@@@@@@@@@@@@@@##&@&%#####@(%@@@@@#%%&@@@@@%%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
	os << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@(%@@@@@%%(%@@@@#%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
	os << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%(%@@@@@/((%%%##%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
	os << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&(%%***((((((%%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
	os << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@##**%((((%(@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
	os << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#(%%(((%*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
	os << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%(#((((((&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
	os << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%(((((((*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
	os << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@/%#((((((&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
	os << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&(((((((((%%#@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
	os << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@/%#(((((((((((%%*@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
	os << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@**%%((((((%(@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
	os << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%%%((((((%*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
	os << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&(((((((((%%#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
	os << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%(#(((((((((((%%(*@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
	os << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%*%%%((((((((##((((%%*@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
	os << "@@@@@@@@@@@@@@@@@@@****/(@**/@(@*#*&@@*@*@*(@**,/%%%&@@@*,*@@*@@@@@@@@@@@@@@@@@" << std::endl;
	os << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
	os << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
	os << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
	os << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
	os.close();
}