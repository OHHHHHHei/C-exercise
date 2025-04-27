# -*- coding: gbk -*-
import numpy as np
import matplotlib.pyplot as plt
from matplotlib import rcParams

# 设置中文字体支持
rcParams['font.sans-serif'] = ['SimHei']
rcParams['axes.unicode_minus'] = False

# 定义电压值
U = 220          # 电源电压 (V)
U_L = 199.14     # 镇流器电压 (V)
U_B = 56.01      # 日光灯电压 (V)

# 定义电流值和功率因数
I = 0.1631       # 电流 (A)
cos_phi = 0.41   # 功率因数

# 计算相位角
phi = np.arccos(cos_phi)  # 相位角 (弧度)

# 计算各相量的坐标
# 电源电压 U 作为参考相量
U_x = U
U_y = 0

# 日光灯电压 U_B 与电流同相
U_B_x = U_B
U_B_y = 0

# 镇流器电压 U_L 超前电流 90 度
# 在相量图中，镇流器电压 U_L 的相位角为 90 度，因此其坐标为 (0, U_L)
U_L_x = 0
U_L_y = U_L

# 绘制相量图
plt.figure(figsize=(8, 6))
plt.quiver(0, 0, U_x, U_y, angles='xy', scale_units='xy', scale=1, color='b', label='电源电压 U')
plt.quiver(0, 0, U_B_x, U_B_y, angles='xy', scale_units='xy', scale=1, color='g', label='日光灯电压 U_B')
plt.quiver(U_B_x, U_B_y, U_L_x - U_B_x, U_L_y - U_B_y, angles='xy', scale_units='xy', scale=1, color='r', label='镇流器电压 U_L')

# 添加标注
plt.text(U_x, U_y, f'U = {U} V', fontsize=10, color='b', ha='center')
plt.text(U_B_x, U_B_y, f'U_B = {U_B} V', fontsize=10, color='g', ha='center')
plt.text(U_L_x, U_L_y, f'U_L = {U_L} V', fontsize=10, color='r', ha='center')

# 添加坐标轴
plt.axhline(0, color='k', linewidth=0.5)
plt.axvline(0, color='k', linewidth=0.5)

# 添加图例和标题
plt.legend()
plt.title('日光灯电路相量图')
plt.xlabel('实部 (V)')
plt.ylabel('虚部 (V)')
plt.grid(True)
plt.axis('equal')
plt.xlim(0, U + 20)
plt.ylim(-U_L - 20, U_L + 20)
plt.show()