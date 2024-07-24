#include "ChordProgression.h"
#include <cstdlib>
#include <ctime>

ChordProgression::ChordProgression(const Key& key, int length) : key(key), length(length) {
    srand(static_cast<unsigned int>(time(0)));
}

// Method to generate the chord progression.
std::vector<std::string> ChordProgression::generateProgression() {
    std::vector<std::string> progression;
    std::vector<Chord> chords = key.getChords();

    // Generate a random chord progression with the requested length
    for (int i = 0; i < length; ++i) {
        int randomIndex = rand() % chords.size(); // Generate a random index.
        progression.push_back(chords[randomIndex].getName()); // Add the randomly selected chord to the progression.
    }
    return progression;
}
