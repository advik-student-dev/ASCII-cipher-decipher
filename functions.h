void cipher_ascii()
{
  char c1, c2, c3, c4, c5;
  cout << "Enter letters: " << endl;
  cin >> c1 >> c2 >> c3 >> c4 >> c5;
  cout << "ASCII MESSAGE: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5) << endl;
}

void decipher_ascii()
{
  int i1, i2, i3, i4, i5;
  cout << "Enter numbers: " << endl;
  cin >> i1;
  cin >> i2;
  cin >> i3;
  cin >> i4;
  cin >> i5;
  cout << "ACTUAL MESSAGE: " << char(i1) << " " << char(i2) << " " << char(i3) << " " << char(i4) << " " << char(i5) << endl;
}