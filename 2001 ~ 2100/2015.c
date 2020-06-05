#include <stdio.h>
#include <string.h>

#define CONTINUE(LOGIC) \
  if (LOGIC)            \
  continue

int main()
{
  int N = 0, E = 5;
  for (int F = 1; F < 10; F++)
  {
    CONTINUE(F == E);
    for (int O = 1; O < 10; O++)
    {
      CONTINUE(O == E || O == F);
      for (int R = 1; R < 10; R++)
      {
        CONTINUE(R == E || R == F || R == O);
        for (int S = 1; S < 10; S++)
        {
          CONTINUE(S == E || S == F || S == O || S == R);
          for (int I = 1; I < 10; I++)
          {
            CONTINUE(I == E || I == F || I == O || I == R || I == S);
            for (int X = 1; X < 10; X++)
            {
              CONTINUE(X == E || X == F || X == O || X == R || X == S || X == I);
              for (int T = 1; T < 10; T++)
              {
                CONTINUE(T == E || T == F || T == O || T == R || T == S || T == I || T == X);
                for (int Y = 1; Y < 10; Y++)
                {
                  CONTINUE(Y == E || Y == F || Y == O || Y == R || Y == S || Y == I || Y == X || Y == T);
                  int exp = 100 * F + 10 * O + R + 2 * T + 1;
                  int result = 100 * S + 10 * I + X;
                  if (exp == result)
                  {
                    printf("%d%d%d%d%d+%d%d%d+%d%d%d=%d%d%d%d%d", F, O, R, T, Y, T, E, N, T, E, N, S, I, X, T, Y);
                  }
                }
              }
            }
          }
        }
      }
    }
  }

  return 0;
}