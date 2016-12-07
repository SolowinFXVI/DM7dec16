BOOL mouvement_test (SOLITAIRE s, POS p1, POS p2){

//p1 et p2 sont ils dans la zone jouable?
  if( (s[p1.x][p1.y] == -1) && (s[p2.x][p2.y] == -1)){
  return false;
  }

//p1 est un pion?
  if( s[p1.x][p1.y] != 1){
  return false;
  }

//p2 pret a recevoir p1?
  if( s[p2.x][p2.y] != 0){
  return false;
  }

//verifcation de la condition de distance (doit remplir une des conditions suivantes)
  if( s[p2.x][p2.y] != (s[p1.x+2][p1.y] || s[p1.x][p1.y+2] || s[p1.x-2][p1.y] || s[p1.x][p1.y-2]) ){
  return false
  }
//dans tous les autres cas
return true;
}
