#pragma once 

#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;

class ASpell {
    private:

    ASpell(ASpell const &other);
    // ASpell operator=(ASpell const &other);

    std::string name;
    std::string effects;

    public:
    ASpell();
    virtual ~ASpell();
    ASpell(std::string name, std::string effects);

    std::string const &getName() const;
    std::string const &getEffects() const;

    virtual ASpell *clone() const = 0;

    void launch(const ATarget &src) const;
};