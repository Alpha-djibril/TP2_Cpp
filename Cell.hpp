#pragma once
#include "TrajetSimple.hpp"


class Cell{
    public:
    TrajetSimple data;
    Cell * next;
    Cell();
    Cell(TrajetSimple ts, Cell* ptr): data(ts), next(ptr){};
};