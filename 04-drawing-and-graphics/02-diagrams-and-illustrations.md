
# Diagrams and Technical Illustrations

## 1. Introduction

Diagrams and technical illustrations are visual representations used to communicate processes, structures, relationships, and systems.

They simplify complex information and help readers understand how different components interact.

In technical writing, diagrams are frequently used in:
- Engineering reports.
- Software documentation.
- Research papers.
- System specifications.
- User manuals.
- Project presentations.

The Technical Writing Laboratory syllabus introduces drawing applications such as Draw.io and OpenOffice Draw.

## 2. Importance of Diagrams in Technical Communication

Diagrams provide several advantages:

1. Simplify complex information.
2. Explain relationships between components.
3. Represent processes and workflows.
4. Improve document readability.
5. Support technical explanations.
6. Help identify system structure and dependencies.

A well-designed diagram can communicate information more effectively than lengthy textual descriptions.

## 3. Types of Technical Diagrams

Different diagrams are used depending on the information being represented.

### 3.1 Flowcharts

A flowchart represents the sequence of steps involved in a process or algorithm.

It uses standard graphical symbols connected by arrows.

Common flowchart symbols:

| Symbol | Meaning |
|---|---|
| Oval | Start or end |
| Rectangle | Process or operation |
| Diamond | Decision |
| Parallelogram | Input or output |
| Arrow | Direction of flow |

Example: Basic decision-making process.

```text
       Start
         |
         v
    Enter Number
         |
         v
    Number > 0?
       /    \
     Yes     No
      |       |
      v       v
   Positive  Non-positive
      |       |
      +---+---+
          |
          v
         End
```

Flowcharts are useful for explaining:
- Algorithms.
- Decision-making processes.
- Operational procedures.
- Software workflows.

### 3.2 Block Diagrams

A block diagram represents a system using interconnected blocks.

Each block represents a component or functional unit.

Example:

```text
+------------+      +------------+
|   Input    | ---> | Processing |
+------------+      +------------+
                          |
                          v
                    +------------+
                    |   Output   |
                    +------------+
```

Block diagrams are commonly used in:
- Electronics.
- Control systems.
- Signal processing.
- Computer architecture.
- Engineering systems.

### 3.3 Process Diagrams

Process diagrams represent the sequence of activities involved in completing a task.

They help illustrate workflows and operational procedures.

Example:

```text
Requirement
     |
     v
  Planning
     |
     v
 Development
     |
     v
   Testing
     |
     v
 Deployment
```

### 3.4 System Architecture Diagrams

System architecture diagrams illustrate the major components of a system and their interactions.

Example:

```text
+-------------+
|   Client    |
+-------------+
       |
       v
+-------------+
|  Frontend   |
+-------------+
       |
       v
+-------------+
|  Backend    |
+-------------+
       |
       v
+-------------+
|  Database   |
+-------------+
```

These diagrams are useful for describing software applications and information systems.

## 4. Introduction to Draw.io

Draw.io, also known as diagrams.net, is a diagramming application used to create and edit visual representations of systems and processes.

It can be used through a web browser or desktop application.

Official website:

https://www.drawio.com/

### 4.1 Key Features

- Creating flowcharts.
- Designing block diagrams.
- Building network diagrams.
- Creating UML diagrams.
- Designing process workflows.
- Adding connectors and annotations.
- Importing and exporting diagrams.
- Saving diagrams to supported cloud storage services.

### 4.2 Creating a New Diagram

The general workflow is:

1. Open diagrams.net.
2. Select a storage location.
3. Create a blank diagram.
4. Choose the required shapes.
5. Arrange the objects.
6. Connect related components.
7. Add labels and annotations.
8. Save or export the diagram.

### 4.3 Shapes and Connectors

Draw.io provides different shape libraries.

Common elements include:
- Rectangles.
- Circles.
- Diamonds.
- Arrows.
- Flowchart symbols.
- UML shapes.
- Network components.

Connectors establish relationships between graphical objects.

### 4.4 Diagram Organisation

A diagram should be arranged so that its structure is easy to understand.

Useful practices include:
- Aligning related objects.
- Maintaining consistent spacing.
- Using meaningful labels.
- Avoiding unnecessary crossing connectors.
- Grouping related components.
- Maintaining a logical flow direction.

## 5. Using OpenOffice Draw for Diagrams

OpenOffice Draw can also be used to create technical diagrams.

Its drawing tools support:
- Shapes.
- Lines and connectors.
- Text boxes.
- Arrows.
- Grouping.
- Object alignment.

A basic workflow involves:

