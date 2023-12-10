#include "stdio.h"
#include "string.h"
struct People{
    char fName[50];
    char lName[50];
};
int main(){
    struct People Famous[10];
    strcpy(Famous[0].fName,"Антон");//скопируем строку внутрь массива Famous
    strcpy(Famous[0].lName,"Пономарёв");
    strcpy(Famous[1].fName,"Илон");
    strcpy(Famous[1].lName,"Маск");
    strcpy(Famous[2].fName,"Марк");
    strcpy(Famous[2].lName,"Цукерберг");
    strcpy(Famous[3].fName,"Билл");
    strcpy(Famous[3].lName,"Гейтс");
    strcpy(Famous[4].fName,"Павел");
    strcpy(Famous[4].lName,"Дуров");
    strcpy(Famous[5].fName,"Стив");
    strcpy(Famous[5].lName,"Джобс");
    strcpy(Famous[6].fName,"Линус");
    strcpy(Famous[6].lName,"Торвальдс");
    strcpy(Famous[7].fName,"Ларри");
    strcpy(Famous[7].lName,"Пейдж");
    strcpy(Famous[8].fName,"Джеймс");
    strcpy(Famous[8].lName,"Гослинг");
    strcpy(Famous[9].fName,"Брендан");
    strcpy(Famous[9].lName,"Эйх");

    char Entername[50];
    printf("Введите Ваше имя: ");
    scanf("%s", Entername);
//найдём и выведем людей с совпадающим именем
    for(int i = 0; i < 10; i++){
        int j = 0;
        while (Famous[i].fName[j] != 0 && Entername[j] != 0 && Famous[i].fName[j] == Entername[j]){
            j++;
        }
        if (Famous[i].fName[j] == 0 && Entername[j] == 0){
            printf("Ваше имя совпадает с именем известного человека: %s %s\n", Famous[i].fName, Famous[i].lName);
        }
    }
    return 0;
}
