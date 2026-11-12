"""Generate simple line, bar and scatter plots using Matplotlib."""

import matplotlib.pyplot as plt

# Line plot
x = list(range(0, 11))
y = [value ** 2 for value in x]
plt.plot(x, y, marker="o", label="y = x^2")
plt.title("Line Plot")
plt.xlabel("x")
plt.ylabel("y")
plt.grid(True)
plt.legend()
plt.tight_layout()
plt.savefig("line_plot.png")
plt.close()

# Bar chart
categories = ["A", "B", "C", "D"]
values = [12, 19, 7, 15]
plt.bar(categories, values)
plt.title("Bar Chart")
plt.xlabel("Category")
plt.ylabel("Value")
plt.tight_layout()
plt.savefig("bar_chart.png")
plt.close()

# Scatter plot
study_hours = [1, 2, 3, 4, 5, 6]
scores = [45, 52, 61, 68, 76, 85]
plt.scatter(study_hours, scores)
plt.title("Study Hours vs Score")
plt.xlabel("Study Hours")
plt.ylabel("Score")
plt.tight_layout()
plt.savefig("scatter_plot.png")
plt.close()

print("Generated line_plot.png, bar_chart.png and scatter_plot.png")
