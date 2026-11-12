
# Doxygen: Automated Code Documentation

## 1. Introduction

Doxygen is an open-source documentation generator used to produce reference manuals directly from source-code comments.

It supports several programming languages, including:

- C
- C++
- Python
- Java

Doxygen extracts information from specially formatted comments in source code and converts it into structured documentation.

It is widely used for documenting software libraries, APIs, classes, functions, and modules.

## 2. What is Doxygen?

Doxygen is a tool that automates the process of generating software documentation.

Instead of writing separate documentation manually, developers include descriptive comments within their source code.

Doxygen processes these comments and generates documentation in different formats.

### Applications

- Software library documentation.
- API reference manuals.
- Class and function documentation.
- Project documentation.
- Developer reference guides.

## 3. Key Features of Doxygen

Doxygen provides several useful features:

1. Extracts documentation from specially formatted source-code comments.
2. Generates documentation for functions, classes and modules.
3. Creates cross-references between documented components.
4. Generates call graphs and inheritance diagrams.
5. Supports Markdown and LaTeX mathematical expressions.
6. Supports diagrams through Graphviz.
7. Integrates with software development and CI/CD workflows.

## 4. How Doxygen Works

The basic Doxygen workflow consists of four steps.

### Step 1: Write Documentation Comments

Add specially formatted comments to the source code.

### Step 2: Create a Configuration File

Generate a configuration file using:

```bash
doxygen -g Doxyfile
```

### Step 3: Generate Documentation

Run:

```bash
doxygen Doxyfile
```

### Step 4: View Generated Documentation

Open the generated HTML documentation:

```text
html/index.html
```

The generated documentation can also be produced in LaTeX/PDF and other supported formats.

## 5. Doxygen Documentation Comments

Doxygen recognises specially formatted comments.

Unlike ordinary programming comments, these comments contain information intended to be extracted into documentation.

### 5.1 Single-Line Documentation Comments

A common format is:

```cpp
/// Brief description of the function.
```

### 5.2 Multi-Line Documentation Comments

Another commonly used format is:

```cpp
/**
 * Brief description of the function.
 *
 * Additional details about its behaviour.
 */
```

Both formats allow developers to document program components.

## 6. Common Doxygen Commands and Tags

Doxygen provides special commands that describe different aspects of source code.

| Tag | Purpose |
|---|---|
| `\brief` | Short summary of a function, class or module |
| `\param` | Describes a function parameter |
| `\return` | Describes the returned value |
| `\author` | Specifies the author |
| `\version` | Specifies the software version |
| `\see` | References related documentation |
| `\note` | Adds an additional note |

These commands can also be written using the equivalent `@` notation.

For example, `\brief` and `@brief` have the same purpose.

## 7. Documenting Functions in C++

Consider the following example:

```cpp
/**
 * \brief Calculates the sum of two integers.
 *
 * This function accepts two integer values
 * and returns their sum.
 *
 * \param a First integer.
 * \param b Second integer.
 * \return Sum of the two integers.
 */
int add(int a, int b)
{
    return a + b;
}
```

Explanation:

- `\brief` provides a short description.
- `\param` describes the input parameters.
- `\return` describes the output.
- The function implementation remains unchanged.

Doxygen extracts these descriptions to generate function documentation.

## 8. Documenting Classes in C++

Doxygen can also generate documentation for classes and their members.

Example:

```cpp
/**
 * \class Car
 * \brief Represents a car object.
 *
 * This class provides basic functionality
 * for operating a car.
 */
class Car
{
public:

    /**
     * \brief Starts the engine.
     *
     * \return True if the engine starts successfully.
     */
    bool startEngine();
};
```

The generated documentation can include:

- Class descriptions.
- Public member functions.
- Function parameters.
- Return values.
- Related classes and references.

## 9. Doxygen for Python

Doxygen can also extract documentation from Python docstrings.

Example:

```python
def foo(bar: int) -> int:
    """
    Brief description.

    More details about the function.

    :param bar: Bar parameter
    :type bar: int
    :return: Computed value
    :rtype: int
    """
    return bar + 1
```

The docstring describes the function's purpose, parameter, and return value.

Doxygen can process Python source code when the appropriate input and configuration settings are provided.

## 10. Configuration File: Doxyfile

Doxygen uses a configuration file to control the documentation generation process.

The default configuration file can be generated using:

```bash
doxygen -g Doxyfile
```

The file contains several settings that control the input files, output directories, and documentation formats.

### 10.1 Important Configuration Options

| Configuration | Purpose |
|---|---|
| `PROJECT_NAME` | Specifies the project name |
| `PROJECT_NUMBER` | Specifies the project version |
| `INPUT` | Specifies source files or directories |
| `OUTPUT_DIRECTORY` | Specifies the output location |
| `RECURSIVE` | Searches directories recursively |
| `EXTRACT_ALL` | Extracts all documented entities |
| `GENERATE_HTML` | Enables HTML generation |
| `GENERATE_LATEX` | Enables LaTeX generation |
| `GENERATE_RTF` | Enables RTF generation |
| `GENERATE_XML` | Enables XML generation |
| `HAVE_DOT` | Enables Graphviz integration |

### 10.2 Example Configuration

```text
PROJECT_NAME = "My C++ Project"

PROJECT_NUMBER = 1.0

INPUT = ./src

OUTPUT_DIRECTORY = ./docs

RECURSIVE = YES

EXTRACT_ALL = YES

GENERATE_HTML = YES

GENERATE_LATEX = YES

GENERATE_RTF = NO

GENERATE_XML = NO

HAVE_DOT = YES
```

