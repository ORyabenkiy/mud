// Copyright (c) 2016 bodrich
// Part of Bylins http://www.bylins.su


#include <string>
#include <vector>
#include "interpreter.h"

namespace Bonus
{
	ACMD(do_bonus);
	ACMD(do_bonus_info);
	bool is_bonus(int type);
	void timer_bonus();
	void bonus_log_add(std::string name);
	int get_mult_bonus();
	void bonus_log_load();
	void show_log(CHAR_DATA *ch);
}