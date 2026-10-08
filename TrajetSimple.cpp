#include "TrajetSimple.hpp"

TrajetSimple::TrajetSimple(Transport t, string dep, string arr): Tr(t){
        this->Depart = dep;
        this->Destination = arr;
    };