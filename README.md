# C_Strings: Foundational String Algorithms and Data Structures in C

https://github.com/SanjamRaj10/C_Strings/releases

[![Releases](https://img.shields.io/badge/releases-download-blue?style=for-the-badge&logo=github)](https://github.com/SanjamRaj10/C_Strings/releases)

<svg width="0" height="0" style="position:absolute"></svg>

<!-- Inline banner image (SVG) to match the repository theme -->
<svg xmlns="http://www.w3.org/2000/svg" width="1000" height="240" viewBox="0 0 1000 240" role="img" aria-label="C Strings Banner" style="display:block;margin:20px 0;">
  <defs>
    <linearGradient id="g" x1="0" x2="1" y1="0" y2="1">
      <stop offset="0%" stop-color="#1e3a8a"/>
      <stop offset="100%" stop-color="#0ea5e9"/>
    </linearGradient>
    <radialGradient id="r" cx="50%" cy="0%" r="60%">
      <stop offset="0%" stop-color="white" stop-opacity="0.25"/>
      <stop offset="100%" stop-color="white" stop-opacity="0"/>
    </radialGradient>
  </defs>
  <rect width="1000" height="240" fill="url(#g)"/>
  <circle cx="180" cy="140" r="120" fill="url(#r)"/>
  <text x="500" y="120" text-anchor="middle" font-family="Arial, sans-serif" font-size="48" fill="white" style="font-weight:600;">
    C Strings
  </text>
  <text x="500" y="170" text-anchor="middle" font-family="Arial, sans-serif" font-size="20" fill="white" opacity="0.95">
    Foundational String Algorithms and Data Structures in C
  </text>
</svg>

Table of contents
- Overview
- What you will learn
- Repository structure
- Getting started
- Building and running exercises
- Core topics and algorithms
- Data structures you’ll use
- Debugging and testing
- How to contribute
- Exercise-by-exercise guide
- Release artifacts and how to use them
- Common questions
- Licensing and authors

Overview 🧭
This repository hosts a set of programming exercises focused on strings and related data structures. The work was completed as part of the Foundations of Computer Science course during a Bachelor’s degree in Computer Science and Engineering at the University of Catania. The exercises cover core ideas in imperative programming with C, including string manipulation, memory management, and fundamental data structures. You will find practical implementations, explanations, and smaller projects that blend theory with hands-on coding.

What you will learn 🚀
- How to reason about strings in C, including null-terminated arrays and dynamic memory.
- How to implement basic string operations from scratch without relying solely on the standard library.
- How to manage memory safely to avoid leaks and undefined behavior.
- How to design simple data structures that work well with strings.
- How to reason about complexity, performance, and correctness in practical code.
- How to debug, test, and verify string functionality across multiple scenarios.
- How to document your work clearly so others can follow along.

Repository structure 🗂️
- docs/ — notes and explanations for concepts covered in the exercises.
- src/ — core C source files for the exercises.
- include/ — header files that declare shared interfaces used by multiple exercises.
- tests/ — unit tests and sample test harnesses to validate behavior.
- assets/ — example inputs, test data, and tiny helper resources.
- tools/ — scripts for building, running tests, and formatting code.
- README.md — this document.

Getting started ⚙️
Prerequisites
- A C compiler that supports C11 or later (GCC, Clang).
- Make or an equivalent build system for running a build script.
- A POSIX-compatible shell for running scripts (bash on Linux/macOS, Git Bash on Windows works too).

Initial steps
- Clone the repository to your machine.
- Inspect the folders to understand how exercises are organized.
- Pick an exercise you want to explore and start with the corresponding file in src/.

What you’ll typically do
- Read the exercise description in docs or within the source file.
- Write small, focused functions that operate on C strings.
- Compile your code and run small tests manually first, then with the test suite.
- Iterate to improve clarity, correctness, and efficiency.

Building and running exercises 🧰
If a Makefile exists
- make all — builds all exercises.
- make test — runs the test suite.
- make clean — cleans build artifacts.

If there isn’t a Makefile
- Each exercise typically has a main.c or a harness you can compile directly:
  - gcc -Wall -Wextra -std=c11 -o bin/exercise_name src/exercise_name.c
  - ./bin/exercise_name sample_input.txt
- For debugging, compile with extra flags:
  - gcc -g -O0 -Wall -Wextra -std=c11 -o bin/exercise_name src/exercise_name.c

Running individual exercises
- Look under tests/ for example invocations and expected outputs.
- You can feed input via redirection:
  - ./bin/exercise_name < assets/input1.txt
- If an exercise requires command-line options, the usage is documented in the source comment or docs/.

Recommended workflow
1) Start by reading the problem statement in the exercise file or documentation.
2) Sketch a plan that minimizes complexity while meeting the requirements.
3) Implement small, testable components first.
4) Compile and run with representative inputs; observe outputs.
5) Use a minimal set of tests first before expanding coverage.
6) Add comments to explain tricky logic or design decisions.
7) Run the full test suite, then review any failures and fix them.
8) Document your approach and any trade-offs you made.

