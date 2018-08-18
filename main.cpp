#include "widget_user.h"


int main() {
	Widget_user wu(1,2);
	wu.print();
	Widget_user wu2{wu};
	wu2.print();
	wu2.set_ab(5, 10);

	wu2.print();
	
	
}
