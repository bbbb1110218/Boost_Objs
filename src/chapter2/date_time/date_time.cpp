#include<boost/date_time/gregorian/gregorian.hpp>
#include <iostream>

#include <cassert>

#define print(x) std::cout << "line(" << __LINE__  << "):" << x << std::endl;

using namespace boost::gregorian;
using  std::cout;
using  std::endl;



int main(){
    {
        date d1;               // 无效日期
        date d2(2010, 1, 1);   // constructs by number
        date d3(2000, Jan, 1); // constructs By marco
        date d4(d2);           // support by copy constructs

        // 断言
        assert(d1 == date(not_a_date_time)); // 比较一个临时对象
        assert(d2 == d4);
        assert(d3 < d2 );
    }

    {
        date d1 =from_string("1999-12-31");
        date d2(from_string("2015/1/1"));
        date d3 =from_undelimited_string("20111118");


    }

    {

        /*
            enum special_values {not_a_date_time,
                         neg_infin, pos_infin,
                         min_date_time,  max_date_time,
                         not_special, NumSpecialValues};

        */
        date d1(neg_infin);
        date d3(pos_infin);
        date d2(not_a_date_time);
        date d33(max_date_time);
        date d4(min_date_time);
        print(d1);

        
    }

   



    return 0;

}
