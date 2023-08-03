#include <iostream>
#include <boost/progress.hpp>



/**
 * progress_timer  构造函数 包含一个输出流，默认为标准输出流
 * 离开作用域后，打印从对象到构造 到离开作用域一共消耗的时间
 * 
*/
int main()
{
	boost::progress_timer t(std::cout);
	for (int i = 0; i < 100000000; i++)  //need waste some time
		;
	std::cout << "t 在调用析构函数的时候，会打印时间:";
	{ //new scope
		boost::progress_timer t(std::cout);
		for (int i = 0; i < 100000000; i++)
			;
		std::cout << "t 在调用析构函数的时候，会打印时间:";
	}

	return 0;
}
