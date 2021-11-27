#ifndef _DESKCOMP_H_
#define _DESKCOMP_H_
#include<string>

class DeskComp
{
	public:
		int size_x();
		int size_y();
		std::string display_str();
		int state();
		void command();
}

#endif
