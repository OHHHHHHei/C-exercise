# -*- coding: gbk -*-
import numpy as np
import matplotlib.pyplot as plt

# ����matplotlib��ʾ����
plt.rcParams['font.sans-serif'] = ['Microsoft YaHei']  # ������������
plt.rcParams['axes.unicode_minus'] = False  # ���������ʾ����

# ���ݣ�Ƶ�� (kHz) �� ���� (V)
frequencies = np.array([1, 2, 3, 6, 10, 15, 20])
amplitudes = np.array([1.0575, 1.32559, 1.5809, 1.7696, 1.8159, 1.7495, 1.4772])

# ���Ʒ�Ƶ��������
plt.figure(figsize=(8, 6))
plt.plot(frequencies, amplitudes, marker='o', color='b', label='��Ƶ����')

# ��ӱ�ǩ
plt.title('��ͨ�˲����ķ�Ƶ����')
plt.xlabel('Ƶ�� (kHz)')
plt.ylabel('���� (V)')
plt.grid(True)
plt.xscale('linear')
plt.yscale('linear')

# ����ͨƵ�� (fBW)
# ����-3 dB�ķ���ԼΪ�����ȵ�һ��
max_amplitude = np.max(amplitudes)
half_max_amplitude = max_amplitude / np.sqrt(2)  # -3dB��Ӧ�ķ���ֵ

# �ҵ����㣬��ͨƵ���Ŀ�ʼ�ͽ���Ƶ��
f_start = frequencies[np.where(amplitudes >= half_max_amplitude)[0][0]]
f_end = frequencies[np.where(amplitudes >= half_max_amplitude)[0][-1]]
fBW = f_end - f_start

# ����ͨƵ������
plt.axvspan(f_start, f_end, color='yellow', alpha=0.3, label=f'ͨƵ�� (fBW = {fBW} kHz)')

# ��ʾͼ��
plt.legend()

# ��ʾͼ��
plt.show()

# ���ͨƵ��ֵ
fBW
