
# Document Formatting in LaTeX

## 1. Introduction

LaTeX provides several commands and packages for controlling the appearance and layout of technical documents.

Document formatting involves customising page dimensions, margins, headers, footers, fonts, section headings, text alignment, colours, and lists.

Proper formatting improves readability, consistency, and the overall presentation of academic and technical documents.

## 2. Document Styles and Page Styles

Document style and page style are two different concepts in LaTeX.

### 2.1 Document Style

The document class determines the overall structure and basic formatting of a document.

Syntax:

```latex
\documentclass[12pt,a4paper]{article}
```

Common document classes include:

| Class | Application |
|---|---|
| article | Short documents, assignments and articles |
| report | Longer technical reports |
| book | Books and extensive publications |
| beamer | Presentations |
| letter | Formal letters |

The document class also determines default font sizes, paper dimensions, and structural features.

### 2.2 Page Style

The `\pagestyle{}` command controls the appearance of page headers and footers.

Common page styles:

| Style | Description |
|---|---|
| empty | No headers, footers or page numbers |
| plain | Page number at the bottom |
| headings | Section or chapter information in the header |
| fancy | Customised headers and footers using fancyhdr |

Example:

```latex
\pagestyle{empty}
```

```latex
\pagestyle{plain}
```

```latex
\pagestyle{headings}
```

The `\thispagestyle{}` command applies a page style to only the current page.

Example:

```latex
\thispagestyle{empty}
```

This is useful when a title page should not display a page number.

## 3. Customising Page Margins

The `geometry` package provides control over document margins and page dimensions.

Include the package:

```latex
\usepackage{geometry}
```

The `\geometry{}` command specifies the required margin dimensions.

Example:

```latex
\usepackage{geometry}

\geometry{
    left=2.5cm,
    right=2.5cm,
    top=2.5cm,
    bottom=2.5cm
}
```

This configuration sets all four page margins to 2.5 cm.

Margins can also be specified directly when loading the package:

```latex
\usepackage[
    left=2cm,
    right=2cm,
    top=3cm,
    bottom=3cm
]{geometry}
```

## 4. Headers and Footers

Headers and footers provide additional information at the top and bottom of document pages.

They may contain:
- Document or chapter titles.
- Author information.
- Dates.
- Page numbers.
- Course or institution names.

The `fancyhdr` package allows customised headers and footers.

Include:

```latex
\usepackage{fancyhdr}
```

### 4.1 Basic Header and Footer Customisation

Example:

```latex
\pagestyle{fancy}

\fancyhf{}

\fancyhead[L]{My Document Header}
\fancyhead[C]{Technical Writing}
\fancyhead[R]{\today}

\fancyfoot[C]{Page \thepage}
```

Important commands:

| Command | Purpose |
|---|---|
| `\pagestyle{fancy}` | Activates the fancy page style |
| `\fancyhf{}` | Clears existing header and footer fields |
| `\fancyhead[L]{}` | Sets the left header |
| `\fancyhead[C]{}` | Sets the centre header |
| `\fancyhead[R]{}` | Sets the right header |
| `\fancyfoot[L]{}` | Sets the left footer |
| `\fancyfoot[C]{}` | Sets the centre footer |
| `\fancyfoot[R]{}` | Sets the right footer |
| `\thepage` | Displays the current page number |

### 4.2 Different Header and Footer Positions

The following example places different information in each position:

```latex
\usepackage{fancyhdr}

\pagestyle{fancy}
\fancyhf{}

\fancyhead[L]{Technical Writing}
\fancyhead[R]{Semester III}

\fancyfoot[L]{MNIT Jaipur}
\fancyfoot[R]{Page \thepage}
```

This is particularly useful for formal reports and academic documents.

## 5. Creating and Customising Title Pages

The title page introduces the document and displays important information such as its title, author, institution, and date.

### 5.1 Basic Title Page

The following commands define document information:

```latex
\title{Introduction to LaTeX}
\author{Student Name}
\date{\today}
```

The `\maketitle` command generates the title.

Complete example:

```latex
\documentclass[12pt,a4paper]{article}

\title{Introduction to LaTeX}
\author{Student Name}
\date{\today}

\begin{document}

\maketitle

\end{document}
```

### 5.2 Customising the Title

Formatting commands can be included directly within the title and author fields.

```latex
\title{\Huge \bfseries Custom LaTeX Title}

\author{
    \Large Student Name \\
    \smallskip
    Department of Computer Science
}

\date{November 2026}

\begin{document}

\maketitle

\end{document}
```

### 5.3 Adding Additional Information

Additional details can be placed below the generated title.

```latex
\begin{document}

\maketitle

\begin{center}
\vspace{1cm}

\textbf{Supervisor:} Faculty Name \\

\textbf{Course:} Technical Writing

\end{center}

\end{document}
```

The `center` environment centres the additional information, while `\vspace{}` introduces vertical spacing.

### 5.4 Custom Title Page Environment

For greater control, LaTeX provides the `titlepage` environment.

