//  Maayez Imam and Abdullah Mohammed 10/23/2017
//  Card Probability program

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>


double notInitialProb(int numDeck, int numCopies, int handSize);
double notMulliganProb(int numDeck, int numCopies, int handSize, int mulligan);
double oneDrawProb(double notDraw, double notMulligan, double notTurn);
void finalProb(double atLeastOnce, int numTurns, int numMulligan);
double notTurnProb(int numDeck, int numCopies, int handSize, int turns);
void cardProb();


int main() {
  cardProb();
  return 0;
}


double notInitialProb(int numDeck, int numCopies, int handSize) {
  double notDraw = 1;
  int otherCards = numDeck - numCopies;

  for(int drawNum = 1; drawNum <= handSize; ++drawNum) {
    notDraw *= (otherCards / (double) numDeck);
    --otherCards;
    --numDeck;
  }
  return notDraw;
}


double notMulliganProb(int numDeck, int numCopies, int handSize, int mulligan) {
  double notMulligan = 1;
  int currentCards = handSize - mulligan;
  numDeck = (numDeck - currentCards - mulligan);
  int otherCards = numDeck - numCopies;

  for(int drawNum = 1; drawNum <= mulligan; ++drawNum) {
    notMulligan *= (otherCards / (double) numDeck);
    --otherCards;
    --numDeck;
  }
  return notMulligan;
}


double oneDrawProb(double notDraw, double notMulligan, double notTurn) {
  double notDrawnAtAll = (notDraw * notMulligan * notTurn);
  double atLeastOnce = 1 - notDrawnAtAll;
  return atLeastOnce;
}


void finalProb(double atLeastOnce, int numTurns, int numMulligan) {
  printf("The probability of drawing at least one of the cards by turn %d given you mulliganed %d cards is %.2lf\n",
         numTurns, numMulligan, atLeastOnce);
}


double notTurnProb(int numDeck, int numCopies, int handSize, int turns) {
  double notDrawProb = 1;
  numDeck = numDeck - handSize;
  int notInHand = (numDeck - numCopies);

  for(int turnNum = 1; turnNum <= turns; ++turnNum) {
    notDrawProb *= (notInHand / (double)numDeck);
    --notInHand;
    --numDeck;
  }
  return notDrawProb;
}


void cardProb() {
  int numDeck;
  int copiesDeck;
  int handSize;
  int cardsMulligan;
  int turns;
  double atLeastOne;
  double notInitial;
  double notMulligan;
  double notDrawProb;

  printf("Enter how many total cards there are in the deck: ");
  scanf("%d", &numDeck);

  printf("Enter how many copies of the card that you are looking for are in the deck: ");
  scanf("%d", &copiesDeck);

  printf("Enter your initial hand size: ");
  scanf("%d", &handSize);

  printf("Enter how many cards you are mulliganing: ");
  scanf("%d", &cardsMulligan);

  printf("Enter what turn you want to draw the card by: ");
  scanf("%d", &turns);

  notInitial = notInitialProb(numDeck, copiesDeck, handSize);
  notMulligan = notMulliganProb(numDeck, copiesDeck, handSize, cardsMulligan);
  notDrawProb = notTurnProb(numDeck, copiesDeck, handSize, turns);
  atLeastOne = oneDrawProb(notInitial, notMulligan, notDrawProb);
  finalProb(atLeastOne, turns, cardsMulligan);
}