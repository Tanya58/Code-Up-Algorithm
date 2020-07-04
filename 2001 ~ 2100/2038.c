#include <stdio.h>

// user status
int u_hp = 0;
int u_attk = 0;
int u_potion = 0;

// potion buf
char potion_type = 0;
int potion_attk = 0;
int potion_turn = 0;

// monster status
int m_attk = 0;
int m_hp = 0;

void init()
{
    for (int i = 0; i < 4; i++)
    {
        int t = 0;
        scanf("%d", &t);
        u_hp += t;
    }
    scanf("%d %d", &u_attk, &u_potion);
    if (u_potion == 1)
    {
        scanf(" %c %d %d", &potion_type, &potion_attk, &potion_turn);
    }
    scanf("%d %d", &m_attk, &m_hp);
}

int isWin()
{
    int turn = 0;
    int attk = 0;
    while (1)
    {
        attk = u_attk;
        if (turn < potion_turn)
        {
            switch (potion_type)
            {
            case '+':
                attk += potion_attk;
                break;
            case '*':
                attk *= potion_attk;
                break;
            }
        }
        if ((m_hp -= attk) <= 0)
        {
            return 1; // win
        }
        if ((u_hp -= m_attk) <= 0)
        {
            return 0; //lose
        }
    }
    return 0;
}

int main()
{
    init();
    printf("%d", isWin());
    return 0;
}