
# Graphics Formats and Export

## 1. Introduction

Graphics file formats determine how images and illustrations are stored, represented, and shared.

Different formats are designed for different purposes.

Some formats store images as pixels, while others represent graphical objects using mathematical descriptions.

Understanding graphics formats is important when creating technical documents, exporting diagrams, and inserting images into LaTeX.

## 2. Classification of Graphics Formats

Graphics formats can broadly be classified into two categories:

1. Raster formats.
2. Vector formats.

### 2.1 Raster Formats

Raster formats store images as grids of pixels.

Common raster formats include:
- PNG
- JPEG
- GIF
- TIFF
- BMP

### 2.2 Vector Formats

Vector formats represent images through geometric objects and mathematical paths.

Common vector formats include:
- SVG
- EPS
- PDF (when containing vector graphics)
- PS

Vector formats are particularly useful for technical illustrations because they can generally be enlarged without losing geometric sharpness.

## 3. Common Raster Image Formats

### 3.1 PNG

PNG stands for Portable Network Graphics.

Characteristics:
- Supports lossless compression.
- Supports transparency.
- Suitable for diagrams and screenshots.
- Preserves sharp edges and text effectively.

Applications:
- Technical diagrams.
- Screenshots.
- Graphs.
- Transparent illustrations.

### 3.2 JPEG

JPEG stands for Joint Photographic Experts Group.

Characteristics:
- Uses lossy compression.
- Suitable for photographs.
- Usually produces relatively small files.
- Repeated editing and saving can reduce image quality.

Applications:
- Photographs.
- Scanned images.
- Realistic visual content.

### 3.3 GIF

GIF stands for Graphics Interchange Format.

Characteristics:
- Supports indexed colours.
- Supports simple animation.
- Supports transparency.
- Limited colour representation compared with modern full-colour formats.

Applications:
- Simple animated graphics.
- Small web illustrations.
- Basic graphical elements.

### 3.4 TIFF

TIFF stands for Tagged Image File Format.

Characteristics:
- Supports high-quality raster images.
- Can support lossless compression.
- Often used in scanning and publishing workflows.
- Can produce relatively large files.

Applications:
- High-quality scanned images.
- Publishing.
- Scientific image storage.

### 3.5 BMP

BMP stands for Bitmap Image File.

Characteristics:
- Stores pixel-based image information.
- Can produce relatively large files.
- Supports different colour depths.
- Commonly associated with Windows graphics.

Applications:
- Basic image storage.
- Legacy graphical workflows.

## 4. Common Vector Graphics Formats

### 4.1 SVG

SVG stands for Scalable Vector Graphics.

It is an XML-based format used to describe two-dimensional vector graphics.

Characteristics:
- Resolution-independent scaling.
- Editable graphical elements.
- Supports paths, shapes and text.
- Suitable for web applications.
- Supports animation and interaction.

Applications:
- Logos.
- Icons.
- Technical diagrams.
- Web graphics.
- Vector illustrations.

### 4.2 EPS

EPS stands for Encapsulated PostScript.

It is a graphics format historically used for exchanging and embedding illustrations in professional publishing and LaTeX workflows.

Characteristics:
- Based on PostScript.
- Suitable for vector illustrations.
- Can be used in traditional LaTeX graphics workflows.
- Supports embedding graphical content.

Applications:
- Scientific illustrations.
- Technical figures.
- Publishing workflows.
- Traditional LaTeX documents.

### 4.3 PS

PS stands for PostScript.

It is a page description language used to describe text, graphics, and page layouts.

Characteristics:
- Describes graphical and textual content.
- Commonly associated with printing.
- Supports vector graphics.
- Used in traditional scientific publishing workflows.

### 4.4 PDF

PDF stands for Portable Document Format.

It is used to represent documents consistently across different systems.

Characteristics:
- Preserves document layout.
- Supports text and images.
- Can contain vector graphics.
- Supports embedded fonts.
- Suitable for printing and distribution.

Applications:
- Technical reports.
- Research papers.
- Academic assignments.
- Exported diagrams and illustrations.

## 5. Comparison of Graphics Formats

