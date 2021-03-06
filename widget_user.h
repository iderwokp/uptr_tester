#ifndef WIDGET_USER_H
#define WIDGET_USER_H
#include <memory>
#include "widget.h"


class  Widget_user {
	// Private section
	std::unique_ptr<Widget> widget;
	int* balle;
	public:
		
		int y_{};
		int x_{};
		// Public Declarations
		Widget_user() = default;
		Widget_user(int x, int y) : x_{x}, y_{y} {
			widget = std::make_unique<Widget>(x_, y_);
			balle = new int[10];
		}
		Widget_user(std::unique_ptr<Widget> wid, int x, int y): widget{std::move(wid)}, x_{x}, y_{y} {}; 
		
		Widget_user(const Widget_user& rhs): x_{rhs.x_}, y_{rhs.y_} {
			widget = std::make_unique<Widget>(x_, y_);
			std::cout << "copy: x_=" << x_ << "  y_=" << y_ << "\n";
		}
		Widget_user& operator=(const Widget_user& rhs) {
			x_ = rhs.x_;
			y_ = rhs.y_;
			//widget.reset(new Widget(x_, y_));
			widget = std::make_unique<Widget>(x_, y_);
			std::cout << " operator=: x_=" << x_ << "  y_=" << y_ << "\n";
			return *this;
		}
		~Widget_user() {
			delete[] balle;
		}
		
		void print() {
			widget->print();
		}
	void	set_ab(int x, int y) {
		    widget->a() =    x;
		    widget->b() =    y;
		}
	
};

#endif
