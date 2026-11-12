set terminal pngcairo size 900,600
set output "sine.png"
set title "Sine and Cosine Functions"
set xlabel "x"
set ylabel "y"
set grid
set key outside
plot sin(x) title "sin(x)" with lines, cos(x) title "cos(x)" with lines
