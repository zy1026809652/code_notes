#include <stdio.h>
#include <stdlib.h>

/**
 * 递推方式求解
 * @para
 * m表示有m个人
 * k表示数到k的人出列
 * i表示第i个出列
 * @return
 * 返回值就表示，一个m个人（0---m-1）组成的环，从编号为0的人开始数1，数到k出列
 * 这样第i个出列的人的编号是多少
 * 如果编号是（1-----m）那就再最终的结果上加1即可
 * 
 * */
int joes1(int m,int k,int i)
{
    int start = m - i + 1;
    int temp = (start + k - 1)%start;//如果不是从编号为0的人开始报数，那只需修改这里即可，不需要修改递推式
    int j = 0;
    for(j = 1;j < i;j++)
    {
        temp = (temp + k)%(start + j);//递推式
    }
    return temp;

}

int joes2(int m,int k,int i)
{
    if(i == 1)
    {
        return (m + k - 1)%m;//如果不是从编号为0的人开始报数，那只需要修改递归出口即可，不需要修改递归式
    }
    else
    {
        return (joes2(m-1, k, i-1) + k)%m;
    }
}

int main()
{
    int m,k,i;
    scanf("%d %d %d",&m,&k,&i);
    printf("%d个人中，第%d个出队的是%d\n",m,i,joes1(m,k,i));
    printf("%d个人中，第%d个出队的是%d\n",m,i,joes2(m,k,i));
    return 0;
}
