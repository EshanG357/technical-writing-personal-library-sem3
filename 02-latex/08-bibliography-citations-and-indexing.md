
# Bibliography, Citations and Indexing in LaTeX

## 1. Introduction

Bibliographies and indexes are important components of academic and technical documents.

A bibliography provides details of the books, articles, research papers, and other sources used while preparing a document.

An index provides an alphabetical listing of important terms and concepts along with the page numbers where they appear.

LaTeX supports automated bibliography generation through BibTeX and index generation through MakeIndex.

These tools help maintain consistency and simplify reference management in large documents.

## 2. Bibliography in LaTeX

A bibliography is a list of references used or cited in a document.

It generally contains information such as:

- Author name
- Title of the publication
- Journal or publisher
- Year of publication
- Volume and page numbers

LaTeX provides commands for including bibliographies and formatting references.

## 3. Introduction to BibTeX

BibTeX is a reference-management tool commonly used with LaTeX.

It performs two main functions:

1. Collects bibliographic information from an external `.bib` file.
2. Formats the references according to a selected bibliography style.

Instead of manually writing every reference inside the document, users maintain a separate bibliography database.

This makes references easier to manage and update.

### BibTeX and BibLaTeX

BibTeX is a traditional bibliography processing tool
commonly used with LaTeX.

BibLaTeX is a separate, more flexible bibliography
management package that commonly uses Biber as its
backend.

Their commands and compilation workflows differ.
The examples in this chapter specifically demonstrate
the traditional BibTeX workflow.

## 4. Creating a Bibliography Database

BibTeX stores reference information in files with the `.bib` extension.

For example:

`refs.bib`

A bibliography file contains individual entries representing books, journal articles, conference papers, and other publications.

### 4.1 Basic BibTeX Syntax

General structure:

```bibtex
@entry_type{citation_key,
    field1 = {value1},
    field2 = {value2},
    field3 = {value3}
}
```

Explanation:

| Component | Purpose |
|---|---|
| `@entry_type` | Specifies the publication type |
| `citation_key` | Unique identifier used to cite the entry |
| Fields | Store bibliographic information |
| Values | Contain author, title, year, and other details |

### 4.2 Example of a BibTeX Entry

```bibtex
@BOOK{kn:gnus,
    AUTHOR = "Donald E. Knudson",
    TITLE = "1966 World Gnus Almanac",
    PUBLISHER = {Permafrost Press},
    ADDRESS = {Novosibirsk},
    YEAR = 1966
}
```

In this example:

- `BOOK` specifies the publication type.
- `kn:gnus` is the citation key.
- `AUTHOR` specifies the author.
- `TITLE` specifies the book title.
- `PUBLISHER` identifies the publisher.
- `ADDRESS` specifies the publication location.
- `YEAR` specifies the publication year.

## 5. BibTeX Entry Types

BibTeX supports several publication types.

| Entry type | Description | Required fields |
|---|---|---|
| `article` | Journal article | author, title, journal, year |
| `book` | Published book | author or editor, title, publisher, year |
| `inproceedings` | Conference paper | author, title, booktitle, year |
| `techreport` | Technical report | author, title, institution, year |
| `misc` | Other reference types | No mandatory fields |

### 5.1 Common Bibliographic Fields

| Field | Purpose |
|---|---|
| author | Author's name |
| title | Publication title |
| year | Publication year |
| publisher | Publishing organisation |
| journal | Journal name |
| volume | Journal volume |
| number | Journal issue |
| pages | Page range |
| institution | Institution responsible for a report |
| booktitle | Title of conference proceedings |
| address | Publication location |

## 6. Citing References in a Document

The `\cite{}` command is used to cite a reference using its citation key.

Example:

```latex
According to the referenced work \cite{kn:gnus},
the publication provides relevant information.
```

The citation key must match the corresponding entry in the `.bib` file.

A reference that is not cited will generally not appear in the generated bibliography when using standard BibTeX workflows.

## 7. Generating a Bibliography

The `\bibliography{}` command specifies the bibliography database, while `\bibliographystyle{}` determines the formatting style.

Example:

```latex
\bibliographystyle{plain}

\bibliography{refs}
```

Here:

- `plain` selects the bibliography style.
- `refs` specifies the database file `refs.bib`.

The `.bib` extension is normally omitted from the filename.

