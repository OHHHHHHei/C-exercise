# -*- coding: gbk -*-
import numpy as np
import matplotlib.pyplot as plt

# ������������
plt.rcParams['font.sans-serif'] = ['SimHei']
plt.rcParams['axes.unicode_minus'] = False

# ��ͨ�˲�������
f_high = np.array([1, 3, 6, 7.97, 10, 15, 20])
U_high = np.array([0.26438, 0.7373, 1.2203, 1.414, 1.539, 1.7042, 1.7757])

# ��ͨ�˲�������
f_low = np.array([1, 3, 6, 7.05, 10, 15, 20])
U_low = np.array([1.9751, 1.8359, 1.5195, 1.414, 1.1497, 0.8487, 0.6633])

# ����ͼ��
plt.figure(figsize=(12, 6))

# ֱ�ӻ���ԭʼ���ݵ������
plt.plot(f_high, U_high, 'o-', label='��ͨ�˲���', color='#FF6B6B', linewidth=2, markersize=6)
plt.plot(f_low, U_low, 'o-', label='��ͨ�˲���', color='#4D96FF', linewidth=2, markersize=6)

# ��ע��ֹƵ��
plt.annotate(f'��ͨ��ֹƵ��\n{7.97}kHz', xy=(7.97, 1.414), xytext=(9, 1.2),
             arrowprops=dict(facecolor='black', arrowstyle='->'))
plt.annotate(f'��ͨ��ֹƵ��\n{7.05}kHz', xy=(7.05, 1.414), xytext=(5, 1.6),
             arrowprops=dict(facecolor='black', arrowstyle='->'))

plt.xlabel('Ƶ�� (kHz)', fontsize=12)
plt.ylabel('�����ѹ (V)', fontsize=12)
plt.title('�˲�����Ƶ��������', fontsize=14, pad=20)
plt.legend(loc='best', frameon=False)
plt.grid(True, linestyle='--', alpha=0.7)
plt.tight_layout()
plt.show()