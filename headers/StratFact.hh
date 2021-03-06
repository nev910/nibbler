#ifndef		__STRATFACT_H__
#define		__STRATFACT_H__

#include	<cstdio>
#include	<cstdlib>
#include	"Strategie.hh"

class		StratFact
{
private:
  IStrategie	*newEasy();
  IStrategie	*newMedium();
  IStrategie	*newHard();
  IStrategie	*(StratFact::*creation[3])();
public:
  StratFact();
  ~StratFact();
  void		initTab();
  IStrategie	*create(IStrategieType type);
};

#endif
