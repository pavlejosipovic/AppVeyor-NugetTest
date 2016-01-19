#include <iostream>
#include <boost\shared_ptr.hpp>

using namespace std;

void main()
{
    boost::shared_ptr<int> pointer(new int(5));

    cout << "Hello World" << endl;
    cout << *pointer << endl;
    cout << "Sale je kralj!" << endl;
}