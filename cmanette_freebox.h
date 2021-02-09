#ifndef CMANETTE_FREEBOX_H
#define CMANETTE_FREEBOX_H

#include "cmanette.h"

enum J_KEY{
    J_UP,
    J_DOWN,
    J_RIGHT,
    J_LEFT
};

class CManette_Freebox : public CManette
{
public:
    CManette_Freebox();

    bool checkJoy(int) const;
    bool keyPressed(int) const;
};

#endif // CMANETTE_FREEBOX_H