Core topics and algorithms 🧩
Strings in C are a fundamental building block in many programs. This repository emphasizes solid programming practices that translate beyond any single task. Below is a curated map of the topics you will encounter, with succinct explanations and practical notes.

Null-terminated strings and memory management
- C strings are arrays of char ending with a null terminator ('\0').
- Functions often operate in-place to reduce memory usage, but this requires careful handling to avoid overwriting data.
- Buffer sizes matter. Always allocate space for the string, its terminator, and an extra margin for growth in concatenation or tokenization tasks.
- Common pitfalls include off-by-one errors, not allocating space for the terminator, and forgetting to NULL-terminate after operations.

String length, copy, and concatenation
- Implementations should be robust against buffer overflows.
- Prefer safe variants or explicit bounds checking when possible.
- In many exercises, you’ll recreate basic operations such as strlen, strcpy, and strcat to understand how they work under the hood.
- Practice with overlapping memory in copy operations to understand the differences between memmove and memcpy.

Comparison and search
- strcmp, strncmp, and the concept of lexicographic ordering appear frequently.
- Implement substring search using a simple approach and then explore more advanced methods like the Knuth-Menon-Pratt (KMP) algorithm for linear-time matching in practice.
- Character classification can be implemented with simple checks (e.g., isalpha, isdigit) or through manual ranges for portability.

Tokenization and parsing
- Splitting a string into tokens is a common task in compilers, interpreters, and data processing.
- Writing your own tokenizer helps you understand state machines and the importance of delimiters.
- Be mindful of edge cases: consecutive delimiters, delimiters at boundaries, and empty tokens.

Substring extraction and modification
- Extracting a substring from a string involves careful pointer arithmetic and memory allocation.
- When modifying strings, ensure you don’t corrupt adjacent memory and that you always allocate enough space for the resulting string.

Palindromes and pattern recognition
- Checking for palindromes tests symmetry in strings.
- Implement both case-sensitive and case-insensitive versions to broaden utility.
- Pattern recognition exercises often require efficient scanning and careful bounds checking.

Memory management patterns
- Dynamic allocation and deallocation are core to safe C programming.
- Track ownership: who is responsible for freeing memory?
- Avoid memory leaks by pairing every malloc with a corresponding free.
- Guard against dangling pointers by nulling after free when practical.

Error handling strategies
- Return codes are a clean way to signal success or failure.
- Document all error conditions clearly so callers know what to expect.
- In the tests, verify that both success and failure cases are handled gracefully.

Data structures you’ll use 🧱
- Arrays: fixed-size or dynamic arrays for storing characters and tokens.
- Linked lists: useful for dynamic sequences of strings where insertions and deletions occur.
- Stacks and queues: for managing intermediate results in parsing tasks.
- Simple hash-like structures: for quick lookup or counting occurrences within a constrained scope.
- Memory pools: small custom allocators in some exercises to reduce fragmentation and fragmentation risk.

Code organization guidelines
- Separate concerns: put core logic in dedicated functions or modules, keep I/O separate.
- Use header files to declare interfaces shared across modules.
- Keep function lifetimes clear: avoid returning pointers to stack-allocated data.
- Favor small, composable functions with clear responsibilities.
- Document interfaces with concise comments describing inputs, outputs, and side effects.

Debugging and testing 🧪
- Use gdb to step through code, inspect variables, and verify function behavior.
- Run with -g -O0 to make debugging easier, then recompile with optimizations when you’re ready.
- Valgrind helps detect memory leaks and misuses. Run:
  - valgrind --leak-check=full ./bin/exercise_name
- Unit tests verify correctness across diverse inputs. The tests directory holds harnesses and sample cases.
- Use assertions to catch invariants during development, but remove or guard them for production builds if necessary.

Contributing to this project 🤝
- Start by reading the CONTRIBUTING.md (if present) or follow these general rules:
  - Fork the repository and create a feature branch for your changes.
  - Keep changes focused and small. One exercise per branch is a good rule.
  - Add or update tests to cover new behavior.
  - Document design choices and edge cases in code comments and in the PR description.
  - Follow the existing coding style and formatting conventions.
- How to run your contribution locally:
  - Build the project with the standard build commands described above.
  - Run tests to ensure your changes don’t break existing functionality.
  - Use a clean environment to replicate the result as closely as possible.

Exercise-by-exercise guide 🧭
Note: The exercises progressively build from basic string operations to more complex patterns. Each exercise includes a short statement, a list of requirements, and typical test cases. The goal is to practice clean design and careful memory management.

