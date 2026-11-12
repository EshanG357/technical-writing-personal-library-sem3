
# Mathematical Typesetting in LaTeX

## 1. Introduction

LaTeX provides powerful facilities for writing mathematical expressions, equations, symbols, matrices, and other mathematical structures.

It is widely used in scientific publications, engineering reports, research papers, and academic assignments because it produces consistent and professional mathematical notation.

The `amsmath` and `amssymb` packages provide additional mathematical environments and symbols.

## 2. Mathematical Modes

LaTeX supports two primary ways of displaying mathematical expressions.

### 2.1 Inline Mathematics

Inline mathematics displays an expression within a paragraph.

Syntax:

```latex
\( x+y=10 \)
```

Alternatively:

```latex
$ x+y=10 $
```

Example:

```latex
The equation \( E=mc^2 \) represents mass-energy equivalence.
```

### 2.2 Display Mathematics

Display mathematics places an expression on a separate, centred line.

Syntax:

```latex
\[
x+y=10
\]
```

Alternatively:

```latex
\begin{displaymath}
x+y=10
\end{displaymath}
```

Display mathematics is useful for larger or more complex expressions.

## 3. Mathematical Symbols

LaTeX provides commands for numerous mathematical symbols.

### 3.1 Greek Letters

| Symbol | LaTeX Command |
|---|---|
| α | `\alpha` |
| β | `\beta` |
| γ | `\gamma` |
| δ | `\delta` |
| θ | `\theta` |
| λ | `\lambda` |
| μ | `\mu` |
| π | `\pi` |
| σ | `\sigma` |
| Ω | `\Omega` |

Example:

```latex
\[
\alpha + \beta = \gamma
\]
```

### 3.2 Binary Operators

| Symbol | Command |
|---|---|
| × | `\times` |
| ÷ | `\div` |
| ± | `\pm` |
| ⊗ | `\otimes` |
| ⊕ | `\oplus` |
| ∪ | `\cup` |
| ∩ | `\cap` |

Example:

```latex
\[
A \cup B,\quad A \cap B
\]
```

### 3.3 Relations and Logic Symbols

| Symbol | Command |
|---|---|
| ≤ | `\leq` |
| ≥ | `\geq` |
| ≠ | `\neq` |
| ≈ | `\approx` |
| ⊂ | `\subset` |
| ⊃ | `\supset` |
| ⊆ | `\subseteq` |
| ⊇ | `\supseteq` |
| ∀ | `\forall` |
| ∃ | `\exists` |

Example:

```latex
\[
a \leq b,\quad x \neq y
\]
```

### 3.4 Other Mathematical Operators

| Symbol | Command |
|---|---|
| ∫ | `\int` |
| ∮ | `\oint` |
| ∑ | `\sum` |
| ∏ | `\prod` |
| ∞ | `\infty` |
| ∂ | `\partial` |
| ∇ | `\nabla` |

Example:

```latex
\[
\sum_{i=1}^{n} i
\]

\[
\int_0^\infty e^{-x}\,dx
\]
```

## 4. Fractions and Mathematical Expressions

The `\frac{numerator}{denominator}` command creates fractions.

Example:

```latex
\[
\frac{a+b}{c+d}
\]
```

### 4.1 Powers and Exponents

The caret `^` is used for superscripts.

```latex
\[
x^2 + y^2 = z^2
\]
```

### 4.2 Subscripts

The underscore `_` is used for subscripts.

```latex
\[
a_1 + a_2 + a_3
\]
```

### 4.3 Roots

The `\sqrt{}` command creates square roots.

```latex
\[
\sqrt{x^2+y^2}
\]
```

An optional argument specifies the root degree.

```latex
\[
\sqrt[3]{x}
\]
```

### 4.4 Binomial Coefficients

The `\binom{n}{k}` command produces a binomial coefficient.

```latex
\[
\binom{n}{k} = \frac{n!}{k!(n-k)!}
\]
```

## 5. Equations

Mathematical equations can be displayed using different environments.

### 5.1 Equation Environment

The `equation` environment displays a centred, numbered equation.

```latex
\begin{equation}
E = mc^2
\end{equation}
```

### 5.2 Unnumbered Equations

The starred version suppresses equation numbering.

```latex
\begin{equation*}
a^2+b^2=c^2
\end{equation*}
```

The starred mathematical environments are provided by the `amsmath` package.

## 6. Array Environment

The `array` environment is used to arrange mathematical content into aligned rows and columns.

It is particularly useful for representing structured mathematical information.

Syntax:

