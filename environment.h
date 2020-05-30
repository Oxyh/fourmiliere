#ifndef FOURMILIERE_ENVIRONMENT_H
#define FOURMILIERE_ENVIRONMENT_H

#include "sol.h"

class Environment {
private:
    int height;
    int width;
    Sol **cases;
public:
    Environment(int height=100, int width=50);

    int getHeight() const;

    void setHeight(int height);

    int getWidth() const;

    void setWidth(int width);

    virtual ~Environment();
};
#endif //FOURMILIERE_ENVIRONMENT_H
