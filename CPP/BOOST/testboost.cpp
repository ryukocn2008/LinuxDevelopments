#include <iostream>
#include <boost/format.hpp>

using namespace std;

int main() {
	std::cout << boost::format("%1% %2% \n") % "Hellow" % "World";
	return 0;
}