Exercise 01 — Basic string length and copy
- Objective: Re-implement strlen and strcpy with safety checks.
- What you learn: How arrays and pointers behave, how to terminate strings, and how to avoid buffer overflows.
- Typical tests: Empty string, single character, very long strings near your buffer limit.

Exercise 02 — String compare and lexicographic order
- Objective: Implement a safe version of strcmp and strncmp.
- What you learn: Lexicographic order, sign conventions, and boundary checks.
- Typical tests: Equal strings, prefix cases, and differing at various positions.

Exercise 03 — Simple concatenation with bounds
- Objective: Implement a safe strcat-like function with a max buffer size.
- What you learn: In-place modification, calculating remaining space, and avoiding overflow.
- Typical tests: Full buffer use, partial concatenation, and no overflow scenarios.

Exercise 04 — Substring search (naive)
- Objective: Find a substring within a string using a straightforward approach.
- What you learn: Sliding checks and loop invariants.
- Typical tests: Substring at beginning, middle, end, and not found.

Exercise 05 — Tokenization
- Objective: Split a string into tokens separated by whitespace or a set of delimiters.
- What you learn: State-based parsing and memory allocation for tokens.
- Typical tests: Consecutive delimiters, leading/trailing delimiters, and empty input.

Exercise 06 — Palindrome checker
- Objective: Check if a string is a palindrome with and without case sensitivity.
- What you learn: Two-pointer technique and case-insensitive comparisons.
- Typical tests: Palindromes with punctuation, mixed case, and non-ASCII characters constraints.

Exercise 07 — Dynamic string buffer
- Objective: Grow a string dynamically as you append content.
- What you learn: Realloc patterns, capacity management, and efficient growth strategies.
- Typical tests: Appending incremental fragments from input data.

Exercise 08 — Simple string trimming
- Objective: Remove leading and trailing whitespace from a copy.
- What you learn: Pointer arithmetic and boundary handling to avoid off-by-one errors.
- Typical tests: Strings with spaces, tabs, and newline characters.

Exercise 09 — Case conversion utilities
- Objective: Implement to_lower and to_upper for ASCII only.
- What you learn: Character arithmetic and portability constraints.
- Typical tests: Already-lowercase strings, uppercase strings, mixed-case.

Exercise 10 — Basic memory pool (optional)
- Objective: A tiny allocator for small, short-lived strings.
- What you learn: Allocation patterns and fragmentation considerations.
- Typical tests: Allocation and deallocation sequences with reuse.

Each exercise includes:
- A short problem statement.
- Clear input/output expectations.
- A reference implementation strategy.
- A suite of test cases to verify correctness.
- Guidance on debugging and edge cases.

Implementation patterns and best practices 🧰
- Start with a tiny, correct version before optimizing.
- Validate inputs early; fail fast with clear error indicators.
- Use meaningful variable names and keep functions small.
- Separate memory allocation from logic where possible.
- Document edge cases and assumptions in comments.
- Write tests that reflect both typical and boundary scenarios.

Header and source organization
- include/strings.h — interface for string operations shared across exercises.
- src/strings_basic.c — basic string utilities (length, copy, compare).
- src/strings_tokenize.c — tokenization utilities.
- src/strings_palindrome.c — palindrome checks.
- src/strings_dynamic.c — dynamic memory handling for growing buffers.
- src/main_exercises.c — optional main files to run selected exercises.
- tests/ — unit tests harnesses and sample inputs.

Examples and code snippets
- Demonstrations are kept compact and readable.
- Functions use clear parameter names and explicit sizes to prevent misuse.
- Memory management is explicit: every allocation has a corresponding free.

Sample function: safe_strlen
- Purpose: Determine string length without overrunning memory.
- Signature: size_t safe_strlen(const char* s, size_t max_len);
- Behavior: Returns the number of characters before '\0', but will not read past max_len.
- Rationale: Protects against non-null-terminated inputs.

Code (illustrative, not copied from any specific exercise)
- Note: This snippet is for educational illustration and may be adapted to the exercises in this repository.

#include <stddef.h>

size_t safe_strlen(const char* s, size_t max_len) {
  if (!s) return 0;
  size_t i = 0;
  while (i < max_len && s[i] != '\\0') {
    ++i;
  }
  return i;
}

Troubleshooting common issues 🛠️
- Segmentation faults: check pointer validity and ensure you don’t read past allocated memory.
- Buffer overflows: always allocate space for the terminator and consider extra padding for concatenation.
- Memory leaks: track every allocation with a corresponding free; use tools like valgrind to detect leaks.
- Off-by-one errors: carefully reason about array indexes and terminator placement.

