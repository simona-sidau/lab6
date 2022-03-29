//
// Created by user on 3/29/2022.
//
#include<queue>
#include "../Domain/Rectangle.h"

#ifndef LAB6_REPOSITORY_H
#define LAB6_REPOSITORY_H

class Rectangles {
private:
    std::queue<Rectangle> storage;
public:
    Rectangles();

    ~Rectangles();

    // Rectangle getFromPosition();
    void add(Rectangle r);

    int get_size();

    std::queue<Rectangle> get_all();


};


#endif //LAB6_REPOSITORY_H
