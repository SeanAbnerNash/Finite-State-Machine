//@Author Sean Nash De Andrade
//@Login C00217019
//Time Taken:
//Known Issues:
//Brief:
#include "Animation.h"
#include "ClimbState.h"
#include <iostream>

int main() {
	Animation fsm; int i = 0;


	//fsm.setCurrent(something);
	fsm.idle();
	fsm.jumping();
	/*while (true) {
		if (i == 0) {
			fsm.jumping();
			std::this_thread::sleep_for(std::chrono::milliseconds dura(1000));
			i = 1;
		}
		else {
			fsm.climbing();
			std::this_thread::sleep_for(std::chrono::milliseconds dura(1000));
			i = 0;
		}
	}*/
	system("PAUSE");
}
