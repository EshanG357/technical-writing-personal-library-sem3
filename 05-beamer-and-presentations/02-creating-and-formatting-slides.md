
# Creating and Formatting Slides

## 1. Introduction

A good presentation requires more than placing text on slides.

Content should be organised clearly, formatted consistently, and presented in a manner that makes it easy for the audience to understand.

Beamer provides several environments and commands for arranging and formatting presentation content.

This chapter explores the main techniques used to create structured and visually consistent slides.

## 2. Slide Titles

Each Beamer frame can have a title.

Example:

```latex
\begin{frame}{Introduction to Machine Learning}

Machine Learning enables computers to learn
patterns from data.

\end{frame}
```

A subtitle can also be included within the frame using suitable text formatting.

## 3. Text Formatting

Beamer supports standard LaTeX text-formatting commands.

### 3.1 Bold Text

```latex
\textbf{Important Information}
```

### 3.2 Italic Text

```latex
\textit{Technical Explanation}
```

### 3.3 Underlined Text

```latex
\underline{Highlighted Text}
```

### 3.4 Text Colours

The `xcolor` package or Beamer's built-in colour commands can be used to apply colours.

Example:

```latex
\textcolor{blue}{Important Concept}
```

Colours should be used consistently to highlight important information rather than decorate every line.

## 4. Bulleted Lists

Bulleted lists are useful for presenting key points without using lengthy paragraphs.

Beamer supports the standard `itemize` environment.

Example:

```latex
\begin{frame}{Applications of AI}

\begin{itemize}
    \item Healthcare
    \item Education
    \item Robotics
    \item Transportation
\end{itemize}

\end{frame}
```

Each `\item` creates a bullet point.

## 5. Numbered Lists

The `enumerate` environment creates numbered lists.

Example:

```latex
\begin{frame}{Software Development Process}

\begin{enumerate}
    \item Requirement Analysis
    \item System Design
    \item Implementation
    \item Testing
    \item Deployment
\end{enumerate}

\end{frame}
```

Numbered lists are particularly useful when presenting sequential steps.

## 6. Nested Lists

Beamer also supports nested lists.

Example:

```latex
\begin{frame}{Types of Machine Learning}

\begin{itemize}

    \item Supervised Learning
    \begin{itemize}
        \item Classification
        \item Regression
    \end{itemize}

    \item Unsupervised Learning
    \begin{itemize}
        \item Clustering
        \item Dimensionality Reduction
    \end{itemize}

\end{itemize}

\end{frame}
```

Nested lists help organise related concepts under broader categories.

## 7. Blocks in Beamer

Blocks are visual containers used to highlight related information.

Beamer provides different block environments.

### 7.1 Normal Block

```latex
\begin{frame}{Important Concept}

\begin{block}{Definition}
Artificial Intelligence is the simulation
of human intelligence by machines.
\end{block}

\end{frame}
```

### 7.2 Alert Block

Alert blocks are used to emphasise important information.

```latex
\begin{alertblock}{Important}
Always verify experimental results
before presenting them.
\end{alertblock}
```

### 7.3 Example Block

Example blocks are useful for presenting illustrations or applications.

```latex
\begin{exampleblock}{Example}
A spam filter is an application
of machine learning.
\end{exampleblock}
```

### 7.4 Comparison

| Block | Purpose |
|---|---|
| `block` | General information |
| `alertblock` | Important warnings or points |
| `exampleblock` | Examples and illustrations |

## 8. Creating Multiple Columns

Beamer provides the `columns` environment for arranging content side by side.

Example:

```latex
\begin{frame}{Machine Learning}

\begin{columns}

    \column{0.5\textwidth}

    \textbf{Supervised Learning}

    \begin{itemize}
        \item Classification
        \item Regression
    \end{itemize}

    \column{0.5\textwidth}

    \textbf{Unsupervised Learning}

    \begin{itemize}
        \item Clustering
        \item Association
    \end{itemize}

\end{columns}

\end{frame}
```

Columns are useful for:
- Comparing two concepts.
- Displaying images alongside explanations.
- Presenting related information.
- Creating balanced slide layouts.

## 9. Themes in Beamer

Themes control the overall visual appearance of a presentation.

They influence elements such as:
- Slide layout.
- Navigation bars.
- Header and footer appearance.
- Colours.
- Typography.

A theme can be selected using:

```latex
\usetheme{Madrid}
```

Other commonly used themes include:

```latex
\usetheme{Berlin}
```

```latex
\usetheme{CambridgeUS}
```

```latex
\usetheme{Warsaw}
```