1. Creating a new drawing.
2. Adding graphical shapes.
3. Connecting the shapes.
4. Adding descriptive labels.
5. Adjusting object sizes and positions.
6. Exporting the diagram.

It is particularly useful for general-purpose technical illustrations and simple process diagrams.

## 6. Common Diagram Design Principles

### 6.1 Logical Flow

Arrange elements in a logical sequence.

For example, a flowchart should generally proceed from start to end without unnecessary directional changes.

### 6.2 Consistent Shapes

Use consistent symbols for similar types of operations.

### 6.3 Meaningful Labels

Use concise labels that clearly describe the purpose of each component.

### 6.4 Appropriate Connectors

Use arrows and connectors to show the correct relationships between objects.

### 6.5 Visual Hierarchy

Important components should be visually distinguishable from supporting information.

### 6.6 Avoiding Clutter

Avoid excessive colours, unnecessary shapes, and overlapping connections.

## 7. Exporting and Sharing Diagrams

Diagrams can be exported in several formats depending on their intended use.

| Format | Application |
|---|---|
| PNG | Embedding in reports and presentations |
| JPEG | Sharing raster images |
| SVG | Scalable vector graphics |
| PDF | Printing and document distribution |
| XML | Editable diagram data in supported tools |

The native editable file should also be retained whenever future modifications may be required.

For example, Draw.io diagrams can be saved as editable `.drawio` files.

## 8. Integrating Diagrams into Technical Documents

Diagrams can be included in LaTeX, Word documents, Google Docs and presentations.

For LaTeX, the `graphicx` package is commonly used.

Example:

```latex
\documentclass{article}

\usepackage{graphicx}

\begin{document}

\section{System Architecture}

The system consists of several interconnected components.

\begin{figure}[ht]
    \centering
    \includegraphics[width=0.8\textwidth]{architecture.png}
    \caption{System Architecture Diagram}
    \label{fig:architecture}
\end{figure}

Figure~\ref{fig:architecture} illustrates
the overall system structure.

\end{document}
```

The image must be available in the project directory or at the specified path.

## 9. Practical Exercise: Creating a Flowchart

### Objective

Create a flowchart illustrating a simple student result evaluation process.

### Problem Statement

A program accepts a student's marks and determines whether the student has passed or failed.

Assume the passing threshold is 40 marks.

### Required Flowchart

```text
         Start
           |
           v
      Enter Marks
           |
           v
       Marks >= 40?
         /     \
       Yes      No
        |        |
        v        v
      Passed   Failed
        |        |
        +---+----+
            |
            v
           End
```

### Tasks

1. Open Draw.io.
2. Create a blank diagram.
3. Add start and end symbols.
4. Add an input/output symbol for entering marks.
5. Add a decision diamond.
6. Add two branches representing pass and fail.
7. Connect the elements using arrows.
8. Add appropriate labels.
9. Export the completed diagram as PNG and PDF.

### Expected Outcome

A properly structured flowchart representing the student result evaluation process.

## 10. Practical Exercise: System Block Diagram

### Objective

Create a block diagram illustrating a basic computer system.

### Components

- Input unit.
- Processing unit.
- Memory unit.
- Output unit.

### Tasks

1. Create four labelled blocks.
2. Arrange them logically.
3. Connect the blocks using arrows.
4. Use consistent colours and shapes.
5. Export the diagram.

### Expected Outcome

A block diagram showing the major functional units of a computer system and their relationships.

## 11. Common Diagram Design Mistakes

| Mistake | Improvement |
|---|---|
| Too many colours | Use a limited colour palette |
| Unclear labels | Use short descriptive labels |
| Overlapping shapes | Improve spacing and alignment |
| Confusing connectors | Use clear directional arrows |
| Inconsistent symbols | Follow standard diagram conventions |
| Excessive information | Divide complex diagrams into smaller diagrams |
| Poor resolution | Export using an appropriate format and resolution |

## 12. Conclusion

Diagrams and technical illustrations are essential for communicating complex technical information.

Flowcharts explain processes, block diagrams represent system components, and architecture diagrams illustrate relationships between different parts of a system.

Tools such as Draw.io and OpenOffice Draw provide accessible methods for creating these visual representations.

Applying consistent design principles helps produce clear, accurate, and professional technical diagrams.

## References

1. Technical Writing Laboratory syllabus — Drawing Software.
2. [Draw.io Official Website](https://www.drawio.com/)
3. [Draw.io Documentation](https://www.drawio.com/doc/)
4. [Apache OpenOffice Draw](https://www.openoffice.org/product/draw.html)
5. [Inkscape Documentation](https://inkscape-manuals.readthedocs.io/)

---

*End of Chapter 02*
