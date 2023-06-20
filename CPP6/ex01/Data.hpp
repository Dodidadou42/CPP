#ifndef DATA_HPP
#define DATA_HPP

class Data
{
	private :
		int n;
	public :
		Data();
		Data(const Data &ref);
		Data& operator=(const Data &ref);
		~Data();
};

#endif