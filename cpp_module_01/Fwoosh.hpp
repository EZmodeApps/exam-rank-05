#pragma once

#include <string>
#include <iostream>
#include "ASpell.hpp"

class Fwoosh : public ASpell {
    public:
    Fwoosh();
    ~Fwoosh();

    virtual ASpell *clone() const;
};