#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"


class TargetGenerator {
    private:
    TargetGenerator(const TargetGenerator &other);
    TargetGenerator operator=(const TargetGenerator &other);

    public:
    TargetGenerator();
    ~TargetGenerator();

    void learnTargetType(ATarget *spell);
    void forgetTargetType(std::string const &spellName);
    ATarget *createTarget(std::string const &spellName);

    std::vector<ATarget*> spells;
};