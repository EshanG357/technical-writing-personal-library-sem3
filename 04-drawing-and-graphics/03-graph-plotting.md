
# Graph Plotting Software

## 1. Introduction

Graph plotting software is used to represent numerical data and mathematical relationships visually.

Graphs help identify patterns, trends, distributions, and relationships between variables.

They are widely used in scientific research, engineering, mathematics, statistics, and data analysis.

The Technical Writing syllabus introduces graph plotting software such as GNUPlot, while the laboratory syllabus specifically mentions Matplotlib in Python.

## 2. Importance of Graph Plotting

Graphs provide several advantages:

1. Simplify the interpretation of numerical data.
2. Help identify trends and patterns.
3. Allow comparison between datasets.
4. Illustrate mathematical functions.
5. Support scientific and engineering analysis.
6. Improve the presentation of experimental results.

## 3. Types of Graphs

Different graph types are suitable for different forms of information.

### 3.1 Line Graph

A line graph represents changes in a variable across a continuous range.

Applications:
- Temperature variation.
- Speed over time.
- Population growth.
- Experimental measurements.

### 3.2 Bar Graph

A bar graph compares quantities across different categories.

Applications:
- Comparing student marks.
- Comparing product sales.
- Representing categorical data.

### 3.3 Scatter Plot

A scatter plot represents individual observations as points on a coordinate plane.

Applications:
- Studying relationships between variables.
- Analysing correlations.
- Visualising experimental observations.

### 3.4 Histogram

A histogram represents the frequency distribution of numerical data.

It is commonly used in statistical analysis.

### 3.5 Mathematical Function Plot

Mathematical functions can be plotted to understand their behaviour.

For example:

\[
y=x^2
\]

A graph of this function produces a parabola.

## 4. GNUPlot

GNUPlot is a command-line and interactive graph plotting utility used to generate two-dimensional and three-dimensional plots.

It is commonly used in mathematics, science and engineering.

Official website:

http://www.gnuplot.info/

### 4.1 Key Features

- Two-dimensional plotting.
- Three-dimensional plotting.
- Mathematical function plotting.
- Plotting data from files.
- Graph customisation.
- Labels and legends.
- Multiple plotting styles.
- Exporting graphs into different formats.

### 4.2 Basic GNUPlot Syntax

GNUPlot commands can be entered directly into its interactive terminal.

Example:

```gnuplot
plot x
```

This generates a straight-line graph representing:

\[
y=x
\]

### 4.3 Plotting a Mathematical Function

Example:

```gnuplot
plot x**2
```

This plots:

\[
y=x^2
\]

Another example:

```gnuplot
plot sin(x)
```

This plots the sine function.

GNUPlot supports mathematical operators and functions such as:

- `sin(x)`
- `cos(x)`
- `tan(x)`
- `sqrt(x)`
- `log(x)`
- `exp(x)`

### 4.4 Plotting Multiple Functions

Multiple mathematical functions can be plotted in the same graph.

Example:

```gnuplot
plot x, x**2, x**3
```

This displays three functions:

\[
y=x,\qquad y=x^2,\qquad y=x^3
\]

Different line styles can be used to distinguish the functions.

### 4.5 Setting the Graph Range

The `set xrange` and `set yrange` commands control the visible graph range.

Example:

```gnuplot
set xrange [-10:10]
set yrange [-5:20]

plot x**2
```

This restricts the displayed graph to the specified ranges.

### 4.6 Adding Titles and Labels

GNUPlot allows titles and axis labels to be added.

Example:

```gnuplot
set title "Quadratic Function"

set xlabel "X Axis"

set ylabel "Y Axis"

plot x**2
```

A legend can be controlled using the `title` option.

```gnuplot
plot x**2 title "y = x squared"
```

### 4.7 Plotting Data from a File

GNUPlot can read numerical data stored in external files.

Consider a file named `data.txt`:

```text
1 10
2 20
3 30
4 40
5 50
```

Each row contains two numerical values representing x and y coordinates.

To plot the data:

```gnuplot
plot "data.txt" using 1:2 with linespoints
```

Explanation:

- `using 1:2` selects the first and second columns.
- `with linespoints` displays connected points.
- The file contains the data to be plotted.

### 4.8 Exporting Graphs

