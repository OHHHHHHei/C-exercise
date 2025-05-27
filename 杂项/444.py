# -*- coding: gbk -*-
import matplotlib.pyplot as plt
import numpy as np

# Data from the table (same as before)
U1 = np.array([12, 16, 22, 27, 33, 36, 40, 43])
I1 = np.array([0.056, 0.067, 0.085, 0.105, 0.166, 0.208, 0.288, 0.355])

# Set up Matplotlib to display Chinese characters correctly
plt.rcParams['font.sans-serif'] = ['SimHei']  # Use SimHei font
plt.rcParams['axes.unicode_minus'] = False  # Ensure minus signs are displayed correctly

# Create the figure and axes
plt.figure(figsize=(8, 6))

# Plot I1 vs U1 (Current on X-axis, Voltage on Y-axis)
plt.plot(I1, U1, marker='o', linestyle='-')

# Set titles and labels in Chinese
plt.title('变压器空载I-U特性曲线 (Transformer No-Load I-U Characteristic)')
plt.xlabel('空载电流 I0 (A)')
plt.ylabel('一次侧电压 U1 (V)')

# Add grid
plt.grid(True)

# Show the plot
plt.show()