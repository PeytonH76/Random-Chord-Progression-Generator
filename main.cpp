#include <iostream>
#include "Chord.h"
#include "Key.h"
#include "ChordProgression.h"

int main() {
    std::string root;
    int progressionLength;

    std::cout << "Enter the root note (C, D, E, F, G, A, B): ";
    std::cin >> root;

    std::cout << "Enter the length of the chord progression: ";
    std::cin >> progressionLength;

    Key key(root);
    ChordProgression progression(key, progressionLength);
    std::vector<std::string> chords = progression.generateProgression();

    std::cout << "Generated chord progression: ";
    for (const auto& chord : chords) {
        std::cout << chord << " ";
    }
    std::cout << std::endl;

    return 0;
}
