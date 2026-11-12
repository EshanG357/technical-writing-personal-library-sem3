
# Advanced Figure Handling in LaTeX

## 1. Introduction

LaTeX provides several methods for inserting, formatting, positioning, and manipulating figures and graphs.

Figures can either be constructed directly using LaTeX commands or created using external graphical software and imported into a document.

This chapter explores external graphics, image formats, scaling, rotation, landscape figures, and subfigures.

## 2. Graphics Formats Supported by LaTeX

Graphics and figures can be created using different software applications and imported into LaTeX documents.

The lecture discusses the following formats:

| Format | Description |
|---|---|
| PS | PostScript graphics format |
| EPS | Encapsulated PostScript format |
| JPEG | Common image format |
| TIFF | Raster image format |
| GIF | Graphics Interchange Format |

### Important Note: Graphics Format Compatibility

The graphics formats supported by LaTeX depend on the
compiler and graphics driver being used.

Traditional LaTeX workflows using DVI and dvips commonly
use EPS graphics.

Modern PDF-based workflows using pdfLaTeX generally support
PDF, PNG and JPEG graphics directly.

When using EPS graphics with pdfLaTeX, conversion to PDF
may be required.

For new projects, PDF, PNG and JPEG are generally more
convenient formats when compatible with the selected
compiler.

Mathematical and scientific graphics software such as Mathematica, Maple, MATLAB, IDL, and Xfig can export figures in PS or EPS formats.

The lecture also discusses converting JPEG, GIF, and TIFF images into PostScript formats before importing them into certain LaTeX workflows.

## 3. Using the graphicx Package

The `graphicx` package provides commands for inserting and manipulating external graphics.

Include the package in the preamble:

```latex
\usepackage{graphicx}
```

The lecture also demonstrates the driver-specific form:

```latex
\usepackage[dvips]{graphicx}
```

The appropriate driver and graphics format depend on the compilation workflow being used.

## 4. Importing External Figures

The `\includegraphics{}` command is used to insert an external image.

Syntax:

```latex
\includegraphics{file_name}
```

Example:

```latex
\begin{figure}[ht]
    \centering
    \includegraphics{matlab.eps}
    \caption{Sample MATLAB Figure}
    \label{fig:matlab}
\end{figure}
```

The image file must be available in the project directory or at the specified path.

## 5. Scaling Figures

The `\scalebox{}` command changes the size of an image or graphical object using a scale factor.

Syntax:

```latex
\scalebox{scale}{content}
```

Example:

```latex
\begin{figure}[ht]
    \centering
    \scalebox{0.5}{
        \includegraphics{matlab.eps}
    }
    \caption{Scaled MATLAB Figure}
    \label{fig:scaled}
\end{figure}
```

A scale factor of `0.5` reduces the dimensions to half their original size.

A scale factor greater than `1` enlarges the object.

## 6. Rotating Figures

Figures can be rotated using the `angle` option of `\includegraphics`.

Syntax:

```latex
\includegraphics[angle=value]{file_name}
```

Example:

```latex
\begin{figure}[h]
    \centering
    \includegraphics[angle=30]{matlab.eps}
    \caption{Rotated Figure}
\end{figure}
```

A positive angle rotates the image counter-clockwise.

## 7. Landscape Figures

Large figures sometimes require landscape orientation to fit properly within a document.

The lecture demonstrates the `rotating` package.

Include:

```latex
\usepackage{rotating}
```

Use the `sidewaysfigure` environment:

```latex
\begin{sidewaysfigure}
    \centering
    \scalebox{0.5}{
        \includegraphics{matlab.eps}
    }
    \caption{Fuel Metabolism}
    \label{fig:landscape}
\end{sidewaysfigure}
```

The `sidewaysfigure` environment rotates the entire figure, making it suitable for large or wide graphical content.

## 8. Creating Subfigures

Subfigures allow multiple related images to be displayed within a single figure environment.

The lecture demonstrates the `subfigure` and `epsfig` packages.

Include:

```latex
\usepackage{subfigure}
\usepackage{epsfig}
```

Example:

```latex
\begin{figure}[h]
    \centering

    \mbox{
        \subfigure[Big]{
            \epsfig{figure=matlab.eps,width=3in}
        }
        \quad
        \subfigure[Small]{
            \epsfig{figure=matlab.eps,width=2in}
        }
    }

    \caption{Fuel Metabolism}
    \label{fig:subfigures}
\end{figure}
```

This example creates two images with individual captions and a common figure caption.

Subfigures are useful when comparing different images, graphs, or stages of an experiment.

**Modern Alternative:**

The `subfigure` package used in older examples is obsolete.

For new documents, the `subcaption` package is generally
recommended.

Example:

```latex
\usepackage{graphicx}
\usepackage{subcaption}

## 9. Figure Positioning and Referencing

The `figure` environment supports positioning preferences.

| Option | Meaning |
|---|---|
| `h` | Approximately here |
| `t` | Top of page |
| `b` | Bottom of page |
| `p` | Dedicated page for figures |

Example:

```latex
\begin{figure}[ht]
    \centering
    \includegraphics[width=0.5\textwidth]{matlab.eps}
    \caption{Example Graph}
    \label{fig:example}
\end{figure}
```

A figure can be referenced using:

```latex
Figure~\ref{fig:example}
```

The `\label{}` command assigns an identifier, while `\ref{}` retrieves the corresponding figure number.

## 10. Complete Example

The following example demonstrates image insertion, scaling, captions, and references.

```latex
\documentclass[12pt,a4paper]{article}

\usepackage{graphicx}
\usepackage{rotating}

\title{Advanced Figure Handling}
\author{Student Name}
\date{\today}

\begin{document}

\maketitle

\section{Introduction}

LaTeX supports external images and graphical objects.

\section{Normal Figure}

\begin{figure}[ht]
    \centering
    \includegraphics[width=0.6\textwidth]{matlab.eps}
    \caption{Original Figure}
    \label{fig:original}
\end{figure}

Figure~\ref{fig:original} shows the imported graphic.

\section{Scaled Figure}

\begin{figure}[ht]
    \centering
    \scalebox{0.5}{
        \includegraphics{matlab.eps}
    }
    \caption{Scaled Figure}
    \label{fig:scaled}
\end{figure}

\section{Landscape Figure}

\begin{sidewaysfigure}
    \centering
    \includegraphics[width=0.7\textwidth]{matlab.eps}
    \caption{Landscape Figure}
    \label{fig:landscape}
\end{sidewaysfigure}

\end{document}
```

Replace `matlab.eps` with an available graphics file. The EPS examples require a compatible compilation workflow; the image formats accepted by the compiler depend on the selected LaTeX engine.

## 11. Conclusion

Advanced figure handling enables authors to include graphical content effectively in technical and scientific documents.

The `graphicx` package provides facilities for image insertion, scaling, and rotation, while the `rotating` package supports landscape figures.

Subfigures allow multiple related graphics to be presented together with individual and common captions.

These techniques improve the organisation and visual quality of academic reports and research documents.

## References

1. Course handout: Creating Figures and Graphs with LaTeX.
2. Leslie Lamport, *LaTeX: A Document Preparation System*, 2nd Edition.
3. [Overleaf — Inserting Images](https://www.overleaf.com/learn/latex/Inserting_Images)
4. [CTAN — graphicx](https://ctan.org/pkg/graphicx)
5. [CTAN — rotating](https://ctan.org/pkg/rotating)

---

*End of Chapter 05*
