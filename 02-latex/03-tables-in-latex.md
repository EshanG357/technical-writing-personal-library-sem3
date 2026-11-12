
# Tables in LaTeX

## 1. Introduction

Tables are used to organise and present information in rows and columns. They make it easier to compare values, display structured information, and summarise data.

LaTeX provides the `tabular` environment for creating tables and offers several commands for controlling borders, alignment, column widths, and cell arrangements.

## 2. Basic Table Structure

The `tabular` environment is the primary environment used to create tables.

### Syntax

```latex
\begin{tabular}{column_format}
    cell1 & cell2 & cell3 \\
    cell4 & cell5 & cell6
\end{tabular}
```

Important symbols:

| Symbol | Purpose |
|---|---|
| `&` | Separates columns |
| `\\` | Ends a row |
| `\hline` | Creates a horizontal line |
| `|` | Creates vertical borders |
| `c` | Centre alignment |
| `l` | Left alignment |
| `r` | Right alignment |
| `p{width}` | Creates a paragraph column of specified width |

### Example

```latex
\begin{center}
\begin{tabular}{c c c}
Name & Subject & Marks \\
Eshan & Mathematics & 90 \\
Rahul & Physics & 85 \\
Aman & Computer Science & 95
\end{tabular}
\end{center}
```

The column format `{c c c}` specifies three centre-aligned columns.

## 3. Creating Table Borders

Borders help visually separate table cells and improve readability.

### 3.1 Horizontal Borders

The `\hline` command inserts a horizontal line across the table.

```latex
\begin{tabular}{c c c}
\hline
Name & Subject & Marks \\
\hline
Eshan & Mathematics & 90 \\
Rahul & Physics & 85 \\
\hline
\end{tabular}
```

### 3.2 Vertical Borders

The vertical bar `|` in the column specification creates vertical borders.

```latex
\begin{tabular}{|c|c|c|}
\hline
Name & Subject & Marks \\
\hline
Eshan & Mathematics & 90 \\
Rahul & Physics & 85 \\
\hline
\end{tabular}
```

### 3.3 Combined Borders

Horizontal and vertical borders can be combined to create a complete grid.

```latex
\begin{tabular}{|l|c|r|}
\hline
Name & Subject & Marks \\
\hline
Eshan & Mathematics & 90 \\
Rahul & Physics & 85 \\
Aman & Computer Science & 95 \\
\hline
\end{tabular}
```

## 4. Column Alignment and Width

LaTeX supports three basic column alignment options:

| Character | Alignment |
|---|---|
| `l` | Left |
| `c` | Centre |
| `r` | Right |

Example:

```latex
\begin{tabular}{|l|c|r|}
\hline
Left & Centre & Right \\
\hline
Apple & Mango & Orange \\
\hline
\end{tabular}
```

### 4.1 Fixed Column Width

The `p{}` specification creates a paragraph column with a fixed width.

```latex
\begin{tabular}{|p{3cm}|p{5cm}|}
\hline
Topic & Description \\
\hline
LaTeX & A document preparation system used for technical writing. \\
\hline
\end{tabular}
```

Text inside a paragraph column wraps automatically when it reaches the specified width.

## 5. Combining Columns Using multicolumn

The `\multicolumn` command allows multiple columns to be combined into one cell.

### Syntax

```latex
\multicolumn{number_of_columns}{alignment}{content}
```

### Example

```latex
\begin{center}
\begin{tabular}{|p{1.5cm}|p{1.5cm}|p{1.5cm}|}
\hline
\multicolumn{3}{|c|}{Books} \\
\hline
Food Name & Author & Publication \\
\hline
Book 1 & Author 1 & P1 \\
Book 1 & Author 2 & P2 \\
Book 1 & Author 3 & P3 \\
\hline
\end{tabular}
\end{center}
```

Here, `\multicolumn{3}{|c|}{Books}` combines three columns into a single centred cell.

## 6. Combining Rows Using multirow

The `multirow` package allows a cell to extend across multiple rows.

First include the package:

```latex
\usepackage{multirow}
```

### Syntax

```latex
\multirow{number_of_rows}{width}{content}
```

### Example

```latex
\begin{center}
\begin{tabular}{|c|c|c|}
\hline
Column 1 & Column 2 & Column 3 \\
\hline
\multirow{3}{*}{Multiple rows}
& Cell 2 & Cell 3 \\
& Cell 5 & Cell 6 \\
& Cell 8 & Cell 9 \\
\hline
\end{tabular}
\end{center}
```

The first cell spans three rows, while the remaining cells contain separate values.

## 7. Combining Rows and Columns

The `multicolumn` and `multirow` commands can be used together to create more complex table structures.

Example:

```latex
\usepackage{multirow}

\begin{center}
\begin{tabular}{|c|c|c|}
\hline
\multicolumn{3}{|c|}{Student Information} \\
\hline
\multirow{2}{*}{Name}
& Subject & Marks \\
\cline{2-3}
& Mathematics & 90 \\
\hline
\end{tabular}
\end{center}
```

The `\cline{i-j}` command draws a horizontal line only across the specified columns.

## 8. Dashed Borders

Dashed horizontal and vertical lines can be created using the `arydshln` package.

Include:

```latex
\usepackage{arydshln}
```

Example:

```latex
\begin{tabular}{|c: c: c|}
\hline
Name & Subject & Marks \\
\hdashline
Eshan & Mathematics & 90 \\
Rahul & Physics & 85 \\
\hline
\end{tabular}
```

Here:
- `:` in the column specification creates dashed vertical rules.
- `\hdashline` creates a dashed horizontal rule.

## 9. Complete Example

The following example combines borders, column alignment, merged columns, and merged rows.

```latex
\documentclass[12pt,a4paper]{article}

\usepackage{multirow}

\begin{document}

\section{Student Performance}

\begin{center}
\begin{tabular}{|c|c|c|}
\hline
\multicolumn{3}{|c|}{Academic Performance} \\
\hline
Student & Subject & Marks \\
\hline
\multirow{2}{*}{Eshan}
& Mathematics & 90 \\
& Physics & 85 \\
\hline
Rahul & Computer Science & 95 \\
\hline
\end{tabular}
\end{center}

\end{document}
```

## 10. Common Errors and Troubleshooting

| Error | Possible cause | Solution |
|---|---|---|
| Misaligned columns | Incorrect use of `&` | Check the number of cells in each row |
| Missing table borders | Missing `\hline` or `|` | Add the required border commands |
| Undefined multirow command | Package not loaded | Include `\usepackage{multirow}` |
| Text overflowing cells | Insufficient column width | Use `p{}` with an appropriate width |
| Incorrect row arrangement | Missing `\\` | Check row-ending commands |

## 11. Conclusion

LaTeX provides flexible table formatting through the `tabular` environment and commands such as `\hline`, `\multicolumn`, and `\multirow`.

These features allow users to create simple tables as well as complex structures with merged cells, different column widths, and customised borders.

## References

1. Course lecture: Exploring Table Styles in LaTeX.
2. Leslie Lamport, *LaTeX: A Document Preparation System*, 2nd Edition.
3. [Overleaf — Tables](https://www.overleaf.com/learn/latex/Tables)
4. [CTAN — multirow](https://ctan.org/pkg/multirow)
5. [CTAN — arydshln](https://ctan.org/pkg/arydshln)

---

*End of Chapter 03*