| Format | Type | Compression | Common application |
|---|---|---|---|
| PNG | Raster | Lossless | Diagrams and screenshots |
| JPEG | Raster | Lossy | Photographs |
| GIF | Raster | Lossless/indexed colour | Simple animations |
| TIFF | Raster | Depends on settings | High-quality images |
| BMP | Raster | Usually uncompressed | Basic image storage |
| SVG | Vector | XML-based | Scalable illustrations |
| EPS | Vector-oriented | PostScript-based | Technical publishing |
| PS | Page description | PostScript-based | Printing and graphics |
| PDF | Document format | Depends on content | Reports and distribution |

PDF is a document container and can contain both raster and vector content.

Similarly, some formats may support different kinds of embedded content depending on how they are produced.

## 6. Image Resolution and Quality

Image resolution describes the amount of image detail represented in a raster image.

It is commonly expressed using pixels or dots per inch (DPI).

### 6.1 Pixels

A pixel is the smallest addressable element of a digital raster image.

For example, an image with dimensions of 1920 × 1080 contains:

\[
1920 \times 1080 = 2,073,600
\]

pixels.

### 6.2 DPI

DPI stands for Dots Per Inch.

It describes the number of printed dots within one inch.

It is commonly used when discussing print output.

### 6.3 Image Scaling

Scaling changes the dimensions of an image.

For raster images, excessive enlargement can reveal individual pixels and reduce visual quality.

Vector images can generally be scaled without losing their geometric sharpness.

### 6.4 Choosing Appropriate Resolution

When preparing graphics:
- Use sufficiently high-resolution images.
- Avoid unnecessary enlargement of raster graphics.
- Check readability after exporting.
- Select an appropriate resolution for printing or screen display.

## 7. Converting Between Graphics Formats

Different applications support different graphics formats.

Conversion allows graphical content to be used in applications that may not directly support the original format.

### 7.1 Raster to Vector or PostScript Workflows

The supplied LaTeX figure-handling lecture discusses converting GIF, JPEG and TIFF images into PostScript formats using tools such as XV and Adobe Photoshop.

It also mentions `jpeg2ps` as a JPEG-to-PostScript conversion utility.

The converted document should be checked to ensure that the final image quality and resolution are acceptable.

**Important:** Converting a raster image into an EPS or PS container does not automatically turn its pixel content into true vector graphics.

### 7.2 Vector to Raster Conversion

Vector illustrations can be exported as PNG or JPEG when raster images are required.

For example, an SVG diagram can be exported as PNG for insertion into a document or presentation.

### 7.3 Conversion Tools

| Tool | Application |
|---|---|
| Inkscape | Vector graphics import and export |
| ImageMagick | Image conversion and manipulation |
| Adobe Photoshop | Raster image editing and conversion |
| GIMP | Raster image editing and export |
| LibreOffice Draw | Diagram and graphics export |

The choice of conversion tool depends on the original format and required output.

## 8. Exporting Graphics from Drawing Software

Drawing applications provide export facilities for saving graphical content in different formats.

### 8.1 Exporting from Inkscape

A general export workflow:

1. Open the SVG drawing.
2. Select the required drawing or page area.
3. Open the export interface.
4. Select the required format.
5. Configure dimensions or resolution where applicable.
6. Export the file.

### 8.2 Exporting from Draw.io

A general export workflow:

1. Open the diagram.
2. Select the export option.
3. Choose PNG, JPEG, SVG or PDF.
4. Adjust available export settings.
5. Save the exported diagram.

Retain the editable `.drawio` source file whenever future modifications may be required.

### 8.3 Exporting from Matplotlib

Matplotlib provides the `savefig()` function.

Example:

```python
import matplotlib.pyplot as plt

x = [1, 2, 3, 4, 5]

y = [2, 4, 6, 8, 10]

plt.plot(x, y)

plt.title("Sample Graph")

plt.savefig("graph.png", dpi=300)

plt.savefig("graph.pdf")

plt.savefig("graph.svg")

plt.show()
```

This generates three output files in different formats.

## 9. Importing Graphics into LaTeX

The supplied course material explains how externally created figures can be incorporated into LaTeX documents.

The `graphicx` package provides commands for importing and manipulating graphics.

### 9.1 Loading the Package

Include the following in the preamble:

```latex
\usepackage{graphicx}
```

### 9.2 Inserting an Image

The `\includegraphics{}` command inserts an external image.

