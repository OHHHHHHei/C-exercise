# -*- coding: gbk -*-
import numpy as np
import matplotlib.pyplot as plt

# 配置matplotlib显示中文
plt.rcParams['font.sans-serif'] = ['Microsoft YaHei']  # 设置中文字体
plt.rcParams['axes.unicode_minus'] = False  # 解决负号显示问题

# 数据：频率 (kHz) 和 幅度 (V)
frequencies = np.array([1, 2, 3, 6, 10, 15, 20])
amplitudes = np.array([1.0575, 1.32559, 1.5809, 1.7696, 1.8159, 1.7495, 1.4772])

# 绘制幅频特性曲线
plt.figure(figsize=(8, 6))
plt.plot(frequencies, amplitudes, marker='o', color='b', label='幅频特性')

# 添加标签
plt.title('带通滤波器的幅频特性')
plt.xlabel('频率 (kHz)')
plt.ylabel('幅度 (V)')
plt.grid(True)
plt.xscale('linear')
plt.yscale('linear')

# 计算通频带 (fBW)
# 假设-3 dB的幅度约为最大幅度的一半
max_amplitude = np.max(amplitudes)
half_max_amplitude = max_amplitude / np.sqrt(2)  # -3dB对应的幅度值

# 找到交点，即通频带的开始和结束频率
f_start = frequencies[np.where(amplitudes >= half_max_amplitude)[0][0]]
f_end = frequencies[np.where(amplitudes >= half_max_amplitude)[0][-1]]
fBW = f_end - f_start

# 绘制通频带区间
plt.axvspan(f_start, f_end, color='yellow', alpha=0.3, label=f'通频带 (fBW = {fBW} kHz)')

# 显示图例
plt.legend()

# 显示图像
plt.show()

# 输出通频带值
fBW
