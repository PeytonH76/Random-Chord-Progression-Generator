#include "Key.h"
#include <unordered_map>

// Function to add chords to the key
void addChords(std::vector<Chord>& chords, const std::string& root, const std::vector<std::string>& suffixes) {
    for (const auto& suffix : suffixes) {
        chords.push_back(Chord(root + suffix));
    }
}

Key::Key(const std::string& root) : root(root) {
    generateChords();
}

void Key::generateChords() {
    // Map of basic chords for each root note.
    std::unordered_map<std::string, std::vector<std::string>> chordMap = {
            {"C", {"maj", "m", "m", "maj", "maj", "m", "dim"}},
            {"D", {"maj", "m", "m", "maj", "maj", "m", "dim"}},
            {"E", {"maj", "m", "m", "maj", "maj", "m", "dim"}},
            {"F", {"maj", "m", "m", "maj", "maj", "m", "dim"}},
            {"G", {"maj", "m", "m", "maj", "maj", "m", "dim"}},
            {"A", {"maj", "m", "m", "maj", "maj", "m", "dim"}},
            {"B", {"maj", "m", "m", "maj", "maj", "m", "dim"}}
    };

    // Map of chord extensions for each chord type.
    std::unordered_map<std::string, std::vector<std::string>> extensions = {
            {"maj", {"", "7", "9", "11", "13"}},
            {"m", {"", "7", "9", "11", "13"}},
            {"dim", {"", "7"}},
            {"aug", {"", "7"}},
            {"sus", {"2", "4", "7sus4"}}
    };

    std::vector<std::string> roots = {"C", "D", "E", "F", "G", "A", "B"};

    // Adding basic diatonic chords with their extensions.
    for (const auto& baseChord : chordMap[root]) {
        std::vector<std::string> baseExtensions = extensions[baseChord];
        addChords(chords, root, baseExtensions);
    }

    // Adding additional chords for accidentals.
    addChords(chords, "C#", {"maj", "m", "dim", "aug", "sus"});
    addChords(chords, "D#", {"maj", "m", "dim", "aug", "sus"});
    addChords(chords, "F#", {"maj", "m", "dim", "aug", "sus"});
    addChords(chords, "G#", {"maj", "m", "dim", "aug", "sus"});
    addChords(chords, "A#", {"maj", "m", "dim", "aug", "sus"});
}

std::vector<Chord> Key::getChords() const {
    return chords;
}
