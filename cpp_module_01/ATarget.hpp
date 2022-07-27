#pragma once

#include <iostream>
#include <string>
#include "ASpell.hpp"

class ASpell;

class ATarget {
    private:

    ATarget(const ATarget &other);

    std::string type;

    public:
    ATarget();
    ATarget(std::string type);
    virtual ~ATarget();

    std::string const &getType() const;

    virtual ATarget *clone() const = 0;

    void getHitBySpell(const ASpell &src) const;
};