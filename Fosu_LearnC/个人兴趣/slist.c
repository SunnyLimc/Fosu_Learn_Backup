#include <stdio.h>
#include "slist.h"
#include <assert.h>
#include <stdlib.h>
#include <stddef.h>

void SListInit(SList *s)
{
    assert(s);
    s->_pHead = NULL;
}

void SListPushBack(SList *s, SDataType data)
{
    //找链表最后一个节点
    assert(s);
    PNode pNewNode = BuySListNode(data);
    if (s->_pHead == NULL)
    { //链表没有节点的情况
        s->_pHead = pNewNode;
    }
    else
    {
        PNode pCur = s->_pHead;
        while (pCur->_PNext)
        {
            pCur = pCur->_PNext;
        }
        //让最后一个节点指向新节点
        pCur->_PNext = pNewNode;
    }
}

void SListPopBack(SList *s)
{
    assert(s);
    if (s->_pHead == NULL)
    { //链表中没有节点
        return;
    }
    else if (s->_pHead->_PNext == NULL)
    { //只有一个节点
        free(s->_pHead);
        s->_pHead = NULL;
    }
    else
    { //多个节点
        PNode pCur = s->_pHead;
        PNode pPre = NULL;
        while (pCur->_PNext)
        {
            pPre = pCur;
            pCur = pCur->_PNext;
        }
        free(pCur);
        pPre->_PNext = NULL;
    }
}

void SListPushFront(SList *s, SDataType data)
{
    assert(s);
    PNode pNewNode = BuySListNode(data);
    if (s->_pHead == NULL)
    { //链表为空
        s->_pHead = pNewNode;
    }
    else
    {
        pNewNode->_PNext = s->_pHead;
        s->_pHead = pNewNode;
    }
}

void SListPopFront(SList *s)
{
    assert(s);
    if (s->_pHead == NULL)
    { //链表为空
        return;
    }
    else if (s->_pHead->_PNext == NULL)
    { //只有一个节点
        free(s->_pHead);
        s->_pHead = NULL;
    }
    else
    {
        PNode pCur = s->_pHead;
        s->_pHead = pCur->_PNext;
        free(pCur);
    }
}

void SListInsert(PNode pos, SDataType data)
{
    PNode pNewNode = NULL;
    if (pos == NULL)
    {
        return;
    }
    pNewNode = BuySListNode(data);

    pNewNode->_PNext = pos->_PNext;
    pos->_PNext = pNewNode;
}

PNode SListFind(SList *s, SDataType data)
{
    assert(s);
    PNode pCur = s->_pHead;
    while (pCur)
    {
        if (pCur->_data == data)
        {
            return pCur;
        }
        pCur = pCur->_PNext;
    }
    return NULL;
}

void SListRemove(SList *s, SDataType data)
{
    assert(s);
    if (s->_pHead == NULL)
    {
        return;
    }
    PNode pPre = NULL;
    PNode pCur = s->_pHead;
    while (pCur)
    {
        if (pCur->_data == data)
        {
            if (pCur == s->_pHead)
            { //要删除的是第一个位置的节点
                s->_pHead = pCur->_PNext;
            }
            else
            {
                pPre->_PNext = pCur->_PNext; //其它位置的情况，让前一个节点指向其后一个节点
            }
            free(pCur);
            return;
        }
        else
        {
            pPre = pCur;
            pCur = pCur->_PNext;
        }
    }
}

int SListSize(SList *s)
{ //获取链表有效节点的个数
    assert(s);
    int count = 0;
    PNode pCur = s->_pHead;
    while (pCur)
    {
        count++;
        pCur = pCur->_PNext;
    }
    return count;
}

int SListEmpty(SList *s)
{ //检测链表是否为空
    assert(s);
    if (s->_pHead == NULL)
    {
        return -1;
    }
    return 0;
}

void SListClear(SList *s)
{ //清空链表
    assert(s);
    if (s->_pHead == NULL)
    {
        return;
    }
    PNode pCur = s->_pHead;
    while (pCur->_PNext)
    { //循环清空链表中的节点
        PNode Tmp = pCur->_PNext;
        free(pCur);
        pCur = Tmp;
    }
    if (pCur)
    { //清空最后一个节点
        free(pCur);
        pCur = NULL;
    }
}

void SListDestroy(SList *s)
{ //销毁链表
    assert(s);
    if (s->_pHead == NULL)
    {
        free(s->_pHead);
        return;
    }
    while (s->_pHead)
    {
        PNode Tmp = s->_pHead->_PNext;
        free(s->_pHead);
        s->_pHead = Tmp;
    }
}

void SListPrint(SList *s)
{ //打印链表
    assert(s);
    PNode pCur = s->_pHead;
    while (pCur)
    {
        printf("%d--->", pCur->_data);
        pCur = pCur->_PNext;
    }
    printf("\n");
}
void main()
{
    SList s;
    SListInit(&s);
    SListPushBack(&s, 1);
    SListPushBack(&s, 2);
    SListPushBack(&s, 3);
    printf("size=%d\n", SListSize(&s));
    SListPrint(&s);
    SListInsert(SListFind(&s, 2), 0);
    SListPrint(&s);
    SListRemove(&s, 2);
    SListPrint(&s);
    system("pause");
    return;
}