# LeetCode Solutions — C++

> Systematic problem-solving in C++. Every solution documents the reasoning, not just the code.

**Author:** Bushra Khandoker  
**Focus:** Data structures, algorithms, and mathematical problem solving  
**Language:** C++17  
**Status:** Actively maintained

---

## Why this repository exists

This is not a solution dump. It is a structured record of how I think through problems — built for competitive programming, deep understanding of fundamentals, and long-term research into algorithmic design.

Each solution includes time and space complexity analysis, the core insight behind the approach, and notes on alternative methods where relevant. The goal is to make this repository useful for review, not just reference.

---

## Repository structure

```
├── arrays/          # Array manipulation, prefix sums, in-place techniques
├── math/            # Number theory, modular arithmetic, combinatorics
├── strings/         # (in progress)
├── dynamic-programming/   # (in progress)
├── graphs/          # (in progress)
├── trees/           # (in progress)
├── two-pointers/    # (in progress)
├── sliding-window/  # (in progress)
└── notes/           # Obsidian vault — pattern notes, concept links
```

---

## Solution format

Every `.cpp` file follows this structure:

```cpp
/*
    Problem : Two Sum (#1)
    Difficulty: Easy
    Topic    : Arrays | Pattern: Hash Map
    Time     : O(n)   | Space: O(n)
 
    Insight  : Store each element's complement in an unordered_map
              during a single pass. Avoids the O(n²) brute force entirely.
 
    Alt.     : Sort + two pointers → O(n log n) time, O(1) space.
              Trade-off: destroys original indices.
 */
```

---

## Progress

| Topic               | Solved | Difficulty spread         |
|---------------------|--------|---------------------------|
| Arrays              | ✅     | Easy / Medium / Hard      |
| Math                | ✅     | Easy / Medium             |
| Strings             | 🔄     | —                         |
| Dynamic Programming | 🔄     | —                         |
| Graphs              | 🔄     | —                         |
| Trees               | 🔄     | —                         |
| Two Pointers        | 🔄     | —                         |
| Sliding Window      | 🔄     | —                         |

---

## Patterns covered

Problems are grouped by technique, not just by topic. Recognizing the pattern matters more than memorizing the solution.

- **Greedy** — locally optimal choices, proof of global optimality
- **Hash maps** — O(1) lookup to eliminate nested loops
- **Prefix sums** — range queries in constant time
- **Modular arithmetic** — large number problems, overflow handling
- **Two pointers** — linear-time solutions on sorted structures
- More added as the repository grows

---

## Obsidian integration

The `/notes` folder is an Obsidian vault that lives alongside the code. Each pattern has a dedicated note with:

- When to recognize it
- Core invariant or proof sketch
- Linked problem notes

Each problem note links back to the `.cpp` file, creating a navigable knowledge graph. The vault is committed alongside the code — notes and solutions stay in sync.

To use it: open the `/notes` folder as a vault in Obsidian. The graph view shows how problems, patterns, and concepts connect.

---

## How to run

```bash
# Compile any solution
g++ -std=c++17 -O2 -o solution <filename>.cpp

# Run
./solution
```

No external dependencies. Standard C++17 throughout.

---

## Collaboration

Open to discussion on alternative approaches, edge cases, or more elegant solutions. If you spot a complexity claim that doesn't hold, open an issue — correctness matters here.

Pull requests with well-documented alternative solutions are welcome.

---

## About

I'm a self-taught C++ programmer working through DSA systematically — motivated by competitive programming and a genuine interest in the mathematical foundations of algorithms. This repository is part of that process: building understanding that holds up under pressure, not just solutions that pass tests.

---

*MIT License · Bushra Khandoker · 2026*