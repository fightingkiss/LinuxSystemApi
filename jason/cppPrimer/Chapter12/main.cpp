#include <vector>
#include <memory>
#include <iostream>

using namespace std;

int main()
{
	shared_ptr<int> p3 = make_shared<int>(42);
	shared_ptr<string> p4 = make_shared<string> (10, '9');
	shared_ptr<int> p5 = make_shared<int>();

	auto p6 = make_shared<string>();
	
	auto p = make_shared<int>(42);
	auto q(p);
	
	cout << "---------------"<<endl;



	return 0;
}

