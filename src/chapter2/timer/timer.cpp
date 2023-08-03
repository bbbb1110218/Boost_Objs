#include <iostream>
#include <boost/timer.hpp>



/*

函数原型
class timer
{
 public:
         timer() { _start_time = std::clock(); }
  void restart() { _start_time = std::clock(); }
  double elapsed() const
    { return double(std::clock() - _start_time) / ((clock_t)1000000); }
  double elapsed_max() const
  {
    return (double((std::numeric_limits<std::clock_t>::max)())
       - double(_start_time)) / double(((clock_t)1000000));
  }
  double elapsed_min() const
   { return double(1)/double(((clock_t)1000000)); }
 private:
  std::clock_t _start_time;
};

*/

int main(){

	boost::timer t;
	
	std::cout << "过去的最小: " << t.elapsed_max() << std::endl;
	std::cout << "过去的最大: " << t.elapsed_min() << std::endl;
	std::cout << "已经过去了 " << t.elapsed() << "秒 "<< std::endl;
	return 0;

	
}
