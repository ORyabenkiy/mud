#ifndef BYLINS_MERCENARY_H
#define BYLINS_MERCENARY_H

#include "char.hpp"
#include <map>

int mercenary(CHAR_DATA *ch, void* /*me*/, int cmd, char* argument);

struct MERCDATA
{
    int CharmedCount; // кол-во раз почармлено
    int spentGold; // если купец - сколько потрачено кун
    int deathCount; // кол-во раз, когда чармис сдох
    int currentDeathCount; // кол-во раз, когда чармис на текущем реморте
};

#endif //BYLINS_MERCENARY_H
