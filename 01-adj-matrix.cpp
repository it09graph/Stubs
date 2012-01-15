// coding:cp866
// ���뢠�� ᯨ᮪ ॡ��, �������� ��ࠬ� ���殢. 
// �������� ������ ��樤��⭮��
// � �� ������� �⢥砥� �� ����� "ᬥ��� �� ��� ����� ���設�"

#include <stdio.h>

#define         N       20

int main(){
    int G[N][N];
   
    int n,m;
    int i,j,x,y;

    printf("������ �᫮ ���設 n: "); scanf("%i", &n);
    printf("������ �᫮ ॡ�� m: "); scanf("%i", &m);

    // ����塞 ������ ᬥ�����
    for (i=0; i<n; i++) 
        for (j=0; j<n; j++) 
            G[i][j] = 0;

    // ������ ॡ� � ������塞 ������ ᬥ�����
    printf("������ ����� ॡ��:\n");
    for (i=0; i<m; i++) {
        scanf("%i %i", &x, &y);
        G[x][y] = G[y][x] = 1;
    }

    // ���⠥� ������ 
    printf("����� ᬥ�����:\n"); 
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("%i ", G[i][j]);
        }
        printf("\n");
    }

    // ������ ��� ���設� � ��।��塞 �� ᬥ������
    printf("������ ��� ���設�: "); scanf("%i %i", &i, &j);
    if (G[i][j]) {
        printf("���設� %i � %i ᬥ���", i, j);
    } else {
        printf("���設� %i � %i ��ᬥ���", i, j);
    }

    return 0;
}


