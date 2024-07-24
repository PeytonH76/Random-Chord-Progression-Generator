cmake_minimum_required(VERSION 3.28)
project(ChordProgressionGen)

set(CMAKE_CXX_STANDARD 17)

add_executable(ChordProgressionGen main.cpp
        Chord.cpp
        Chord.h
        Key.cpp
        Key.h
        ChordProgression.cpp
        ChordProgression.h)
