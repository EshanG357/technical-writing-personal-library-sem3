# LaTeX Technical Report Example

A compact report demonstrating document structure, formatting, mathematics, tables, figures, labels and references.

## Requirements

A LaTeX distribution such as TeX Live or MiKTeX.

## Compile

In PowerShell or a terminal opened in this directory:

```bash
pdflatex report.tex
pdflatex report.tex
```

Run LaTeX twice so cross-references can resolve. The example uses a framed placeholder figure, so no external image is required.

## Expected output

The generated `report.pdf` contains a title, table of contents, mathematical expressions, a table, a framed figure and cross-references.

The PDF is a generated build artifact and is not committed. See [outputs/README.md](outputs/README.md).
