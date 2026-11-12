# LaTeX Technical Report Example

A compact report demonstrating document structure, formatting, mathematics, tables, figures, labels and references.

## Requirements

A LaTeX distribution such as TeX Live or MiKTeX.

## Compile

In PowerShell or a terminal opened in this directory:

```powershell
pdflatex report.tex
pdflatex report.tex
```

Run LaTeX twice so cross-references can resolve. The example uses a framed placeholder figure, so no external image is required.

## Expected output

The compiled [report.pdf](outputs/report.pdf) contains a title, table of contents, mathematical expressions, a table, a framed figure and cross-references.

The PDF is committed alongside the source. Recompile it whenever you modify `report.tex`.
