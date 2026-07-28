*This project has been created as part of the 42 curriculum by demane.*

# CPP Module 01

## Description

**CPP Module 01** deepens memory management in C++: heap vs stack allocation, pointers, references, and how to structure simple class designs. The goal is to understand when to use `new` / `delete`, how references differ from pointers, and how to avoid unnecessary heap usage.

This module contains seven exercises:

| Exercise | Focus |
|----------|--------|
| **ex00 — BraiiiiiiinnnzzzZ** | `Zombie`; heap (`newZombie`) vs stack (`randomChump`) |
| **ex01 — Moar brainz!** | Array allocation with `zombieHorde` + `delete[]` |
| **ex02 — HI THIS IS BRAIN** | Address and value via string, pointer, and reference |
| **ex03 — Unnecessary violence** | `Weapon`, `HumanA` (ref), `HumanB` (pointer) |
| **ex04 — Sed is for losers** | File I/O: replace all occurrences of `s1` by `s2` |
| **ex05 — Harl 2.0** | Member function pointers to dispatch complain levels |
| **ex06 — Harl filter** | `switch`-based filter that prints from a given level upward |

### Overview

- **ex00** allocates one zombie on the heap (must be `delete`d) and one on the stack (destroyed automatically).
- **ex01** creates `N` zombies with `new[]`, announces them, then frees with `delete[]`.
- **ex02** prints the memory addresses and contents of a string, a pointer to it, and a reference to it.
- **ex03** shows why `HumanA` always has a weapon (reference) while `HumanB` may receive one later (pointer + `setWeapon`).
- **ex04** reads a file and writes `<filename>.replace` with every occurrence of `s1` replaced by `s2` (no C functions).
- **ex05** maps `DEBUG` / `INFO` / `WARNING` / `ERROR` to private methods via an array of pointers to member functions.
- **ex06** takes a minimum level on the command line and prints that level plus all more severe ones (or a default message).

## Instructions

### Requirements

- A C++ compiler (`c++` / `g++`) supporting **C++98**
- `make`

### Compilation

```bash
cd ex00   # or ex01 … ex06
make
make clean
make fclean
make re
```

Flags used: `-Wall -Wextra -Werror -std=c++98`.

### Execution

```bash
# ex00 / ex01
./zombie

# ex02 / ex03 / ex05
./exec

# ex04
./exec <filename> <s1> <s2>
# → writes <filename>.replace

# ex06
./harlFilter DEBUG
./harlFilter WARNING
./harlFilter "INVALID"
```

## Classes & components

| Component | Role |
|-----------|------|
| `Zombie` | Named zombie with `announce()`; helpers `newZombie` / `randomChump` / `zombieHorde` |
| `Weapon` | Holds a type string; `getType` / `setType` |
| `HumanA` | Always armed — weapon stored as `Weapon &` |
| `HumanB` | May start unarmed — weapon stored as `Weapon *`, set via `setWeapon` |
| `Harl` | Levels `debug` / `info` / `warning` / `error`; `complain` via function pointers (ex05) or switch filter (ex06) |

## Resources

### Documentation & references

- [new / delete](https://en.cppreference.com/w/cpp/language/new) — dynamic allocation
- [References](https://en.cppreference.com/w/cpp/language/reference) vs [Pointers](https://en.cppreference.com/w/cpp/language/pointer)
- [fstream](https://en.cppreference.com/w/cpp/io/basic_fstream) — file streams
- [Pointers to member functions](https://en.cppreference.com/w/cpp/language/pointer#Pointers_to_member_functions)
- [switch statement](https://en.cppreference.com/w/cpp/language/switch)
- 42 subject: *CPP Module 01*

### Use of AI

AI assistance was used for:

- Drafting and formatting this `README.md` according to the 42 curriculum requirements
- Clarifying wording and structuring documentation sections

No AI-generated code was submitted as a substitute for personal implementation. The C++ sources were written and validated by the student.

---

*42 Paris — Common Core*
