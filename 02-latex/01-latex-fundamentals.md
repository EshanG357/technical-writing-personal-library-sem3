
# LaTeX Fundamentals

## 1. Introduction

LaTeX is a high-quality document preparation system widely used for producing scientific, mathematical, academic, and technical documents.

Unlike conventional word processors, LaTeX separates document content from its formatting instructions. Authors write content using commands and environments, and a compiler processes the source file to generate the final document.

## 2. Basic Document Structure

A LaTeX document consists of two main parts:

1. Preamble
2. Document body

### 2.1 Preamble

The preamble appears before `\begin{document}`.

It specifies the document class, packages, custom commands, and other configuration settings.

### 2.2 Document Body

The document body begins with `\begin{document}` and ends with `\end{document}`.

It contains the actual content of the document.

### Example

```latex
\documentclass[12pt,a4paper]{article}

\usepackage{amsmath}
\usepackage{xcolor}
\usepackage{graphicx}

\title{Introduction to LaTeX}
\author{Student Name}
\date{\today}

\begin{document}

\maketitle

\begin{abstract}
This document introduces the fundamentals of LaTeX.
\end{abstract}

\section{Introduction}
LaTeX is used to prepare professional documents.

\section{Conclusion}
LaTeX provides structured document preparation.

\end{document}
```

## 3. Document Classes

The `\documentclass{}` command determines the overall structure and default formatting of a document.

Common document classes include:

| Class | Application |
|---|---|
| article | Articles, assignments and short reports |
| report | Longer reports and academic documents |
| book | Books and extensive publications |
| beamer | Presentations and slides |

Example:

```latex
\documentclass[12pt,a4paper]{article}
```

Here:
- `12pt` specifies the base font size.
- `a4paper` specifies the paper size.
- `article` specifies the document class.

## 4. Packages

Packages extend LaTeX functionality.

They are included in the preamble using `\usepackage{}`.

| Package | Purpose |
|---|---|
| amsmath | Advanced mathematical typesetting |
| amssymb | Additional mathematical symbols |
| graphicx | Inserting and manipulating images |
| xcolor | Text and page colours |
| geometry | Page dimensions and margins |
| fancyhdr | Custom headers and footers |
| enumitem | Customising lists |
| array | Advanced table formatting |

Example:

```latex
\usepackage{amsmath}
\usepackage{xcolor}
```

## 5. Title and Author Information

LaTeX provides commands to define document metadata.

```latex
\title{Technical Writing Assignment}
\author{Student Name}
\date{November 2026}

\begin{document}
\maketitle
```

The `\maketitle` command generates the title section using the supplied information.

## 6. Abstract Environment

An abstract provides a brief summary of the document's purpose, scope and important contents.

```latex
\begin{abstract}
This report discusses the fundamentals of
technical documentation and LaTeX.
\end{abstract}
```

## 7. Sections and Subsections

LaTeX provides hierarchical commands for organising document content.

```latex
\section{Introduction}

\subsection{Background}

\subsubsection{Objectives}
```

An asterisk suppresses automatic numbering:

```latex
\section*{Acknowledgements}
```

## 8. Page Styles

The `\pagestyle{}` command controls the appearance of page headers and footers.

| Style | Description |
|---|---|
| plain | Page number at the bottom |
| empty | No header, footer or page number |
| headings | Section or chapter information in the header |

Example:

```latex
\pagestyle{plain}
```

## 9. Page Breaks

The following commands control page transitions:

```latex
\newpage
```

Starts a new page.

```latex
\pagebreak
```

Requests a page break.

```latex
\clearpage
```

Starts a new page after processing pending floating figures and tables.

## 10. Compilation

The LaTeX compilation process converts source code into a formatted document.

Typical workflow:

1. Write the `.tex` source file.
2. Compile using a LaTeX engine.
3. Check the generated PDF.
4. Correct errors and warnings.
5. Recompile when necessary.

## 11. Conclusion

LaTeX provides a structured approach to document preparation through document classes, packages, commands and environments.

Understanding its basic structure is essential before exploring advanced mathematical typesetting, tables, figures, bibliography management and presentations.

## References

1. Leslie Lamport, LaTeX: A Document Preparation System, 2nd Edition.
2. Course lecture: Introduction to LaTeX (Continued).
3. https://www.latex-project.org/
4. https://www.overleaf.com/learn
