#pragma once

#include <iostream>
#include <string>

class Warlock {
    private:
    std::string name;
    std::string title;

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
};