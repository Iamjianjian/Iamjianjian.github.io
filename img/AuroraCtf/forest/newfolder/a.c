#include <stdio.h>
#include <string.h>
static char postOrder[]="raod5{RP_13rvQump1rt0_t#n#}#4yA";
static int sp=0;
static int pp=30;
static struct node
{
    char d;
    int l;
    int r;
    
}tree[32];

char * find(char*s,char c)
{
    for (int i=0;s[i]!='\0';i++)
    {
        if (s[i]==c)
        {
            return s+i;
        }
    }

}

void solve(int np,char*instr,int l)
{
    tree[np].d=postOrder[pp--];
    char* cp=find(instr,tree[np].d);
    tree[np].l=-1;
    tree[np].r=-1;
    if (cp!=instr+l-1)
    {
        tree[np].r=sp++;
        solve(tree[np].r,cp+1,instr+l-cp-1);
    }
    if (cp!=instr)
    {
        tree[np].l=sp++;
        solve(tree[np].l,instr,cp-instr);
    }
}
void preorder(int root)
{
    // printf("%d",root);
    if (root==-1)
        return;
    printf("%c",tree[root].d);
    preorder(tree[root].l);
    preorder(tree[root].r);
}
int main(int argc, char const *argv[])
{
    
    int root=sp++;
    char inOrder[]="roaRd{5uP1_Q3vrAm1p_r0tytn#4##}";
    solve(root,inOrder,31);
    preorder(root);
    return 0;
}
