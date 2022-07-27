#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock {
    private:
    std::string name;
    std::string title;
    SpellBook spells;

    Warlock(const Warlock &other);
    Warlock operator=(const Warlock &other);

    public:
    Warlock();
    Warlock(std::string name, std::string title);
    ~Warlock();

    std::string const &getName() const;
    std::string const &getTitle() const;

    void setTitle (std::string title);
    void introduce() const;

    void learnSpell(ASpell *spell);
    void forgetSpell(std::string spellName);
    void launchSpell(std::string spellName, const ATarget &target);

};