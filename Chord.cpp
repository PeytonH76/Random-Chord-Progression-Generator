#include "Chord.h"

// Constructor implementation: initializes the chord with the given name.
Chord::Chord(const std::string& name) : name(name) {}

// Returns the name of the chord
std::string Chord::getName() const {
    return name;
}
