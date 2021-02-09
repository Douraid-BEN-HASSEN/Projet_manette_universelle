#include "cmanette_freebox.h"
#include <iostream>

CManette_Freebox::CManette_Freebox()
{

}

bool CManette_Freebox::checkJoy(int) const
{

}

bool CManette_Freebox::keyPressed(int J_KEY) const
{
    switch (J_KEY) {
    case J_UP:
        std::cout << "J_UP \n";
        return false;
        break;
    case J_DOWN:
        std::cout << "J_DOWN \n";
        return false;
        break;
    default:
        return false;
        break;
    }
}
