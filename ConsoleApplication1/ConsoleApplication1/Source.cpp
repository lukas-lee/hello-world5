#include <iostream>

namespace A 
{
	int a;
	int b;
	void print(){
	printf("%d %d", a, b);
	     }
}
namespace B
{
	int a;
	int b;
}

using namespace A;

void main()
{
	
a=3;
b=2;
print();


}