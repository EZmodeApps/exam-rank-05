#include "ASpell.hpp"

ASpell::ASpell(ASpell const &other) {
    *this = other;
}
    // ASpell ASpell::operator=(const ASpell &other) {
    //     this->name = other.name;
    //     this->effects = other.effects;
    //     return *this;
    // }

    ASpell::ASpell() {}
ASpell::~ASpell() {}
    ASpell::ASpell(std::string name, std::string effects) : name(name), effects(effects) {}

    std::string const &ASpell::getName() const {
        return this->name;
    }
    std::string const &ASpell::getEffects() const {
        return this->effects;
    }

    void ASpell::launch(const ATarget &src) const {
        src.getHitBySpell(*this);
    }