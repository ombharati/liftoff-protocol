# Liftoff Protocol

A beginner C++ command-line launch simulation built while learning the fundamentals of C++.

The goal of this project is simple: take the concepts I'm currently learning and use them together in one small, interactive program instead of practicing them only through separate exercises.

## What It Does

`liftoff-protocol` lets you enter mission information and runs a simulated pre-launch sequence.

Depending on the provided values, the program will either proceed to a timed countdown and liftoff or stop the launch and report what went wrong.

```text
============================================
       ASTRAL DEEP-SPACE COMMAND SYSTEM
============================================

Mission codename: ODYSSEY
Commander initial: O
Crew count: 4
Fuel level (%): 96.5
Oxygen level (%): 98
Engine temperature (C): 68
Navigation online? (1 = YES, 0 = NO): 1
Communication online? (1 = YES, 0 = NO): 1
Launch authorization code: 7392
```

## Built With

* C++
* C++ Standard Library

The project currently uses C++11 features for its timed console output.

## Project Structure

```text
liftoff-protocol/
├── main.cpp
├── README.md
├── ARCHITECTURE.md
└── .gitignore
```

## Documentation

The implementation, program flow, validation logic, timing behavior, and design decisions are documented separately in ARCHITECTURE.md.

## Status

This project is currently being developed as part of my C++ learning process. The implementation will evolve as I learn and apply more C++ concepts.
