
# Colours, Figures and Picture Environment in LaTeX

## 1. Introduction

LaTeX provides several facilities for improving the visual presentation of technical documents.

The `xcolor` package allows authors to customise text and mathematical expression colours, while the `graphicx` package provides commands for inserting and manipulating external images.

The `figure` and `picture` environments allow figures, diagrams, lines, arrows, and other graphical objects to be included in documents.

## 2. Working with Colours

The `xcolor` package is commonly used to introduce colours into LaTeX documents.

Include the package in the preamble:

```latex
\usepackage{xcolor}
```

### 2.1 Basic Text Colours

The `\textcolor{color}{text}` command changes the colour of specified text.

Syntax:

```latex
\textcolor{color}{text}
```

Example:

```latex
\textcolor{blue}{Blue text}
\textcolor{green}{Green text}
\textcolor{red}{Red text}
```

### 2.2 Changing Colour Mid-text and Scope

The `\color{}` command changes the colour of subsequent content.

Example:

```latex
{\color{blue} This portion is blue.}

The remaining text retains its normal colour.
```

Braces restrict the colour change to the enclosed content.

Without grouping, the colour setting continues until another colour is selected or the current scope ends.

### 2.3 Colouring Mathematical Expressions

Mathematical symbols and expressions can also be coloured using `\textcolor`.

Example:

```latex
\[
\textcolor{magenta}{E=mc^2}
\]

\[
\textcolor{orange}{\int_0^1 x^2\,dx}
\]
```

This is useful for highlighting important equations or mathematical components.

### 2.4 Background Colours

The `\colorbox{}` command creates a coloured background behind text.

```latex
\colorbox{yellow}{Important Information}
```

The `\pagecolor{}` command changes the background colour of a page.

```latex
\pagecolor{lightgray}
```

Example:

```latex
\documentclass{article}
\usepackage{xcolor}

\begin{document}

\pagecolor{lightgray}

\colorbox{yellow}{Technical Writing}

\end{document}
```

## 3. Figures in LaTeX

Figures are graphical elements inserted into documents to communicate information visually.

They may include photographs, diagrams, charts, illustrations, and graphs.

The `graphicx` package is used to insert and manipulate external images.

Include:

```latex
\usepackage{graphicx}
```

### 3.1 Inserting an Image

The `\includegraphics{}` command inserts an external image.

Syntax:

```latex
\includegraphics{filename}
```

Example:

```latex
\documentclass{article}
\usepackage{graphicx}

\begin{document}

\includegraphics{example.jpg}

\end{document}
```

The image file should be available in the project directory or at the specified path.

### 3.2 Scaling Images

Images can be resized using the `scale` or `width` options.

Example using scale:

```latex
\includegraphics[scale=0.5]{example.jpg}
```

Example using width:

```latex
\includegraphics[width=0.5\textwidth]{example.jpg}
```

The `width` option allows the image size to be specified relative to the text width.

### 3.3 Rotating Images

The `angle` option rotates an image.

```latex
\includegraphics[angle=30]{example.jpg}
```

The angle is specified in degrees.

A positive angle rotates the image counter-clockwise.

## 4. Figure Environment

The `figure` environment is used to organise images and graphical content.

It supports centering, captions, positioning, and cross-referencing.

### 4.1 Basic Figure Structure

```latex
\begin{figure}[h]
    \centering
    \includegraphics[width=0.5\textwidth]{example.jpg}
    \caption{A centered sample figure}
    \label{fig:sample}
\end{figure}
```

Important commands:

| Command | Purpose |
|---|---|
| `\begin{figure}` | Starts a figure environment |
| `\centering` | Centres the figure |
| `\includegraphics` | Inserts an image |
| `\caption{}` | Adds a figure caption |
| `\label{}` | Assigns a reference identifier |
| `\end{figure}` | Ends the figure environment |

### 4.2 Figure Positioning