Testing and quality assurance 🧪
- Unit tests: designed to cover normal, boundary, and error conditions.
- Integration tests: exercise combinations of string operations in real-world-like flows.
- Performance tests: though not the primary focus, basic timing checks help catch obvious inefficiencies.
- Continuous improvements: as new exercises get added, tests should be extended to maintain coverage.

Usage examples in practice 🧭
- A typical workflow starts with constructing an expected string in a test, performing an operation, and comparing results.
- For exercises that manage input, build a small harness that feeds strings and prints results for manual verification.
- Use a consistent testing interface so new contributors can quickly add tests.

Documentation and style guidelines 🗒️
- Every public function has a brief description: purpose, inputs, outputs, and side effects.
- Parameter names reflect their role (e.g., src, dst, max_len).
- Avoid magic numbers; define constants for sizes and limits.
- Style choices aim for readability and maintainability:
  - Short functions with single responsibilities.
  - Clear control flow and minimal nesting.
  - Consistent formatting and indentation.

Release artifacts and how to use them 📦
- The Releases page hosts pre-built binaries or packaged artifacts for convenience.
- If you download an artifact, run the included executable(s) as directed in the artifact's documentation.
- If the link is unavailable for any reason, you can still explore the repository’s source code and build locally using the instructions in the Getting started section.
- The Releases page provides a convenient entry point for those who prefer ready-to-run assets rather than building from source.

Notes on topology and design decisions
- The exercises favor clarity over cleverness. The goal is to build a solid mental model of how strings behave in C.
- The code avoids relying on the full standard library where possible to emphasize understanding of low-level operations.
- When possible, the implementations favor safe, defensive programming to help learners avoid common mistakes.

User stories and scenarios 📖
- As a student, I want to understand how strings are stored in memory so I can design safe functions.
- As a developer, I want to see examples of how to split a string into tokens without leaking memory.
- As a teacher, I want clear, modular exercises that build on each other and demonstrate core concepts.

Expanding the project
- Plan new exercises that extend current topics, such as:
  - Multi-byte character considerations (UTF-8) and their impact on string operations in C.
  - More advanced search algorithms for large texts, with memory-mapped I/O considerations.
  - A tiny string library with a documented API and example usage in a separate app.
- Add more tests, including fuzz tests, to ensure robustness against unusual inputs.
- Improve documentation by adding more examples and diagrams that illustrate pointer arithmetic and memory layout.

Usage guidelines for readers and contributors
- Start with a specific exercise, then trace the functions and tests that accompany it.
- Use the documentation to understand the design rationale and expected edge cases.
- When contributing, explain your approach in the pull request description, including any trade-offs or design choices.
- Respect the existing structure and naming conventions to keep the codebase coherent.

Authors and academic context 👩‍🎓👨‍🎓
- The repository reflects work done as part of the Foundations of Computer Science course during a Bachelor’s degree in Computer Science and Engineering at the University of Catania.
- The project is maintained to support learning and to provide a clear example set for string and data-structure fundamentals.
- If you want to reach out for questions or collaboration, use the repository’s issue tracker or the project’s contact channels listed in the contributor section.

License 🧾
- This project is released under the MIT License. Permissions, limitations, and the full license text are provided in the LICENSE file in the repository.

Appendix: Frequently asked topics and clarifications
- Why re-implement common string functions?
  - Re-implementing core operations helps learners understand underlying mechanics, memory behavior, and potential pitfalls that are easy to miss when using built-in functions.
- Why separate concerns into headers and sources?
  - Separation clarifies interfaces, enables reuse across exercises, and makes testing more straightforward.
- How do I add a new exercise?
  - Create a new C source file with a clear main or test harness, add a description, and include tests that demonstrate expected behavior.
- What if I want to use a different compiler?
  - The exercises are designed to be portable. Minor adjustments might be needed for compiler-specific warnings or features, but the core logic remains the same.
- Can I integrate these exercises into a course or workshop?
  - Yes. The modular structure and documentation are designed to be approachable for instructional use. You can adapt the content, add slides, or create classroom materials that align with local curricula.

Additional guidance for learners 🧭
- Take notes as you progress through each exercise. Record decisions about memory management, edge cases, and how you validated results.
- Practice explaining your approach aloud or in writing. Teaching someone else solidifies your own understanding.
- Use version control to track progress. Commit small, logical changes with informative messages.
- Iterate over the same exercise after a break. A fresh look often reveals subtle issues you missed before.
- Celebrate small wins. Each correct test is progress toward mastery of C strings and data structures.

Note about the Releases link
- The repository provides a link to the Releases page for convenient access to release artifacts.
- If you encounter issues accessing the link, you can check the repository’s Releases section for alternatives or updated links. The Releases page serves as a central hub for downloadable materials and build artifacts associated with the exercises.