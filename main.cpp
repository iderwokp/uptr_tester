#include <vector>
#include "widget_user.h"


int main() {
	
	std::vector<Widget> wigvec (3);
	wigvec.emplace_back(1, 12);
	wigvec.emplace_back(111, 112);
	wigvec.emplace_back(141, 142);
	
	std::vector<Widget_user> wigus (3);
	wigus.emplace_back(1, 12);
	wigus.emplace_back(111, 112);
	wigus.emplace_back(141, 142);
	
	Widget_user wu(1,2);
	wu.print();
	Widget_user wu2{wu};
	wu2.print();
	wu2.set_ab(5, 10);

	wu2.print();
	
	
}
