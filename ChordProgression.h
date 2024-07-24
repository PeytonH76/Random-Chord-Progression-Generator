#ifndef CHORDPROGRESSION_H
#define CHORDPROGRESSION_H

#include <vector>
#include <string>
#include "Chord.h"
#include "Key.h"

class ChordProgression {
public:
    ChordProgression(const Key& key, int length);
    std::vector<std::string> generateProgression();

private:
    Key key; // The key of the chord progression.
    int length; // The length of the chord progression.
};

#endif // CHORDPROGRESSION_H