The optional argument controls where LaTeX is requested to place a floating figure.

| Option | Meaning |
|---|---|
| `h` | Approximately here |
| `t` | Top of page |
| `b` | Bottom of page |
| `p` | Dedicated page for floats |
| `!` | Relax certain placement restrictions |

Example:

```latex
\begin{figure}[ht]
    \centering
    \includegraphics[width=0.6\textwidth]{example.jpg}
    \caption{Sample image}
\end{figure}
```

These are placement preferences, not absolute guarantees.

## 5. Captions and Cross-referencing Figures

Captions provide descriptions of graphical content.

The `\label{}` command assigns an identifier to a figure, and `\ref{}` retrieves its automatically generated number.

Example:

```latex
\begin{figure}[h]
    \centering
    \includegraphics[width=0.5\textwidth]{example.jpg}
    \caption{Sample graphical representation}
    \label{fig:sample}
\end{figure}

As shown in Figure~\ref{fig:sample},
the graphical representation illustrates the concept.
```

The label should generally be placed after the caption so that it captures the figure number.

## 6. Picture Environment

The `picture` environment allows simple diagrams and graphical objects to be drawn directly using LaTeX commands.

Objects are positioned using coordinates.

### 6.1 Coordinate System

The general syntax is:

```latex
\begin{picture}(width,height)
    ...
\end{picture}
```

The dimensions specify the nominal width and height of the picture.

The `\unitlength` command determines the physical length represented by one coordinate unit.

Example:

```latex
\setlength{\unitlength}{1cm}

\begin{picture}(4,2)
    \put(0,0){\vector(1,0){4}}
    \put(0,0){\vector(0,1){2}}
    \put(2,1){\circle{0.2}}
\end{picture}
```

Here:
- The first vector creates the horizontal axis.
- The second vector creates the vertical axis.
- The circle is positioned at coordinate (2,1).

### 6.2 The put Command

The `\put(x,y){object}` command positions an object at a specified coordinate.

Syntax:

```latex
\put(x,y){object}
```

Example:

```latex
\begin{picture}(5,3)
    \put(2,1){Hello}
\end{picture}
```

The reference point of the object is positioned at the specified coordinates.

### 6.3 Drawing Lines

The `\line()` command draws a straight line.

Syntax:

```latex
\line(x-slope,y-slope){length}
```

Examples:

```latex
\begin{picture}(6,4)
    \put(0,1){\line(1,0){5}}
    \put(1,0){\line(0,1){3}}
    \put(1,1){\line(1,1){2}}
\end{picture}
```

Common slope combinations:

| Slope | Direction |
|---|---|
| `(1,0)` | Horizontal |
| `(0,1)` | Vertical |
| `(1,1)` | 45-degree diagonal |
| `(-1,1)` | Diagonal in the opposite direction |

The slope components are signed integers with magnitudes not exceeding 6 and must be relatively prime.

### 6.4 Drawing Vectors and Arrows

The `\vector()` command draws an arrow.

Syntax:

```latex
\vector(x-slope,y-slope){length}
```

Example:

```latex
\begin{picture}(8,6)
    \setlength{\unitlength}{0.5cm}

    \put(1,1){\line(3,1){6}}
    \put(1,3){\vector(1,1){3}}
    \put(5,2){\vector(-1,1){2}}
\end{picture}
```

Vectors are useful for illustrating direction and relationships between graphical objects.

### 6.5 Drawing Circles

The `\circle{diameter}` command creates a circle.

Example:

```latex
\begin{picture}(5,4)
    \put(2,2){\circle{2}}
    \put(4,2){\circle*{1}}
\end{picture}
```

The starred version creates a filled circle.

### 6.6 Frame and Framebox

The `\frame{}` command places a rectangular frame around an object.

```latex
\frame{Technical Writing}
```

The `\framebox()` command creates a rectangular box with specified dimensions.

