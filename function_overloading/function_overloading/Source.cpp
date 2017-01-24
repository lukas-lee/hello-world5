#include <iostream>

using namespace std;

void function(int a){
	cout << "sky is blue" << endl;
}

void function(int a, int b) {
	cout << "i love this sky" << endl;
}

void main() {


	function(4);
	function(4, 2);

}
