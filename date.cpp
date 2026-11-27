#include "date.h"

Date::Date(double year, int month, int day) :
year_(year), month_(month), day_(day) {
	if(isDate(month,day) != 0){
		throw std::invalid_argument("Invalid date: " + std::to_string(month) + "/" + std::to_string(day)); 
	}
}


bool Date::isDate(int mois, int jour) {
 if ((jour < 1) || (jour>31)){
	return false;
 }
 if ((mois <1) || (mois>12)){
	 return false;
 }
 if ((mois == 2) && (jour > 28)){
	 return false;
 }
 if (((mois == 4) || (mois == 6) || (mois == 9) || (mois == 11)) && (jour > 30)){
	 return false;
 }
 return true;
 }