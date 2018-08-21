#ifndef WIDGET_H
#define WIDGET_H
#include <iostream>
class Widget {
	// Private section
	int a_{0};
	int b_{0};
	
	public:
		// Public Declarations
		Widget() = default;
		Widget(int a, int b) : a_{a}, b_{b} {std::cout << "Widget()\n";}
		void print() {
			std::cout << "a=" << a_ << "\tb=" << b_ << "\n";
		}
		int& a() { return a_;}
		int& b() { return b_;}
	
};

#endif
