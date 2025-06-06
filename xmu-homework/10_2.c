#include <stdio.h>
#include <stdlib.h>
 
struct ListNode {
    int data;
    struct ListNode *next;
};
 
//函数实现写在这里
struct ListNode *createlist() 
{
    struct ListNode *head = NULL; // 初始化头指针为空
    struct ListNode *newNode;
    int num;

    scanf("%d", &num); // 读取第一个数

    while (num != -1) {
        // 创建新节点
        newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
        newNode->data = num;

        // 将新节点插入到链表头部，实现逆序
        newNode->next = head;
        head = newNode;

        scanf("%d", &num); // 读取下一个数
    }

    return head; // 返回链表头指针
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
