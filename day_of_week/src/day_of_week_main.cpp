#include "day_of_week_h_f.hpp"
int main() {
int day;
int month;
int year;
cout<<"Enter the Date for which day of the week need to be find (DD/MM/YYYY)."<<endl;
cout<<"**********************************************************************"<<endl;
cout<<"Day: ";
cin>>day;
cout<<"Month: ";
cin>>month;
cout<<"Year: ";
cin>>year;
cout<<"***********************"<<endl;
int result = dayofweek(day, month, year);

switch (result) {
case 0:
     cout<< "it's Sunday"<<endl;
     break;
case 1:
     cout<< "it's Monday"<<endl;
     break;
case 2:
     cout<< "it's Tuesday"<<endl;
     break;
case 3:
     cout<< "it's Wednesdey"<<endl;
     break;
case 4:
     cout<< "it's Thursdey"<<endl;
     break;
case 5:
     cout<< "it's Friday"<<endl;
     break;
case 6:
	cout<< "it's Saturday"<<endl;
     break;
default:
     cout<< "error";
     break;

	}
return 0;          
	}
               
