#include <stdio.h>
#include <stdlib.h>
 
struct ListNode {
    int data;
    struct ListNode *next;
};
 
//����ʵ��д������
struct ListNode *createlist() 
{
    struct ListNode *head = NULL; // ��ʼ��ͷָ��Ϊ��
    struct ListNode *newNode;
    int num;

    scanf("%d", &num); // ��ȡ��һ����

    while (num != -1) {
        // �����½ڵ�
        newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
        newNode->data = num;

        // ���½ڵ���뵽����ͷ����ʵ������
        newNode->next = head;
        head = newNode;

        scanf("%d", &num); // ��ȡ��һ����
    }

    return head; // ��������ͷָ��
}


int main()
{
    struct ListNode *p, *head = NULL;
 
    head = createlist();
    for (p = head; p != NULL; p = p->next)
        printf("%d ", p->data);
    printf("\n");
 
    return 0;
}
