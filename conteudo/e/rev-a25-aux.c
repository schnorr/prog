float potencia (float x, int n) {
  float ret = 1;
  while(n > 0) {
    ret *= x;
    n--;
  }
  return ret;
}
long long fatorial (int n) {
  long long ret = 0;
  if (n >= 0){
    ret = 1;
    while(n > 0){
      ret *= n;
      n--;
    }
  }
  return ret;
}
