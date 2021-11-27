#ifndef _MODEL_H_
#define _MODEL_H_
#include "DeskComp.hpp"

class Model
{
	public:
		void update();
		DeskComp* elements();
		void command(int);
};

#endif
