#include "types.h"
#include "user.h"
#include "pstat.h"

int main (int argc, char **argv)
{
  struct pstat pstat;
  int i;

  if (getpinfo(&pstat) != 0)
  {
    printf(2, "getpinfo failed\n");
    exit();
  }

  for(i=0;i < NPROC;i++)
  {
    if (!pstat.inuse[i])
    {
      continue;
    }

    printf(1, "%d,%d,%d\n", pstat.pid[i], pstat.ticks[i], pstat.tickets[i]);
  }

  exit();
}