```latex
\[
\begin{array}{lcr}
\text{Left} & \text{Center} & \text{Right} \\
a & b & c \\
1 & 2 & 3
\end{array}
\]
```

Column alignment options:

| Character | Alignment |
|---|---|
| `l` | Left |
| `c` | Centre |
| `r` | Right |

The ampersand `&` separates columns, while `\\` starts a new row.

## 7. Matrices

Matrices can be created using environments provided by the `amsmath` package.

First include:

```latex
\usepackage{amsmath}
```

### 7.1 Basic Matrix

```latex
\[
\begin{matrix}
1 & 2 & 3 \\
4 & 5 & 6 \\
7 & 8 & 9
\end{matrix}
\]
```

### 7.2 Matrices with Different Delimiters

LaTeX provides several matrix environments.

| Environment | Appearance |
|---|---|
| `matrix` | No surrounding delimiters |
| `pmatrix` | Parentheses |
| `bmatrix` | Square brackets |
| `Bmatrix` | Curly braces |
| `vmatrix` | Single vertical bars |
| `Vmatrix` | Double vertical bars |

Example:

```latex
% Parentheses
\[
\begin{pmatrix}
1 & 2 \\
3 & 4
\end{pmatrix}
\]

% Square brackets
\[
\begin{bmatrix}
1 & 2 \\
3 & 4
\end{bmatrix}
\]

% Curly braces
\[
\begin{Bmatrix}
1 & 2 \\
3 & 4
\end{Bmatrix}
\]

% Determinant-style delimiters
\[
\begin{vmatrix}
a & b \\
c & d
\end{vmatrix}
\]

% Double vertical bars
\[
\begin{Vmatrix}
5 & 6 \\
7 & 8
\end{Vmatrix}
\]
```

### 7.3 Multiple Rows and Columns

Matrices can contain any required number of rows and columns.

Additional vertical spacing can be introduced after a row using an optional length argument.

```latex
\[
\begin{bmatrix}
1 & 2 \\
3 & 4 \\[6pt]
5 & 6
\end{bmatrix}
\]
```

## 8. Lists in LaTeX

LaTeX provides three commonly used list environments.

### 8.1 Itemize Environment

Creates an unordered or bulleted list.

```latex
\begin{itemize}
    \item Mathematics
    \item Physics
    \item Computer Science
\end{itemize}
```

### 8.2 Enumerate Environment

Creates a numbered list.

```latex
\begin{enumerate}
    \item First step
    \item Second step
    \item Third step
\end{enumerate}
```

### 8.3 Description Environment

Creates a list with descriptive labels.

```latex
\begin{description}
    \item[HTML] HyperText Markup Language
    \item[CSS] Cascading Style Sheets
    \item[JS] JavaScript
\end{description}
```

## 9. Complete Example

The following example combines several mathematical features into one document.

```latex
\documentclass[12pt,a4paper]{article}

\usepackage{amsmath}
\usepackage{amssymb}

\title{Mathematical Typesetting in LaTeX}
\author{Student Name}
\date{\today}

\begin{document}

\maketitle

\section{Mathematical Expressions}

Inline expression: \(x^2+y^2=z^2\).

A displayed equation:

\[
E=mc^2
\]

\section{Fractions and Summations}

\[
\binom{n}{k}=\frac{n!}{k!(n-k)!}
\]

\[
\sum_{i=1}^{n}i=\frac{n(n+1)}{2}
\]

\section{Matrices}

\[
A=
\begin{bmatrix}
1 & 2 \\
3 & 4
\end{bmatrix}
\]

\section{Lists}

\begin{enumerate}
    \item Inline mathematics
    \item Display mathematics
    \item Matrices and arrays
\end{enumerate}

\end{document}
```

## 10. Conclusion

Mathematical typesetting is one of the most important features of LaTeX.

The use of mathematical modes, symbols, operators, equations, arrays, matrices, and lists makes it possible to prepare well-structured technical and scientific documents.

Understanding these environments provides a foundation for preparing mathematical reports, engineering assignments, and research publications.

## References

1. Course lecture: Exploring Math Display Styles in LaTeX.
2. Course lecture: Introduction to LaTeX — Mathematical Notations, Equations, Array, Matrices and Lists.
3. Leslie Lamport, *LaTeX: A Document Preparation System*, 2nd Edition.
4. [Overleaf — Mathematics](https://www.overleaf.com/learn/latex/Mathematical_expressions)
5. [AMS-LaTeX Documentation](https://www.ams.org/arc/tex/amsmath/)

---

*End of Chapter 02*
