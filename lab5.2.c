#include "stdio.h"
#include "string.h"
struct People{
    char fName[50];
    char lName[50];
};
int main(){
    struct People Famous[10];
    strcpy(Famous[0].fName,"��⮭");//᪮���㥬 ��ப� ������ ���ᨢ� Famous
    strcpy(Famous[0].lName,"��������");
    strcpy(Famous[1].fName,"����");
    strcpy(Famous[1].lName,"���");
    strcpy(Famous[2].fName,"���");
    strcpy(Famous[2].lName,"�㪥ࡥ�");
    strcpy(Famous[3].fName,"����");
    strcpy(Famous[3].lName,"�����");
    strcpy(Famous[4].fName,"�����");
    strcpy(Famous[4].lName,"��஢");
    strcpy(Famous[5].fName,"�⨢");
    strcpy(Famous[5].lName,"�����");
    strcpy(Famous[6].fName,"�����");
    strcpy(Famous[6].lName,"��ࢠ���");
    strcpy(Famous[7].fName,"����");
    strcpy(Famous[7].lName,"�����");
    strcpy(Famous[8].fName,"������");
    strcpy(Famous[8].lName,"��᫨��");
    strcpy(Famous[9].fName,"�७���");
    strcpy(Famous[9].lName,"���");

    char Entername[50];
    printf("������ ��� ���: ");
    scanf("%s", Entername);
//����� � �뢥��� �� � ᮢ�����騬 ������
    for(int i = 0; i < 10; i++){
        int j = 0;
        while (Famous[i].fName[j] != 0 && Entername[j] != 0 && Famous[i].fName[j] == Entername[j]){
            j++;
        }
        if (Famous[i].fName[j] == 0 && Entername[j] == 0){
            printf("��� ��� ᮢ������ � ������ �����⭮�� 祫�����: %s %s\n", Famous[i].fName, Famous[i].lName);
        }
    }
    return 0;
}
