#include "ATarget.hpp"

ATarget::ATarget(const ATarget &other) {
    *this = other;
}

ATarget::ATarget() {}

ATarget::ATarget(std::string type): type(type) {}

ATarget::~ATarget() {}

std::string const &ATarget::getType() const {
    return this->type;
}

 void ATarget::getHitBySpell(const ASpell &src) const {
    std::cout << this->type << " has been " << src.getEffects() << "!\n";
 }