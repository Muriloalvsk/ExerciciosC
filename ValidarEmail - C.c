#include <stdio.h>

#define false 0
#define true  1

int chbuscar(const int siz, const char base[siz], const char elem)
{
    for (int e = 0; e < siz; e += 1) {
        if (elem == base[e])
        {   return e;}
    }
    return -1;
}
char validemail(char email_[], int limit)
{
    char a = 0;
    char p = 0;
    char t = 0;
    char s = 0;

    s = chbuscar(limit, email_, '\0');
    a = chbuscar(s, &email_[t], '@');
    if (2 < a) {
        if (email_[a + 1] == '.' || email_[a - 1] == '.')
        {   return false;}
        t = chbuscar(s - (a), &email_[1 + (a)], '@');
        if (0 <= t)
        {   return false;}
        p = chbuscar(s - (a), &email_[1 + (a)], '.');
        if (p < 2)
        {   return false;}
        t = chbuscar(s - (1 + (a + p)), &email_[2 + (a + p)], '.');
        if (0 <= t)
        {   return false;}
        t = chbuscar(s - (1 + (a + p)), &email_[2 + (a + p)], '\0');
        if (1 < t)
        {   return true;}
    }
  return false;
}
int main(void)
{
  char email[120] = {"fuf@mail.ig"};
  printf("%d\n", validemail(email, 120));
  return 0;
}
