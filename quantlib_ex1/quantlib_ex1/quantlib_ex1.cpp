#include <ql/quantlib.hpp>
#include <iostream>

int main()
{
        QuantLib::Calendar myCal=QuantLib::UnitedKingdom();
        QuantLib::Date newYearsEve(31,QuantLib::Dec,2008);

        std::cout << "Name: "                       << myCal.name()<< std::endl;
        std::cout << "New Year is Holiday: "        << myCal.isHoliday(newYearsEve)<< std::endl;
        std::cout << "New Year is Business Day: "   << myCal.isBusinessDay(newYearsEve)<< std::endl;

        std::cout << "--------------- Date Counter --------------------" << std::endl;

        QuantLib::Date date1(28,QuantLib::Dec,2008);
        QuantLib::Date date2(04,QuantLib::Jan,2009);

        std::cout << "First Date: "            << date1 << std::endl;
        std::cout << "Second Date: "           << date2 << std::endl;
        std::cout << "Business Days Betweeen: "<< myCal.businessDaysBetween(date1,date2) << std::endl;
        std::cout << "End of Month 1. Date: "  << myCal.endOfMonth(date1) << std::endl;
        std::cout << "End of Month 2. Date: "  << myCal.endOfMonth(date2) << std::endl;

        double tmp;
        std::cin >> tmp;

        return 0;
}
