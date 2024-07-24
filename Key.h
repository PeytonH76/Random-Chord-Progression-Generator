#ifndef KEY_H
#define KEY_H

#include <vector>
#include <string>
#include "Chord.h"

class Key {
public:
    Key(const std::string& root);
    std::vector<Chord> getChords() const;

private:
    std::string root;
    std::vector<Chord> chords; // The list of chords in the key.
    void generateChords();
};

#endif // KEY_H