The settings above configure Doxygen to process source files in the `src` directory and generate HTML and LaTeX documentation.

## 11. Doxygen Output Formats

Doxygen supports multiple documentation output formats.

| Format | Description |
|---|---|
| HTML | Web-based documentation |
| LaTeX/PDF | Printable documentation |
| RTF | Rich Text Format documents |
| XML | Structured documentation data |
| DocBook | Structured technical documentation |
| Man pages | Unix manual pages |

HTML is particularly useful for browsing software documentation.

LaTeX output can be used to produce printable PDF reference manuals.

## 12. Advanced Features: Grouping and Diagrams

Doxygen provides additional facilities for organising and visualising source-code documentation.

### 12.1 Grouping

Related functions, classes and modules can be organised into logical groups.

The `@defgroup` command defines a group.

Example:

```cpp
/**
 * \defgroup mathematics Mathematical Operations
 * @{
 */

/**
 * \brief Adds two numbers.
 */
int add(int a, int b)
{
    return a + b;
}

/**
 * \brief Multiplies two numbers.
 */
int multiply(int a, int b)
{
    return a * b;
}

/** @} */
```

This groups related mathematical operations together.

### 12.2 Call Graphs

Call graphs illustrate relationships between functions.

They help developers understand which functions call other functions.

### 12.3 Inheritance Diagrams

Inheritance diagrams illustrate relationships between classes in object-oriented programs.

### 12.4 Graphviz Integration

Doxygen can use Graphviz to generate diagrams.

Enable Graphviz support in the Doxyfile:

```text
HAVE_DOT = YES
```

Graphviz must also be installed and accessible to Doxygen.

### 12.5 Embedded Diagrams

Doxygen supports diagram descriptions using directives such as `@dot`.

Example:

```cpp
/**
 * \dot
 * digraph Example {
 *     A -> B;
 *     B -> C;
 * }
 * \enddot
 */
```

This describes a simple directed graph.

## 13. Best Practices for Writing Doxygen Documentation

The following practices improve documentation quality:

1. Describe the purpose and behaviour of functions.
2. Keep brief and detailed descriptions separate.
3. Document public APIs and important modules.
4. Use consistent documentation tags.
5. Explain parameters and return values clearly.
6. Maintain documentation alongside source-code changes.
7. Generate documentation regularly.
8. Integrate documentation generation into CI/CD workflows where appropriate.

## 14. Doxygen Mini-Project

The following practical exercise demonstrates automated documentation generation.

### Objective

Create documentation for a small C++ program using Doxygen.

### Step 1: Create a C++ File

Create a file named `main.cpp`.

```cpp
/**
 * \file main.cpp
 * \brief Demonstrates basic Doxygen documentation.
 */

#include <iostream>
using namespace std;

/**
 * \brief Calculates the sum of two integers.
 *
 * \param a First integer.
 * \param b Second integer.
 * \return Sum of a and b.
 */
int add(int a, int b)
{
    return a + b;
}

/**
 * \brief Main function of the program.
 *
 * \return 0 when execution is successful.
 */
int main()
{
    int result = add(10, 20);

    cout << "Sum: " << result << endl;

    return 0;
}
```

### Step 2: Generate the Configuration File

Open a terminal in the project directory.

Run:

```bash
doxygen -g Doxyfile
```

### Step 3: Configure Doxygen

Modify the important settings in the generated Doxyfile:

```text
PROJECT_NAME = "Doxygen Demo"

INPUT = main.cpp

EXTRACT_ALL = YES

GENERATE_HTML = YES

GENERATE_LATEX = YES
```

### Step 4: Generate Documentation

Run:

```bash
doxygen Doxyfile
```

### Step 5: View the Output

Open:

```text
html/index.html
```

The generated website contains the documentation extracted from the C++ source file.

## 15. Common Problems and Solutions

| Problem | Possible solution |
|---|---|
| Doxygen command not recognised | Check installation and PATH |
| No documentation generated | Check input files and configuration |
| Missing functions | Review documentation and extraction settings |
| Diagrams not generated | Check Graphviz installation and `HAVE_DOT` |
| Incorrect output directory | Check `OUTPUT_DIRECTORY` |
| HTML documentation missing | Enable `GENERATE_HTML` |

## 16. Doxygen vs Google Docs

Doxygen and Google Docs serve different documentation requirements.

| Feature | Doxygen | Google Docs |
|---|---|---|
| Main purpose | Code and API documentation | General-purpose documents |
| Collaboration | Usually through source-code workflows | Real-time multi-user collaboration |
| Rich media | Code diagrams and references | Images, tables and drawings |
| Output | HTML, LaTeX, PDF and others | Web, PDF, DOCX and others |
| Best suited for | Source code and APIs | Reports, proposals and notes |

## 17. Conclusion

Doxygen is a powerful documentation generator that automates the creation of software reference manuals.

By using specially formatted comments, developers can document functions, classes, parameters, return values and modules directly within their source code.

Its support for multiple output formats, cross-references, diagrams and configuration options makes it useful for maintaining professional software documentation.

## References

1. Course lecture: Introduction to Documentation Tools — Doxygen and Google Docs, Dr. Neeta Nain, MNIT Jaipur.
2. [Official Doxygen Website](https://www.doxygen.nl/)
3. [Doxygen Manual](https://www.doxygen.nl/manual/)
4. [Graphviz Documentation](https://graphviz.org/documentation/)
5. *Docs for Developers*, Emily A. and others.

---

*End of Chapter 09*