### 7.1 Common Bibliography Styles

| Style | Description |
|---|---|
| plain | Alphabetical ordering with numbered citations |
| unsrt | Numbered references in citation order |
| alpha | Alphabetic citation labels |
| abbrv | Uses abbreviated names and publication details |

The selected style determines how references are arranged and displayed.

## 8. Author and Title Formatting in BibTeX

BibTeX provides specific conventions for entering author names and protecting title capitalisation.

### 8.1 Author Names

Author names can be written in either of the following forms:

```bibtex
author = {Doe, Jane}
```

or

```bibtex
author = {Jane Doe}
```

Multiple authors are separated using the word `and`.

```bibtex
author = {Jane Doe and John Smith}
```

The lecture also demonstrates ending the author list with `and others` when representing additional authors.

### 8.2 Protecting Capitalisation

Some bibliography styles automatically modify title capitalisation.

Braces can be used to protect specific letters or words.

Example:

```bibtex
title = {The {A}gon{y} of {G}nus}
```

This preserves the specified capitalisation of the protected characters.

### 8.3 Defining Abbreviations

The `@string` command allows reusable abbreviations to be defined.

Example:

```bibtex
@string{jgg1 = "Journal of Gnats and Gnus, Series1"}
```

The abbreviation can then be used inside an entry:

```bibtex
journal = jgg1
```

This reduces repeated text in bibliography databases.

### 8.4 Cross-referencing Entries

The `crossref` field allows related entries to share bibliographic information.

It is particularly useful for conference proceedings and collections of books.

This reduces the need to repeat common publication details across multiple entries.

## 9. Complete BibTeX Example

Consider the following project structure:

```text
Bibliography_Project/
|
|-- main.tex
|-- refs.bib
```

### File 1: refs.bib

```bibtex
@book{lamport1994,
    author = {Leslie Lamport},
    title = {LaTeX: A Document Preparation System},
    publisher = {Addison-Wesley},
    year = {1994}
}

@article{sample2024,
    author = {Jane Doe and John Smith},
    title = {An Introduction to Technical Documentation},
    journal = {Journal of Technical Writing},
    volume = {10},
    number = {2},
    pages = {20--35},
    year = {2024}
}
```

### File 2: main.tex

```latex
\documentclass[12pt,a4paper]{article}

\begin{document}

\title{Bibliography Management in LaTeX}
\author{Student Name}
\date{\today}

\maketitle

\section{Introduction}

LaTeX provides an efficient system for
managing bibliographic references.

Lamport's book introduces the LaTeX
document preparation system \cite{lamport1994}.

Research publications can also be cited
using BibTeX \cite{sample2024}.

\bibliographystyle{plain}

\bibliography{refs}

\end{document}
```

The final PDF contains the citations and an automatically generated bibliography.

## 10. Compilation Sequence for BibTeX

BibTeX requires multiple compilation steps to collect citation information and generate the bibliography.

The standard compilation sequence is:

1. Run LaTeX on the main `.tex` file.
2. Run BibTeX on the main document.
3. Run LaTeX again.
4. Run LaTeX one more time.

The sequence is:

```text
LaTeX → BibTeX → LaTeX → LaTeX
```

### Why are multiple compilations necessary?

- The first LaTeX run identifies citation commands and generates an auxiliary file.
- BibTeX reads the auxiliary file and bibliography database to generate formatted references.
- The next LaTeX run incorporates the generated bibliography.
- The final run resolves citation labels and cross-references.

### Important TeXstudio Note

When using TeXstudio:

1. Select the appropriate LaTeX compiler.
2. Compile the main `.tex` file.
3. Run BibTeX.
4. Compile the main file again, preferably twice.
5. Inspect the generated PDF.

Make sure that the `.bib` file is saved in the same project directory or at the specified path.

## 11. Introduction to Indexing

An index is an alphabetical list of important terms and concepts appearing in a document.

It helps readers locate specific information without searching through the entire document.

LaTeX provides indexing functionality through the MakeIndex program.

### 11.1 Loading the MakeIndex Package

Include the following commands in the preamble:

```latex
\usepackage{makeidx}
\makeindex
```

The `makeidx` package enables index creation, while `\makeindex` activates the indexing process.

### 11.2 Adding Index Entries