```latex
\begin{titlepage}

\centering

{\Huge \bfseries Technical Writing\par}

\vspace{1cm}

{\Large Semester III\par}

\vspace{2cm}

Submitted by: Student Name

\vfill

MNIT Jaipur

\end{titlepage}
```

The `\vfill` command inserts flexible vertical space, helping position content on the page.

## 6. Customising Section Headings

LaTeX automatically formats section headings according to the document class.

The `sectsty` package allows users to customise heading fonts, sizes, and colours.

Include:

```latex
\usepackage{sectsty}
\usepackage{xcolor}
```

Example:

```latex
\sectionfont{\Large\bfseries\color{blue}}

\subsectionfont{\itshape\color{red}}
```

Here:
- `\Large` increases the heading font size.
- `\bfseries` makes the heading bold.
- `\color{blue}` changes its colour.
- `\itshape` applies italic formatting.

Complete example:

```latex
\documentclass{article}

\usepackage{sectsty}
\usepackage{xcolor}

\sectionfont{\Large\bfseries\color{blue}}
\subsectionfont{\itshape\color{red}}

\begin{document}

\section{Introduction}

\subsection{Background}

This is sample document content.

\end{document}
```

## 7. Font Customisation

LaTeX provides several commands for changing the appearance and size of text.

### 7.1 Font Styles

| Command | Effect |
|---|---|
| `\textbf{}` | Bold text |
| `\textit{}` | Italic text |
| `\texttt{}` | Monospaced text |
| `\textsf{}` | Sans-serif text |
| `\textrm{}` | Roman text |
| `\underline{}` | Underlined text |
| `\emph{}` | Emphasised text |

Example:

```latex
\textbf{Bold Text}

\textit{Italic Text}

\texttt{Monospaced Text}

\underline{Underlined Text}
```

### 7.2 Font Sizes

LaTeX provides predefined font-size commands.

| Command | Relative size |
|---|---|
| `\tiny` | Extremely small |
| `\scriptsize` | Very small |
| `\footnotesize` | Smaller than normal |
| `\small` | Small |
| `\normalsize` | Normal |
| `\large` | Large |
| `\Large` | Larger |
| `\LARGE` | Very large |
| `\huge` | Huge |
| `\Huge` | Largest predefined size |

Example:

```latex
{\small Small Text}

{\normalsize Normal Text}

{\Large Large Text}

{\Huge Huge Text}
```

Braces restrict the size change to the enclosed text.

### 7.3 Changing System Fonts

The `fontspec` package allows documents to use system-installed fonts.

Example:

```latex
\usepackage{fontspec}

\setmainfont{Arial}
```

**Important:** `fontspec` requires a compatible Unicode engine, such as XeLaTeX or LuaLaTeX. It does not work with the traditional pdfLaTeX engine.

### Important Note: Font Engine Compatibility

The `fontspec` package allows users to select and use
system-installed fonts in LaTeX documents.

However, it requires either XeLaTeX or LuaLaTeX.

It is not compatible with the traditional pdfLaTeX engine.

Example:

```latex
\documentclass{article}
\usepackage{fontspec}

\setmainfont{Arial}

\begin{document}

This document uses Arial.

\end{document}

Compile this document using XeLaTeX or LuaLaTeX.
The selected font must be installed and accessible
to the LaTeX system.

## 8. Page Background Colours

The `xcolor` package allows the background colour of a page to be changed.

Include:

```latex
\usepackage{xcolor}
```

Use:

```latex
\pagecolor{lightgray}
```

Example:

```latex
\documentclass{article}

\usepackage{xcolor}

\begin{document}

\pagecolor{lightgray}

\section{Introduction}

This document has a light grey background.

\end{document}
```

Other colour options include:

```latex
\pagecolor{white}
\pagecolor{yellow}
\pagecolor{cyan}
\pagecolor{pink}
```

The page background can be changed again by calling `\pagecolor{}` with another colour.

## 9. Text Alignment

LaTeX provides environments for controlling horizontal text alignment.

### 9.1 Left Alignment

The `flushleft` environment aligns text to the left.

```latex
\begin{flushleft}

This text is left-aligned.

\end{flushleft}
```

### 9.2 Centre Alignment

The `center` environment centres text.

```latex
\begin{center}

This text is centred.

\end{center}
```

### 9.3 Right Alignment

The `flushright` environment aligns text to the right.

```latex
\begin{flushright}

This text is right-aligned.

\end{flushright}
```

These environments are useful for title pages, captions, acknowledgements, and other document elements.

## 10. Customising Lists

LaTeX provides list environments such as `itemize`, `enumerate`, and `description`.

The `enumitem` package provides additional control over list formatting.

Include:

```latex
\usepackage{enumitem}
```

Example:

```latex
\setlist[itemize]{
    label=\textbullet,
    leftmargin=*
}
```

This customises the bullet symbol and list indentation.

### 10.1 Customising Individual Lists

```latex
\begin{itemize}[label=--, leftmargin=2cm]

    \item First item
    \item Second item
    \item Third item

\end{itemize}
```

### 10.2 Numbered Lists

```latex
\begin{enumerate}[label=\alph*)]

    \item First item
    \item Second item
    \item Third item

