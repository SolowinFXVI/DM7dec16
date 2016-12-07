SOLITAIRE jouer_tant_qu_on_peut_encore (SOLITARE s){    //l'algorithme prends en argument un solitaire et renvoi un solitaire modifie.

int i, j;
int un_mouvement_a_ete_effectue = 1; //pour savoir quand s'arreter
POS p1, p2;


while(un_mouvement_a_ete_effectue == 1){ //l'alogrithme doit s'arreter lorsqu'a la completion des boucles aucun mouvement n'a ete effectue.

  for(i=1; i < 7; i++){
      for(j=1; j < 7; j++){
        if( (s[i][j] == 0) && (s[i+2][j] == 1 || s[i][j+2] == 1 || s[i-2][j] == 1|| s[i][j-2] == 1)){
        p1.x = i; p1.y = j;

          if(s[i+2][j] == 1){
            p2.x= i+2; p2.y = j;
            effectuer_mouvement(p1, p2);
            un_mouvement_a_ete_effectue = 1;
            }

          else if(s[i][j+2] == 1){
            p2.x= i; p2.y = j+2;
            effectuer_mouvement(p1, p2);
            un_mouvement_a_ete_effectue = 1;
            }

          else if(s[i-2][j] == 1){
            p2.x= i-2; p2.y = j;
            effectuer_mouvement(p1, p2);
            un_mouvement_a_ete_effectue = 1;
            }

          else if(s[i][j-2] == 1){
            p2.x= i; p2.y = j-2;
            effectuer_mouvement(p1, p2);
            un_mouvement_a_ete_effectue = 1;
            }
         }
      }
    }
  }
}