GNUPlot supports exporting graphs into different output formats.

For example, to generate a PNG image:

```gnuplot
set terminal pngcairo

set output "graph.png"

plot x**2

set output
```

The generated graph is saved as `graph.png`.

## 5. Matplotlib in Python

Matplotlib is a Python library used for creating static, animated, and interactive visualisations.

It is widely used in scientific computing, data analysis, machine learning and research.

Official website:

https://matplotlib.org/

### 5.1 Key Features

- Line graphs.
- Bar charts.
- Scatter plots.
- Histograms.
- Subplots.
- Graph annotations.
- Customised axes and legends.
- Saving figures in different formats.

### 5.2 Installing Matplotlib

Matplotlib can be installed using pip:

```bash
pip install matplotlib
```

It is commonly used alongside NumPy and Pandas.

### 5.3 Importing Matplotlib

The pyplot module provides a MATLAB-like interface for creating plots.

```python
import matplotlib.pyplot as plt
```

The alias `plt` is conventionally used for `matplotlib.pyplot`.

## 6. Creating a Basic Line Graph

Example:

```python
import matplotlib.pyplot as plt

x = [1, 2, 3, 4, 5]

y = [10, 20, 30, 40, 50]

plt.plot(x, y)

plt.show()
```

Explanation:

- `x` contains the horizontal-axis values.
- `y` contains the vertical-axis values.
- `plt.plot()` creates the line graph.
- `plt.show()` displays the graph.

## 7. Customising a Graph

Matplotlib provides commands for improving the appearance and readability of plots.

Example:

```python
import matplotlib.pyplot as plt

x = [1, 2, 3, 4, 5]

y = [10, 20, 30, 40, 50]

plt.plot(x, y, marker='o', label='Data')

plt.title("Sample Line Graph")

plt.xlabel("X Axis")

plt.ylabel("Y Axis")

plt.legend()

plt.grid(True)

plt.show()
```

Important commands:

| Command | Purpose |
|---|---|
| `plt.title()` | Adds a graph title |
| `plt.xlabel()` | Labels the horizontal axis |
| `plt.ylabel()` | Labels the vertical axis |
| `plt.legend()` | Displays a legend |
| `plt.grid()` | Displays grid lines |
| `plt.show()` | Displays the graph |

## 8. Different Types of Plots Using Matplotlib

### 8.1 Line Plot

The `plt.plot()` function creates a line graph.

```python
import matplotlib.pyplot as plt

x = [1, 2, 3, 4, 5]

y = [2, 4, 6, 8, 10]

plt.plot(x, y)

plt.title("Line Graph")

plt.show()
```

### 8.2 Bar Chart

The `plt.bar()` function creates a bar chart.

```python
import matplotlib.pyplot as plt

subjects = ["Maths", "Physics", "CS"]

marks = [90, 85, 95]

plt.bar(subjects, marks)

plt.title("Subject-wise Marks")

plt.xlabel("Subjects")

plt.ylabel("Marks")

plt.show()
```

### 8.3 Scatter Plot

The `plt.scatter()` function creates a scatter plot.

```python
import matplotlib.pyplot as plt

x = [1, 2, 3, 4, 5]

y = [5, 8, 6, 11, 14]

plt.scatter(x, y)

plt.title("Scatter Plot")

plt.xlabel("X Values")

plt.ylabel("Y Values")

plt.show()
```

### 8.4 Histogram

The `plt.hist()` function creates a histogram.

```python
import matplotlib.pyplot as plt

marks = [45, 56, 67, 78, 89, 90, 67, 75, 80]

plt.hist(marks, bins=5)

plt.title("Marks Distribution")

plt.xlabel("Marks")

plt.ylabel("Frequency")

plt.show()
```

Histograms help understand the distribution of numerical data.

## 9. Plotting Mathematical Functions Using Matplotlib

NumPy can be used to generate numerical values for mathematical functions.

Install NumPy if required:

```bash
pip install numpy
```

Example:

```python
import numpy as np

import matplotlib.pyplot as plt

x = np.linspace(-10, 10, 100)

y = x**2

plt.plot(x, y)

plt.title("Quadratic Function")

plt.xlabel("X")

plt.ylabel("Y")

plt.grid(True)

plt.show()
```

Explanation:

