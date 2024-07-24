#ifndef CHORD_H
#define CHORD_H

#include <string>

class Chord {
public:
    Chord(const std::string& name); // Constructor
    std::string getName() const; // Gets name of the chord

private:
    std::string name; // The name of the chord
};

#endif // CHORD_H
