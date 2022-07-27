    #include "TargetGenerator.hpp"
    
    // TargetGenerator::TargetGenerator(const TargetGenerator &other) {
    //     *this = other;
    // }
    // TargetGenerator TargetGenerator::operator=(const TargetGenerator &other) {
    //     *this = other;
    //     return *this;
    // }

    TargetGenerator::TargetGenerator() {}
   
    TargetGenerator::~TargetGenerator() {
    std::vector<ATarget*>::iterator ite = this->spells.end();
    for (std::vector<ATarget*>::iterator it = this->spells.begin(); it != ite; it++)
            delete *it;
        this->spells.clear();
    }

    void TargetGenerator::learnTargetType(ATarget *spell) {
        if (spell) {
            std::vector<ATarget*>::iterator ite = this->spells.end();
            for (std::vector<ATarget*>::iterator it = this->spells.begin(); it != ite; it++)
                if ((*it)->getType() == spell->getType())
                    return ;
            this->spells.push_back(spell->clone());
        }
    }
    void TargetGenerator::forgetTargetType(std::string const &spellName) {
        std::vector<ATarget*>::iterator ite = this->spells.end();
        for (std::vector<ATarget*>::iterator it = this->spells.begin(); it != ite; it++) {
            if ((*it)->getType() == spellName) {
                delete *it;
                it = this->spells.erase(it);
            }
        }
    }
    ATarget *TargetGenerator::createTarget(std::string const &spellName) {
        std::vector<ATarget*>::iterator ite = this->spells.end();
        for (std::vector<ATarget*>::iterator it = this->spells.begin(); it != ite; it++) {
            if ((*it)->getType() == spellName) {
                return *it;
            }
        }
        return nullptr;
    }