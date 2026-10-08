#pragma once
#include "Transport.hpp"
#include "Trajet.hpp"

class TrajetSimple : protected Trajet{
    protected:
    Transport Tr;
    public:
    TrajetSimple(Transport t, string dep, string arr);
};