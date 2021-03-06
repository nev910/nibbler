#ifndef		__ILIB_HH__
#define		__ILIB_HH__

#include	"./headers/Game.hh"

class		ILib
{
public:
  virtual bool	Window() const = 0;
  virtual std::list<ISnake *>	Play(std::list<ISnake *> sList, std::list<IFood *> fList, ISnake *s, IFood *f) = 0;
  virtual ~ILib(){};
};

#endif
