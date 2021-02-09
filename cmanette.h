#ifndef CMANETTE_H
#define CMANETTE_H

class CManette
{
public:
    CManette();
    virtual bool checkJoy(int) const = 0;
    virtual bool keyPressed(int) const = 0;

};

#endif // CMANETTE_H
