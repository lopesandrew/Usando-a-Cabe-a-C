#include <stdlib.h>
#include <stdio.h>

int main(){


// char *cards = "JQK"; -> string literais nunca podem ser atualizadas

char cards[] = "JQK";  //string de uma array literal pode ser modificada, agora cards não é apenas um ponteiro (como em *cards), agora ela é um array também. 


char a_card = cards[2]; // a_card = K

cards[2] = cards[1]; // JQK -> JQQ
cards[1] = cards[0]; // JQQ -> JJQ
cards[0] = cards[2]; // JJQ -> QJQ
cards[2] = cards[1]; // QJQ -> QJJ
cards[1] = a_card; //  QJJ -> QKJ OK 

puts(cards);

return 0; 




}
