#include "PmergeMe.hpp"

std::deque<int>	 PmergeMe::_d;
std::vector<int> PmergeMe::_v;
PmergeMe::PmergeMe(const PmergeMe &ref){*this=ref;}
PmergeMe& PmergeMe::operator=(const PmergeMe &ref){(void)ref;return *this;}
PmergeMe::~PmergeMe(){}

std::vector<int> PmergeMe::getV(){
	return PmergeMe::_v;
}
void PmergeMe::fillContainers(int argc, char **argv){
	std::string tmp;
	if (argc == 2){
		std::string s = argv[1];
		for (unsigned int i = 0; i < s.size(); i++){
			tmp = "";
			while (s[i] && s[i] == ' ')
				i++;
			while (s[i] && s[i] != ' ')
				tmp += s[i++];
			PmergeMe::_v.push_back(std::stoi(tmp));
			PmergeMe::_d.push_back(std::stoi(tmp));
		}
	} else {
		int i = 0;
		while (argv[++i]){
			PmergeMe::_v.push_back(std::atoi(argv[i]));
			PmergeMe::_d.push_back(std::atoi(argv[i]));
		}
	}
}
void PmergeMe::printContainers(std::string str){
	
	if (str == "vector")
		for (std::vector<int>::iterator itv = PmergeMe::_v.begin(); itv != PmergeMe::_v.end(); itv++)
			std::cout << *itv << " ";
	else if (str == "deque")
		for (std::deque<int>::iterator itl = PmergeMe::_d.begin(); itl != PmergeMe::_d.end(); itl++)
			std::cout << *itl << " ";
	std::cout << std::endl;
}


void PmergeMe::vectorSortPairsContent(std::vector<std::pair<int, int> > &pairs){
	int swap;
	for (unsigned int i = 0; i < pairs.size(); i++){
		if (pairs[i].first > pairs[i].second){
			swap = pairs[i].first;
			pairs[i].first = pairs[i].second;
			pairs[i].second = swap;
		}
	}
}
void PmergeMe::vectorSortPairs(std::vector<std::pair<int, int> > &v){
	std::pair<int, int> swap;
	int modified = 0;
		for (unsigned int i = 0; i < v.size() - 1; i++){
			if (v[i].second > v[i + 1].second){
				swap = v[i];
				v[i] = v[i + 1];
				v[i + 1] = swap;
				modified = 1;
			}
	}
	if (modified)
		vectorSortPairs(v);
}
void PmergeMe::vectorSortInsert(std::vector<std::pair<int, int> > &p, std::pair<bool, int> &unp){
	std::vector<int> v;
	for (unsigned int i = 0; i < p.size(); i++)
		v.push_back(p[i].second);
	v.insert(v.begin(), p[0].first);
	if (unp.first == true)
		p.push_back(std::make_pair(unp.second, 0));
	for (unsigned int i = 1; i < p.size(); i++){
		for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++){
			if (p[i].first < *it){
				v.insert(it, p[i].first);
				break;
			}
		}
	}
	PmergeMe::_v.clear();
	PmergeMe::_v = v;
}
double PmergeMe::vectorSort(){
	std::clock_t start = std::clock();
	std::vector<std::pair<int, int> > pairs;
	std::pair<bool, int> unpaired;
	unpaired.first = false;
	if (PmergeMe::_v.size() <= 1){
		std::cout << "Error: only one element\n";
		exit(0);
	}
	if (PmergeMe::_v.size() % 2 == 1){
		unpaired = std::make_pair(true, PmergeMe::_v[PmergeMe::_v.size() - 1]);
		PmergeMe::_v.pop_back();
	}
	for (std::vector<int>::iterator it = PmergeMe::_v.begin(); it != PmergeMe::_v.end(); it += 2){
		pairs.push_back(std::make_pair(*it, *(it + 1)));
	}
	PmergeMe::vectorSortPairsContent(pairs);
	PmergeMe::vectorSortPairs(pairs);
	PmergeMe::vectorSortInsert(pairs, unpaired);
	std::clock_t end = std::clock();
	double duration = static_cast<double>(end - start) / 1000;
	return duration;
}


void PmergeMe::dequeSortPairsContent(std::deque<std::pair<int, int> > &pairs){
	int swap;
	for (unsigned int i = 0; i < pairs.size(); i++){
		if (pairs[i].first > pairs[i].second){
			swap = pairs[i].first;
			pairs[i].first = pairs[i].second;
			pairs[i].second = swap;
		}
	}
}
void PmergeMe::dequeSortPairs(std::deque<std::pair<int, int> > &v){
	std::pair<int, int> swap;
	int modified = 0;
		for (unsigned int i = 0; i < v.size() - 1; i++){
			if (v[i].second > v[i + 1].second){
				swap = v[i];
				v[i] = v[i + 1];
				v[i + 1] = swap;
				modified = 1;
			}
	}
	if (modified)
		dequeSortPairs(v);
}
void PmergeMe::dequeSortInsert(std::deque<std::pair<int, int> > &p, std::pair<bool, int> &unp){
	std::deque<int> v;
	for (unsigned int i = 0; i < p.size(); i++)
		v.push_back(p[i].second);
	v.insert(v.begin(), p[0].first);
	if (unp.first == true)
		p.push_back(std::make_pair(unp.second, 0));
	for (unsigned int i = 1; i < p.size(); i++){
		for (std::deque<int>::iterator it = v.begin(); it != v.end(); it++){
			if (p[i].first < *it){
				v.insert(it, p[i].first);
				break;
			}
		}
	}
	PmergeMe::_d.clear();
	PmergeMe::_d = v;
}
double PmergeMe::dequeSort(){
	std::clock_t start = std::clock();
	std::deque<std::pair<int, int> > pairs;
	std::pair<bool, int> unpaired;
	unpaired.first = false;
	if (PmergeMe::_d.size() <= 1){
		std::cout << "Error: only one element\n";
		exit(0);
	}
	if (PmergeMe::_d.size() % 2 == 1){
		unpaired = std::make_pair(true, PmergeMe::_d[PmergeMe::_d.size() - 1]);
		PmergeMe::_d.pop_back();
	}
	for (std::deque<int>::iterator it = PmergeMe::_d.begin(); it != PmergeMe::_d.end(); it += 2){
		pairs.push_back(std::make_pair(*it, *(it + 1)));
	}
	PmergeMe::dequeSortPairsContent(pairs);
	PmergeMe::dequeSortPairs(pairs);
	PmergeMe::dequeSortInsert(pairs, unpaired);
	std::clock_t end = std::clock();
	double duration = static_cast<double>(end - start) / 1000;
	return duration;
}