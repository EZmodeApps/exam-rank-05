    #include "Warlock.hpp"
    
    Warlock::Warlock(const Warlock &other) {
        *this = other;
    }
    Warlock Warlock::operator=(const Warlock &other) {
        this->name = other.name;
        this->title = other.title;
        return *this;
    }

    Warlock::Warlock() {}
    Warlock::Warlock(std::string name, std::string title): name(name), title(title) {
        std::cout << this->name << ": This looks like another boring day.\n";
        SpellBook();
    }
    Warlock::~Warlock() {
        std::cout << this->name << ": My job here is done!\n";
    }

    std::string const &Warlock::getName() const {
        return this->name;
    }
    std::string const &Warlock::getTitle() const {
        return this->title;
    }

    void Warlock::setTitle (std::string title) {
        this->title = title;
    }

    void Warlock::introduce() const {
        std::cout << this->name << ": I am " << this->name << ", " << this->title << "!\n";
    }

    void Warlock::learnSpell(ASpell *spell) {
        spells.learnSpell(spell);
    }
    void Warlock::forgetSpell(std::string spellName) {
        spells.forgetSpell(spellName);
    }
    void Warlock::launchSpell(std::string spellName, const ATarget &target) {
        ASpell *spell = this->spells.createSpell(spellName);
        if (spell) 
            spell->launch(target);
    }