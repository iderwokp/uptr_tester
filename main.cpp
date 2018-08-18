#include "widget_user.h"


int main() {
	Widget_user wu(1,2);
	wu.print();
	Widget_user wu2{wu};
	wu2.print();
	wu2.x_ = 5;
	wu2.y_ = 10;
	wu2.print();
	
	
}


