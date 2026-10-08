#pragma once
#include "Cell.hpp"

class Liste{
    protected:
    TrajetSimple * head;
    public:
    Liste(TrajetSimple* h): head(h){};
};