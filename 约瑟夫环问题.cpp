#include <stdio.h>
#include <stdlib.h>

/**
 * ���Ʒ�ʽ���
 * @para
 * m��ʾ��m����
 * k��ʾ����k���˳���
 * i��ʾ��i������
 * @return
 * ����ֵ�ͱ�ʾ��һ��m���ˣ�0---m-1����ɵĻ����ӱ��Ϊ0���˿�ʼ��1������k����
 * ������i�����е��˵ı���Ƕ���
 * �������ǣ�1-----m���Ǿ������յĽ���ϼ�1����
 * 
 * */
int joes1(int m,int k,int i)
{
    int start = m - i + 1;
    int temp = (start + k - 1)%start;//������Ǵӱ��Ϊ0���˿�ʼ��������ֻ���޸����Ｔ�ɣ�����Ҫ�޸ĵ���ʽ
    int j = 0;
    for(j = 1;j < i;j++)
    {
        temp = (temp + k)%(start + j);//����ʽ
    }
    return temp;

}

int joes2(int m,int k,int i)
{
    if(i == 1)
    {
        return (m + k - 1)%m;//������Ǵӱ��Ϊ0���˿�ʼ��������ֻ��Ҫ�޸ĵݹ���ڼ��ɣ�����Ҫ�޸ĵݹ�ʽ
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
    printf("%d�����У���%d�����ӵ���%d\n",m,i,joes1(m,k,i));
    printf("%d�����У���%d�����ӵ���%d\n",m,i,joes2(m,k,i));
    return 0;
}
