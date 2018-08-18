#ifndef WIDGET_H
#define WIDGET_H
#include <iostream>
class Widget {
	// Private section
	int a_{0};
	int b_{0};
	
	public:
		// Public Declarations
		Widget(int a, int b) : a_{a}, b_{b} {}
		void print() {
			std::cout << "a=" << a_ << "\tb=" << b_ << "\n";
		}
	
};

#endif

