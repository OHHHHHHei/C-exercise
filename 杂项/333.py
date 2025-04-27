# -*- coding: gbk -*-
import numpy as np
import matplotlib.pyplot as plt
from matplotlib import rcParams

# ������������֧��
rcParams['font.sans-serif'] = ['SimHei']
rcParams['axes.unicode_minus'] = False

# �����ѹֵ
U = 220          # ��Դ��ѹ (V)
U_L = 199.14     # ��������ѹ (V)
U_B = 56.01      # �չ�Ƶ�ѹ (V)

# �������ֵ�͹�������
I = 0.1631       # ���� (A)
cos_phi = 0.41   # ��������

# ������λ��
phi = np.arccos(cos_phi)  # ��λ�� (����)

# ���������������
# ��Դ��ѹ U ��Ϊ�ο�����
U_x = U
U_y = 0

# �չ�Ƶ�ѹ U_B �����ͬ��
U_B_x = U_B
U_B_y = 0

# ��������ѹ U_L ��ǰ���� 90 ��
# ������ͼ�У���������ѹ U_L ����λ��Ϊ 90 �ȣ����������Ϊ (0, U_L)
U_L_x = 0
U_L_y = U_L

# ��������ͼ
plt.figure(figsize=(8, 6))
plt.quiver(0, 0, U_x, U_y, angles='xy', scale_units='xy', scale=1, color='b', label='��Դ��ѹ U')
plt.quiver(0, 0, U_B_x, U_B_y, angles='xy', scale_units='xy', scale=1, color='g', label='�չ�Ƶ�ѹ U_B')
plt.quiver(U_B_x, U_B_y, U_L_x - U_B_x, U_L_y - U_B_y, angles='xy', scale_units='xy', scale=1, color='r', label='��������ѹ U_L')

# ��ӱ�ע
plt.text(U_x, U_y, f'U = {U} V', fontsize=10, color='b', ha='center')
plt.text(U_B_x, U_B_y, f'U_B = {U_B} V', fontsize=10, color='g', ha='center')
plt.text(U_L_x, U_L_y, f'U_L = {U_L} V', fontsize=10, color='r', ha='center')

# ���������
plt.axhline(0, color='k', linewidth=0.5)
plt.axvline(0, color='k', linewidth=0.5)

# ���ͼ���ͱ���
plt.legend()
plt.title('�չ�Ƶ�·����ͼ')
plt.xlabel('ʵ�� (V)')
plt.ylabel('�鲿 (V)')
plt.grid(True)
plt.axis('equal')
plt.xlim(0, U + 20)
plt.ylim(-U_L - 20, U_L + 20)
plt.show()