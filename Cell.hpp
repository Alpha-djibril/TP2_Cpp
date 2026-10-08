#pragma once
#include "TrajetSimple.hpp"


class Cell{
    protected:
    TrajetSimple data;
    TrajetSimple * next;
    public:
    Cell();
    Cell(TrajetSimple ts, TrajetSimple* ptr): data(ts), next(ptr){};
};