```latex
\begin{picture}(6,3)
    \put(1,1){\framebox(4,1){LaTeX}}
\end{picture}
```

The text is positioned within the rectangular frame.

### 6.7 Dashed Boxes

The `\dashbox` command creates a rectangular box with dashed borders.

```latex
\begin{picture}(6,3)
    \put(1,1){\dashbox{0.2}(4,1){Dashed Box}}
\end{picture}
```

The first argument specifies the dash length.

### 6.8 Repeated Patterns Using multiput

The `\multiput` command places multiple copies of an object using a fixed displacement.

Syntax:

```latex
\multiput(x,y)(delta-x,delta-y){number}{object}
```

Example:

```latex
\setlength{\unitlength}{1cm}

\begin{picture}(6,2)
    \multiput(1,1)(1,0){5}{\circle*{0.2}}
\end{picture}
```

This creates five filled circles arranged horizontally.

## 7. Additional Picture Environment Commands

### 7.1 Line Thickness

The `\linethickness{}` command changes the thickness of horizontal and vertical lines in the picture environment.

```latex
\linethickness{1pt}
```

### 7.2 Makebox

The `\makebox` command creates a box containing text.

```latex
\makebox[4cm][c]{Centered Text}
```

Common horizontal positioning options:

- `l` — left aligned
- `r` — right aligned
- `s` — adjusts interword spacing to fill the box

Within the picture environment, the syntax includes width and height:

```latex
\makebox(4,2)[tl]{Text}
```

Positioning options include `t`, `b`, `l`, and `r`.

### 7.3 Rule Command

The `\rule{width}{height}` command creates a filled rectangular rule.

```latex
\rule{3cm}{1pt}
```

This creates a horizontal rule.

```latex
\rule{1pt}{2cm}
```

This creates a vertical rule.

## 8. Complete Example

The following document combines colours, mathematical expressions, external images, captions, and a simple picture.

```latex
\documentclass[12pt,a4paper]{article}

\usepackage{xcolor}
\usepackage{graphicx}

\title{Colours and Figures in LaTeX}
\author{Student Name}
\date{\today}

\begin{document}

\maketitle

\section{Text Colours}

\textcolor{blue}{Blue text}

\colorbox{yellow}{Highlighted information}

\section{Mathematical Colours}

\[
\textcolor{red}{E=mc^2}
\]

\section{External Figures}

\begin{figure}[h]
    \centering
    \includegraphics[width=0.5\textwidth]{example.jpg}
    \caption{Sample image}
    \label{fig:sample}
\end{figure}

Figure~\ref{fig:sample} illustrates an inserted image.

\section{Picture Environment}

\setlength{\unitlength}{1cm}

\begin{picture}(5,3)
    \put(0,0){\vector(1,0){4}}
    \put(0,0){\vector(0,1){2}}
    \put(2,1){\circle{0.3}}
    \put(3,1){\framebox(1,0.5){Box}}
\end{picture}

\end{document}
```

Replace `example.jpg` with an actual image file in the project directory before compiling.

## 9. Conclusion

LaTeX provides extensive facilities for enhancing the visual presentation of technical documents.

The `xcolor` package enables colour customisation, while `graphicx` supports external image insertion, scaling, and rotation.

The `figure` environment provides captions and references, whereas the `picture` environment allows simple graphical objects to be constructed using coordinates and drawing commands.

These features are useful when preparing technical reports, scientific documents, diagrams, and academic assignments.

## References

1. Course lecture: Introduction to LaTeX — Colours, Figures and Picture Environment.
2. Course reference: LaTeX Picture Environment.
3. Course reference: Creating Figures and Graphs with LaTeX.
4. Leslie Lamport, *LaTeX: A Document Preparation System*, 2nd Edition.
5. [Overleaf — Inserting Images](https://www.overleaf.com/learn/latex/Inserting_Images)
6. [LaTeX Project](https://www.latex-project.org/)

---

*End of Chapter 04*
