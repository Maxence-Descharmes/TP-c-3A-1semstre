class Date{
	public:
		Date(int year,int month,int day);
		int getYear();
		int getMonth();
		int getDay();
	private:
		int year_;
		int month_;
		int day_;
		bool isDate(month_,day_);
		
};