#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "ASpell.hpp"


class SpellBook {
    private:
    SpellBook(const SpellBook &other);
    SpellBook operator=(const SpellBook &other);

    std::vector<ASpell*> spells;

    public:
    SpellBook();
    SpellBook(std::string name, std::string title);
    ~SpellBook();

    void learnSpell(ASpell *spell);
    void forgetSpell(std::string const &spellName);
    ASpell *createSpell(std::string const &spellName);

};