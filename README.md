# To run the program in the day_of_week directory, run make, and in the bin folder, run day_of_week.

## The program of which you can find the day of the weekfor a given date. 
## The algorithm used to determine the day of the week.
## А simple function suggested by Sakamoto, Lachman, Keith and Craver to calculate day.
## Understanding the Maths:

* 14/09/1998
* dd=14
* mm=09
* yyyy=1998 //non-leap year
##
## Step 1: Informations to be remembered.
Magic Number Month array.
For Year: {0,3,2,5,0,3,5,1,4,6,2,4};
 
 DAY array starting from 0-6: {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
 
 Century Year Value: 1600-1699 = 6:
  *    1700-1799 = 4
  *    1800-1899 = 2
  *    1900-1999 = 0
  *    2000-2099 = 6..
##
## Step 2: Calculations as per the steps

* Last 2 digits of the year:  98
* Divide the above by 4:     24
*  Take the date(dd):      14
* Take month value from array: 5 (for September month number 9)
* Take century year value:  0  ( 1998 is in the range 1900-1999 thus 0)
* Sum:        141
* Divide the Sum by 7 and get the remainder: 141 % 7 = 1
* Check the Day array starting from index 0: Day[1] = Monday

// leap year it will be the remainder-1
