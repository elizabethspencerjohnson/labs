#include "battle.h"

Battle::Battle(Pokemon* a, Pokemon* b) : playerA(a), playerB(b) {
  playerAturn = (bool) (rand() % 2);

  cout << "    ,                           .::." << endl;
  cout << "                              .;:**'            AMC" << endl;
  cout << "                              `                  0" << endl;
  cout << "  .:XHHHHk.              db.   .;;.     dH  MX   0" << endl;
  cout << "oMMMMMMMMMMM       ~MM  dMMP :MMMMMR   MMM  MR      ~MRMN" << endl;
  cout << "QMMMMMb  \"MMX       MMMMMMP !MX' :M~   MMM MMM  .oo. XMMM 'MMM" << endl;
  cout << "  `MMMM.  )M> :X!Hk. MMMM   XMM.o\"  .  MMMMMMM X?XMMM MMM>!MMP" << endl;
  cout << "   'MMMb.dM! XM M'?M MMMMMX.`MMMMMMMM~ MM MMM XM `\" MX MMXXMM" << endl;
  cout << "    ~MMMMM~ XMM. .XM XM`\"MMMb.~*?**~ .MMX M t MMbooMM XMMMMMP" << endl;
  cout << "     ?MMM>  YMMMMMM! MM   `?MMRb.    `\"\"\"   !L\"MMMMM XM IMMM" << endl;
  cout << "      MMMX   \"MMMM\"  MM       ~0:           !Mh.\"\"\" dMI IMMP" << endl;
  cout << "      'MMM.                                             IMX" << endl;
  cout << "       ~M!M                                             IMP" << endl;
}

void Battle::run() {
  while (playerA->getHP() && playerB->getHP()) {
    cout << playerA->getName() << ": " << playerA->getHP() << "HP" << endl;
    cout << playerB->getName() << ": " << playerB->getHP() << "HP" << endl;
    Pokemon* offense, defense;
    if (playerAturn) {
      offense = playerA;
      defense = playerB;
    } else {
      offense = playerB;
      defense = playerA;
    }

    int chooseMove = rand() % 4;
    int dmg = defense->attackedBy(offense->attackPowerOf(chooseMove));

    cout << offense->getName() << " uses " << offense->getMove(chooseMove);
    cout << ". It did " << dmg << " damage!" << endl << endl;

    playerAturn = !playerAturn;
  }

  if(playerA->getHP()) {
    cout << playerA->getName() << " wins!" << endl;
  } else {
    cout << playerB->getName() << " wins!" << endl;
  }
}

  private:
    Pokemon* playerA, playerB;
    bool playerAturn;
};