Example:

```latex
\includegraphics{example.png}
```

The image should be available in the project directory or at the specified path.

### 9.3 Scaling an Image

The `scale` option adjusts the image size.

```latex
\includegraphics[scale=0.5]{example.png}
```

Alternatively, the image width can be specified relative to the text width.

```latex
\includegraphics[width=0.5\textwidth]{example.png}
```

### 9.4 Rotating an Image

The `angle` option rotates the image.

```latex
\includegraphics[angle=30]{example.png}
```

A positive angle rotates the image counter-clockwise.

### 9.5 Using the Figure Environment

The `figure` environment provides captions, positioning, and cross-referencing.

```latex
\begin{figure}[ht]
    \centering

    \includegraphics[width=0.6\textwidth]{example.png}

    \caption{Sample Technical Illustration}

    \label{fig:sample}

\end{figure}
```

A figure can be referenced elsewhere using:

```latex
Figure~\ref{fig:sample}
```

### 9.6 Supported Formats and Compilation Engines

The graphics formats supported by LaTeX depend on the compilation engine and workflow.

| Compiler | Commonly supported formats |
|---|---|
| pdfLaTeX | PDF, PNG, JPEG |
| XeLaTeX | PDF, PNG, JPEG |
| LuaLaTeX | PDF, PNG, JPEG |
| Traditional LaTeX with DVI workflow | EPS |

The traditional lecture examples use PostScript and EPS graphics with the `dvips` workflow.

For modern pdfLaTeX workflows, PNG, JPEG and PDF are generally more convenient.

## 10. Common Problems When Importing Graphics

| Problem | Possible cause | Solution |
|---|---|---|
| File not found | Incorrect filename or path | Check the image location |
| Unsupported graphics format | Incompatible compilation engine | Convert to a supported format |
| Image appears too large | Incorrect dimensions | Adjust width or scale |
| Image appears blurry | Low-resolution raster image | Use a higher-resolution source |
| Image is rotated incorrectly | Incorrect angle | Review the rotation value |
| Figure appears in an unexpected position | Floating placement behaviour | Adjust placement preferences |
| Missing transparency | Unsupported format or export setting | Use PNG or an appropriate PDF/SVG workflow |

## 11. Choosing the Right Graphics Format

The appropriate format depends on the intended application.

| Requirement | Recommended format |
|---|---|
| Technical diagrams | SVG or PDF |
| Screenshots | PNG |
| Photographs | JPEG |
| Transparent illustrations | PNG or SVG |
| Scalable logos | SVG |
| Printing and document distribution | PDF |
| Traditional PostScript LaTeX workflow | EPS |
| Editable source illustrations | SVG or native application format |

Always retain the original editable source file where possible.

## 12. Practical Exercise: Exporting and Importing a Figure

### Objective

Create a technical diagram and incorporate it into a LaTeX document.

### Tasks

1. Create a block diagram using Inkscape or Draw.io.
2. Save the original editable file.
3. Export the diagram as PNG.
4. Export another copy as PDF or SVG.
5. Compare the exported versions.
6. Insert the PNG or PDF into a LaTeX document using `graphicx`.
7. Add a caption and label.
8. Compile the document and inspect the output.

### Expected Outcome

A technical document containing an externally created and correctly formatted illustration.

## 13. Conclusion

Graphics formats determine how visual information is stored, edited, exported, and shared.

Raster formats such as PNG and JPEG are commonly used for pixel-based images, while vector formats such as SVG and EPS are useful for scalable technical illustrations.

Understanding resolution, conversion, export settings, and LaTeX integration helps maintain graphical quality throughout the technical documentation process.

## References

1. Technical Writing course syllabus — Drawing Software and Graph Plotting Software.
2. Technical Writing Laboratory syllabus — Drawing Software and Matplotlib.
3. Course lecture: Introduction to LaTeX (Colours, Figures and Picture Environment).
4. Course handout: Creating Figures and Graphs with LaTeX.
5. [Inkscape](https://inkscape.org/)
6. [Matplotlib](https://matplotlib.org/)
7. [LaTeX Project](https://www.latex-project.org/)
8. [Overleaf — Inserting Images](https://www.overleaf.com/learn/latex/Inserting_Images)

---

*End of Chapter 04*
