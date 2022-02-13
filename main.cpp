#include "libraries.h"
#include "functions.h"

int main()
{
  char random;
  cout << "Cipher or decipher(c or d)?  ";
  cin >> random;
  if (random == 'c')
  {
    cipher_ascii();
  }
  else
  {
    decipher_ascii();
  }

  return 0;
}

