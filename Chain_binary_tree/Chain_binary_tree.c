//链式二叉树代码演示
/*
    先序：A B C D E
    中序：B A D E C
    后序：B E D C A
*/
#include<stdio.h>
#include<malloc.h>

struct BTNode
{
    char data;
    struct BTNode * pLchild;  //左指针域
    struct BTNode * pRchild;   //右指针域
};

struct BTNode *CreateBTree();   //创建一棵树
void PreTraverseBTree(struct BTNode *pT);   //先序遍历
void InTraverseBTree(struct BTNode *pT);    //中序遍历
void PostTraverseBTree(struct BTNode *pT);  //后序遍历

int main()
{
    struct  BTNode *pT=CreateBTree();    
    
    PreTraverseBTree(pT);
    printf("\n");
    InTraverseBTree(pT);
    printf("\n");
    PostTraverseBTree(pT);
    
    return 0;
}

struct BTNode *CreateBTree()
{
    struct BTNode * pA=(struct BTNode *)malloc(sizeof(struct BTNode)); //创建一个根节点 让pA去指向它
    struct BTNode * pB=(struct BTNode *)malloc(sizeof(struct BTNode));  //创建一个节点  让pB去指向它
    struct BTNode * pC=(struct BTNode *)malloc(sizeof(struct BTNode));//创建一个节点    让pC去指向它
    struct BTNode * pD=(struct BTNode *)malloc(sizeof(struct BTNode));//创建一个节点   让pD去指向它
    struct BTNode * pE=(struct BTNode *)malloc(sizeof(struct BTNode));//创建一个节点   让pE去指向它
    
    pA->data='A';//数据域
    pB->data='B';
    pC->data='C';
    pD->data='D';
    pE->data='E';

    pA->pLchild=pB;     //让根节点的左指针域去指向B节点
    pA->pRchild=pC;     //让根节点的右指针域去指向C节点
    pB->pLchild=pB->pRchild=NULL;   //B是叶子结点，左指针域和右指针域都为空
    pC->pLchild=pD;     //C节点的左指针域去指向D节点
    pC->pRchild=NULL;   //C节点的右指针域为空
    pD->pLchild=NULL;   //D节点的左指针域为空
    pD->pRchild=pE;     //让D节点的右指针域去指向E
    pE->pLchild=pE->pRchild=NULL;   //E是叶子节点，左右指针域都为空
    
    return pA;
}


void PreTraverseBTree(struct BTNode *pT) //中 左 右
{
    if(NULL!= pT)
    {
        printf("%c\n",pT->data);    //根节点    也相对于子树的根
        if(NULL!=pT->pLchild)
           PreTraverseBTree(pT->pLchild);      //递归 遍历左子树  因为左子树也是一棵树，所以运用递归思想
        if(NULL!=pT->pRchild) 
             PreTraverseBTree(pT->pRchild);     //递归 遍历右子树

    }
}

void InTraverseBTree(struct BTNode *pT)//中序遍历 左 中 右
{
    if(NULL!= pT)
    {
        
        if(NULL!=pT->pLchild)
            InTraverseBTree(pT->pLchild);   //递归 先遍历左子树

         printf("%c\n",pT->data);       //再根  也相对于子树的根
        if(NULL!=pT->pRchild) 
            InTraverseBTree(pT->pRchild);   // 递归  最后遍历右子树

    }
}


void PostTraverseBTree(struct BTNode *pT)//后序遍历：右 左 中
{
    if(NULL!= pT)
    {
        
        if(NULL!=pT->pLchild)   
            PostTraverseBTree(pT->pLchild);//递归    左子树先遍历
        if(NULL!=pT->pRchild) 
            PostTraverseBTree(pT->pRchild);//递归     右子树再遍历
        printf("%c\n",pT->data);        //最后根
        

    }
}