\end{enumerate}
```

The `enumitem` package allows list appearance, spacing, labels, and indentation to be customised consistently.

## 11. Controlling Page Breaks and Spacing

LaTeX provides several commands for controlling document flow.

### 11.1 Vertical Spacing

The `\vspace{}` command introduces vertical space.

```latex
First paragraph.

\vspace{1cm}

Second paragraph.
```

The `\smallskip`, `\medskip`, and `\bigskip` commands provide predefined vertical spacing.

### 11.2 Horizontal Spacing

The `\hspace{}` command introduces horizontal space.

```latex
First\hspace{1cm}Second
```

### 11.3 New Page

The `\newpage` command starts a new page.

```latex
\newpage
```

### 11.4 Clear Page

The `\clearpage` command starts a new page after processing pending floating figures and tables.

```latex
\clearpage
```

### 11.5 Preventing Line Breaks

The `\mbox{}` command keeps its contents together without allowing line breaks inside the box.

```latex
\mbox{Do not break these words}
```

### 11.6 Preventing Page Breaks Between Paragraphs

The `samepage` environment discourages page breaks within the enclosed content.

```latex
\begin{samepage}

Paragraph 1 text.

Paragraph 2 text.

\end{samepage}
```

This is useful when related paragraphs should remain together.

## 12. Box Formatting

LaTeX provides commands for arranging content inside boxes.

### 12.1 Raising and Lowering Text

The `\raisebox{}` command moves content vertically.

Syntax:

```latex
\raisebox{distance}{content}
```

Example:

```latex
Normal text

\raisebox{1ex}{Raised text}

\raisebox{-1ex}{Lowered text}
```

Positive values move the content upwards, while negative values move it downwards.

### 12.2 Creating a Fixed-width Paragraph Box

The `\parbox{}` command creates a box with a specified width.

Example:

```latex
\parbox{5cm}{
This is a paragraph inside a box of fixed width.
The text wraps automatically inside the box.
}
```

This is useful for placing paragraphs alongside other content.

### 12.3 Using Makebox

The `\makebox` command creates a box containing specified content.

Syntax:

```latex
\makebox[width][alignment]{content}
```

Example:

```latex
\makebox[5cm][c]{Centered Text}
```

The alignment options include:
- `l` — Left
- `c` — Centre
- `r` — Right
- `s` — Spread text across the available width

## 13. Custom Environments and Trivlist

LaTeX environments provide structured ways of organising content.

The `trivlist` environment creates an unlabelled list structure.

Example:

```latex
\begin{trivlist}

\item This text is part of an unlabeled list.

\item Another item in the list.

\end{trivlist}
```

Unlike `itemize`, the `trivlist` environment does not automatically display bullet symbols.

### 13.1 Creating a Custom Environment

The `\newenvironment` command allows users to define their own environments.

Example:

```latex
\newenvironment{myenv}
{\begin{trivlist}\item[]}
{\end{trivlist}}
```

Usage:

```latex
\begin{myenv}

This is a custom environment based on trivlist.

\end{myenv}
```

The opening definition specifies the commands executed when the environment begins, while the second specifies what happens when it ends.

## 14. Summary of Formatting Packages

| Package | Purpose |
|---|---|
| geometry | Customising page margins |
| fancyhdr | Headers and footers |
| xcolor | Text and page colours |
| sectsty | Section heading styles |
| fontspec | System font selection |
| enumitem | List formatting |
| graphicx | Image manipulation |
| multirow | Multi-row table cells |

## 15. Common Formatting Errors

| Error | Possible cause | Solution |
|---|---|---|
| Undefined control sequence | Misspelled command or missing package | Check the command and package |
| Option clash for package | Package loaded with conflicting options | Load it once with the required options |
| Missing `\begin{document}` | Incorrect document structure | Check the preamble and document body |
| Environment ended incorrectly | Mismatched begin and end commands | Verify environment names |
| Font not found | Requested system font unavailable | Install or select an available font |
| Overfull `\hbox` | Content exceeds available horizontal space | Adjust text or layout |
| Underfull `\vbox` | Page content does not fill the expected vertical space | Review page layout and spacing |

## 16. Conclusion

Document formatting is an important part of preparing professional technical documents using LaTeX.

Packages such as `geometry`, `fancyhdr`, `xcolor`, `sectsty`, and `enumitem` provide extensive control over page layout, headers, footers, colours, headings, and lists.

LaTeX also provides commands and environments for controlling spacing, alignment, page breaks, and box positioning.

A proper understanding of these features allows users to create consistent, readable, and professionally formatted academic documents.

## References

1. Course lecture: Introduction to LaTeX (Continued), Dr. Neeta Nain, MNIT Jaipur.
2. Course lecture: Introduction to LaTeX, Dr. Neeta Nain, MNIT Jaipur.
3. Leslie Lamport, *LaTeX: A Document Preparation System*, 2nd Edition.
4. [LaTeX Project](https://www.latex-project.org/)
5. [Overleaf Documentation](https://www.overleaf.com/learn)
6. [CTAN — Comprehensive TeX Archive Network](https://ctan.org/)

---

*End of Chapter 06*
