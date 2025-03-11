
int main(void) {
  float result = 0;
  float x = 3.14;
  int i = 5;

  while (i > 0) {
    result += x / i;
    i--;
  }

  printf("The value of result is: %f\n", result);

  return 0;
}