The `\index{}` command marks a word or phrase for inclusion in the index.

Example:

```latex
LaTeX is a document preparation system
\index{LaTeX}.
```

The marked term is collected for the generated index.

### 11.3 Printing the Index

The `\printindex` command displays the generated index.

It is generally placed near the end of the document.

```latex
\printindex
```

## 12. Types of Index Entries

MakeIndex supports different types of index entries.

### 12.1 Simple Index Entries

A simple entry adds a term to the index.

```latex
\index{alpha}
```

### 12.2 Subentries

Subentries organise related terms under a common heading.

```latex
\index{gnat!size of}
```

This creates a subentry called `size of` under `gnat`.

### 12.3 Page Ranges

Page ranges can be created by marking the beginning and ending of a range.

```latex
\index{gnus!good|(}
```

At the end of the range:

```latex
\index{gnus!good|)}
```

### 12.4 Cross-references

Index entries can refer readers to related entries.

Example:

```latex
\index{bat|see{bat, at}}
```

This creates a cross-reference directing readers to another index term.

### 12.5 Custom Index Appearance

The `@` symbol allows a different displayed form to be assigned to an index entry.

Example:

```latex
\index{alpha@$\alpha$}
```

This uses `alpha` as the sorting key and displays the Greek letter alpha.

## 13. Complete MakeIndex Example

Consider the following LaTeX document:

```latex
\documentclass[12pt,a4paper]{article}

\usepackage{makeidx}
\makeindex

\begin{document}

\title{Introduction to Indexing}
\author{Student Name}
\date{\today}

\maketitle

\section{Introduction}

LaTeX is a document preparation system.
\index{LaTeX}

It supports mathematical expressions.
\index{Mathematics}

The concept of matrices is important in
technical documents.
\index{Mathematics!Matrices}

\section{References}

Bibliography management is useful
for academic writing.
\index{Bibliography}

\printindex

\end{document}
```

### Compilation Sequence

The MakeIndex workflow requires the following steps:

1. Compile the LaTeX document.
2. Run MakeIndex on the generated index file.
3. Compile the LaTeX document again.

The sequence is:

```text
LaTeX → MakeIndex → LaTeX
```

This generates the alphabetical index and incorporates it into the final PDF.

## 14. Difference Between Bibliography and Index

| Bibliography | Index |
|---|---|
| Lists sources used or cited in a document | Lists important terms and concepts |
| Usually organised according to a citation style | Usually arranged alphabetically |
| Uses BibTeX in the demonstrated workflow | Uses MakeIndex |
| Provides publication details | Provides page references |
| Uses citation keys | Uses index entries |

Both features improve the organisation and usability of academic documents.

## 15. Common Errors and Troubleshooting

| Problem | Possible cause | Solution |
|---|---|---|
| Citation appears as `?` | BibTeX has not been executed correctly | Follow the full compilation sequence |
| Bibliography is missing | Incorrect database filename | Check `\bibliography{}` |
| References are not displayed | Missing or incorrect citation key | Verify the key in the `.bib` file |
| BibTeX cannot find database | `.bib` file is missing or misplaced | Check the project directory |
| Index is missing | MakeIndex has not been executed | Run MakeIndex and recompile |
| Index entries do not appear | Missing `\makeindex` or `\index{}` | Check the preamble and marked terms |
| Incorrect bibliography formatting | Wrong bibliography style | Check `\bibliographystyle{}` |

## 16. Conclusion

Bibliography management and indexing are essential features of professional document preparation.

BibTeX simplifies reference management by storing publication details in external `.bib` files and automatically generating formatted bibliographies.

MakeIndex provides an efficient way to create alphabetical indexes of important terms and concepts.

Understanding their commands and compilation sequences allows users to prepare well-organised academic reports, research papers, and technical publications.

## References

1. Course lecture: Introduction to LaTeX (Continued), Dr. Neeta Nain, MNIT Jaipur.
2. Leslie Lamport, *LaTeX: A Document Preparation System*, 2nd Edition.
3. [Overleaf — Bibliography Management](https://www.overleaf.com/learn/latex/Bibliography_management_with_bibtex)
4. [CTAN — BibTeX](https://ctan.org/pkg/bibtex)
5. [CTAN — MakeIndex](https://ctan.org/pkg/makeindex)

---

*End of Chapter 08*
