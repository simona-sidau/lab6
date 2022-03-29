#include "Repository.h"


Rectangles::Rectangles() = default;

Rectangles::~Rectangles() = default;

void Rectangles::add(Rectangle r) {
    if (r.validation())
        this->storage.push(r);
}

std::queue<Rectangle> Rectangles::get_all() {
    return this->storage;
}

int Rectangles::get_size() {
    return (int) this->storage.size();
}
