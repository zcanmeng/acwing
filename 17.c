/**
 *输入一个链表的头结点，按照 从尾到头 的顺序返回节点的值。
 *返回的结果用数组存储 
 *
 *Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 * 
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* printListReversingly(struct ListNode* head) {
    if(head==NULL){//判断链表是否为空
        return NULL;
    }
    //创建新的链表并接收原始链表的位置
    struct ListNode *p=head;
    //保存链表长度
    int length =0;
    //获取长度，会少1，但是当下标正好
    while(p->next != NULL){
        length++;
        p=p->next;
    }
    //创建一个指针，用来返回数据
    int *arr=(int *)malloc(sizeof(int)*(length+1));
    //回到链表开头
    p=head;
    
    //保存数据
    while(p->next != NULL){
        arr[length--]=p->val;
        p=p->next;
    }
    //因为会少1次，所以需要多保存一次
    arr[length]=p->val;
    //返回数据
    return arr;
}