- `np.linspace()` generates evenly spaced values.
- `x**2` calculates the square of each value.
- `plt.plot()` generates the graph.

The resulting plot represents:

\[
y=x^2
\]

## 10. Saving Graphs in Matplotlib

The `savefig()` function saves a generated graph to a file.

Example:

```python
import matplotlib.pyplot as plt

x = [1, 2, 3, 4]

y = [2, 4, 6, 8]

plt.plot(x, y)

plt.title("Sample Graph")

plt.savefig("graph.png", dpi=300)

plt.show()
```

The graph is saved as `graph.png`.

Common output formats include:

- PNG
- JPEG
- PDF
- SVG
- EPS

The resolution of raster outputs can be controlled using the `dpi` parameter.

## 11. GNUPlot vs Matplotlib

Both tools are useful for scientific and mathematical graph plotting.

| Feature | GNUPlot | Matplotlib |
|---|---|---|
| Type | Plotting utility | Python plotting library |
| Interface | Command-line and interactive | Python programming interface |
| Mathematical functions | Supported | Supported |
| Data file plotting | Supported | Supported through Python data handling |
| Graph types | 2D and 3D | Multiple 2D and 3D visualisations |
| Customisation | Extensive | Extensive |
| Integration | Scientific tools and scripts | Python ecosystem |
| Automation | Scripts | Python programs |

GNUPlot is useful for direct mathematical plotting, while Matplotlib is particularly useful when visualisation is part of a larger Python data-analysis workflow.

## 12. Best Practices for Graph Plotting

1. Provide meaningful graph titles.
2. Label both axes clearly.
3. Include units wherever applicable.
4. Use appropriate graph types.
5. Avoid unnecessary visual elements.
6. Use legends when multiple datasets are plotted.
7. Select suitable axis ranges.
8. Ensure that labels remain readable.
9. Export graphs in appropriate formats.
10. Preserve the underlying data used to generate the graph.

## 13. Practical Exercise 1: Mathematical Function Plotting

### Objective

Plot the following mathematical functions using GNUPlot or Matplotlib:

\[
y=x,\qquad y=x^2,\qquad y=x^3
\]

### Tasks

1. Generate values for the functions.
2. Plot all three functions.
3. Add appropriate labels.
4. Add a legend.
5. Set suitable axis limits.
6. Save the graph as an image.

### Expected Outcome

A graph comparing three mathematical functions over a common range.

## 14. Practical Exercise 2: Student Performance Visualisation

### Objective

Represent student marks using different graph types.

Consider the following dataset:

| Subject | Marks |
|---|---:|
| Mathematics | 90 |
| Physics | 85 |
| Computer Science | 95 |
| Chemistry | 80 |
| English | 88 |

### Tasks

1. Create a bar chart.
2. Add a graph title.
3. Label the axes.
4. Display the values clearly.
5. Save the graph as PNG or PDF.

### Expected Outcome

A labelled bar chart comparing performance across different subjects.

## 15. Practical Exercise 3: Plotting Data from a File

### Objective

Use GNUPlot or Python to plot data stored in an external file.

Create a file named `temperature.txt`:

```text
1 25
2 27
3 29
4 28
5 31
6 33
```

The first column represents time intervals, and the second column represents temperature.

### Tasks

1. Load the data from the file.
2. Plot the values.
3. Add suitable axis labels.
4. Add a title.
5. Export the graph.

### Expected Outcome

A line graph illustrating temperature variation over time.

## 16. Conclusion

Graph plotting software is an important component of scientific and technical communication.

GNUPlot provides an efficient environment for plotting mathematical functions and numerical datasets, while Matplotlib offers extensive visualisation capabilities within the Python ecosystem.

Understanding graph types, plot customisation, data handling, and export options enables users to communicate numerical information effectively.

## References

1. Technical Writing course syllabus — Graph Plotting Software.
2. Technical Writing Laboratory syllabus — Matplotlib in Python.
3. [GNUPlot Official Website](http://www.gnuplot.info/)
4. [GNUPlot Documentation](http://www.gnuplot.info/documentation.html)
5. [Matplotlib Official Documentation](https://matplotlib.org/stable/)
6. [Matplotlib Tutorials](https://matplotlib.org/stable/tutorials/)

---

*End of Chapter 03*
