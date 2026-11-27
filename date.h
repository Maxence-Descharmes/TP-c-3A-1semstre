#include <iostream>
class Date{
	public:
		Date(int year,int month,int day);
		double getYear();
		int getMonth();
		int getDay();
	private:
		double year_;
		int month_;
		int day_;
		bool isDate(month,day);
};