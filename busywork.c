#include "types.h"
#include "user.h"
#include "pstat.h"

int main (int argc, char **argv)
{
  int tickets;

  if (argc != 2)
  {
    printf(2, "usage: %s tickets\n", argv[0]);
    exit();
  }

  tickets = atoi(argv[1]);

  settickets(tickets);

  int pid = fork();

  if (pid != 0)
  {
    printf(1, "Child is %d\n", pid);

    exit();
  }

  // put the child to work
  for(;;)
  {
  }
}
