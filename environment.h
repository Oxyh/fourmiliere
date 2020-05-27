//
// Created by fabien on 27/05/2020.
//

#ifndef FOURMILIERE_ENVIRONMENT_H
#define FOURMILIERE_ENVIRONMENT_H


class Environment {
private:
    int height;
    int width;
public:
    Environment(int height, int width);

    Environment();

    int getHeight() const;

    void setHeight(int height);

    int getWidth() const;

    void setWidth(int width);

    virtual ~Environment();
};


#endif //FOURMILIERE_ENVIRONMENT_H