The selected theme applies a consistent presentation style.

## 10. Colour Themes

Beamer also allows colour themes to be selected independently of the overall presentation theme.

Example:

```latex
\usecolortheme{seahorse}
```

Other examples include:

```latex
\usecolortheme{dolphin}
```

```latex
\usecolortheme{beaver}
```

Colour themes influence the appearance of elements such as blocks, titles and navigation components.

## 11. Customising Colours

Custom colours can be defined using the `xcolor` package.

Example:

```latex
\usepackage{xcolor}

\definecolor{myblue}{RGB}{20,60,120}
```

A custom colour can be applied to text:

```latex
\textcolor{myblue}{Technical Presentation}
```

Beamer also provides mechanisms for changing the colours of presentation elements.

Example:

```latex
\setbeamercolor{title}{
    fg=white,
    bg=blue
}
```

This changes the foreground and background colours of the title element.

## 12. Tables in Beamer

Tables can be created using the standard LaTeX `tabular` environment.

Example:

```latex
\begin{frame}{Comparison of Algorithms}

\begin{tabular}{|c|c|c|}
\hline
Algorithm & Time Complexity & Space Complexity \\
\hline
Bubble Sort & O(n^2) & O(1) \\
Merge Sort & O(n log n) & O(n) \\
Quick Sort & O(n log n) average & O(log n) \\
\hline
\end{tabular}

\end{frame}
```

Tables should be kept simple and readable.

Large tables should generally be divided across multiple slides or simplified.

## 13. Mathematical Expressions

One of the major advantages of Beamer is its support for LaTeX mathematical notation.

### 13.1 Inline Mathematics

```latex
The quadratic equation is
$a x^2 + bx + c = 0$.
```

### 13.2 Display Mathematics

```latex
\[
x = \frac{-b \pm \sqrt{b^2-4ac}}{2a}
\]
```

### 13.3 Equation Environment

```latex
\begin{equation}
E = mc^2
\end{equation}
```

Mathematical expressions are particularly useful in scientific and engineering presentations.

## 14. A Complete Formatting Example

The following example combines themes, blocks, lists and columns.

```latex
\documentclass{beamer}

\usetheme{Madrid}
\usecolortheme{seahorse}

\title{Introduction to Artificial Intelligence}
\author{Eshan Garg}
\institute{MNIT Jaipur}
\date{\today}

\begin{document}

\begin{frame}
    \titlepage
\end{frame}

\begin{frame}{What is Artificial Intelligence?}

\begin{block}{Definition}
Artificial Intelligence enables machines
to perform tasks that normally require
human intelligence.
\end{block}

\begin{itemize}
    \item Learning
    \item Reasoning
    \item Problem Solving
\end{itemize}

\end{frame}

\begin{frame}{Types of Machine Learning}

\begin{columns}

\column{0.5\textwidth}

\textbf{Supervised Learning}

\begin{itemize}
    \item Classification
    \item Regression
\end{itemize}

\column{0.5\textwidth}

\textbf{Unsupervised Learning}

\begin{itemize}
    \item Clustering
    \item Association
\end{itemize}

\end{columns}

\end{frame}

\begin{frame}{Important Point}

\begin{alertblock}{Remember}
The quality of training data
strongly influences model performance.
\end{alertblock}

\end{frame}

\end{document}
```

## 15. Best Practices for Slide Formatting

1. Use a consistent theme throughout the presentation.
2. Maintain readable font sizes.
3. Prefer short bullet points over lengthy paragraphs.
4. Use blocks to highlight important information.
5. Maintain consistent spacing and alignment.
6. Avoid excessive colours and decorative elements.
7. Use tables only when they improve clarity.
8. Keep mathematical expressions readable.
9. Avoid overcrowding individual slides.
10. Use contrasting text and background colours.

## 16. Conclusion

Beamer provides a flexible environment for designing structured technical presentations.

Its formatting capabilities include text styling, lists, blocks, columns, themes, colours, tables and mathematical expressions.

Using these features appropriately helps create presentations that are consistent, readable and professionally organised.

## References

1. Course lecture: Introduction to LaTeX (Cntd..), Dr. Neeta Nain, MNIT Jaipur.
2. [Beamer Package — CTAN](https://ctan.org/pkg/beamer)
3. [Beamer User Guide](https://ctan.org/pkg/beamer)
4. [Overleaf — Beamer Presentations](https://www.overleaf.com/learn/latex/Beamer)
5. [LaTeX Project](https://www.latex-project.org/)

---

*End of Chapter 02*
