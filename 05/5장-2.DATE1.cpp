// 5¿Â-2.DATE1.CPP   5.3 class
#include <iostream>
#include "5¿Â-1.DATE1.h"

void main(){
    Date newYearsDay (1,1,2017);

    newYearsDay.PrintDate ();
    newYearsDay.IncreaseDate ();                                 
    newYearsDay.PrintDate ();	
    newYearsDay.PrintLeap ();

    Date d (5,15,2016);

    d.IncreaseDate ();
    d.PrintDate ();
    d.PrintLeap ();

    for (Date dd(2,25,2017); dd.Day()<3||dd.Day()>10; dd.IncreaseDate())
		dd.PrintDate ();
	system("pause");
}