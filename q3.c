BOOL deplacement_possible(SOLITAIRE s){
  int i,j;
  for(i=1; i < 7; i++){
      for(j=1; j < 7; j++){
        if( (s[i][j] == 0) && (s[i+2][j] == 1 || s[i][j+2] == 1 || s[i-2][j] == 1|| s[i][j-2] == 1))
        return true;
        //les conditions sont remplies, un deplacement est possible
      }
  }
  return false;
  //les conditions ne sont pas remplies, pas de deplacement.
}
