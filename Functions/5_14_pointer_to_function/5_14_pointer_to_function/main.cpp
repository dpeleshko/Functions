// прототипи функцій
int f(int, int);
int g(int, int);


int main() {
// оголошення вказівника на функцію
// та його ініціалізація
  int(*p)(int, int);   p = f;
// виклик f через вказівник
  int i = p(1, 2);
// переадресація вказівника на g і виклик
  p = &g;   p(1, 2);
// виклик в старому форматі
  i = (*p)(1, 2);
// оголошення вказівника
  auto p1 = f;  p1(3, 4 );
    p1 = g;  p1(3, 4);
  // оголошення вказівника
    auto& p2 = f;  p2(3, 4);
  // p2 = g; - помилка реініціалізація посилання
  // оголошення вказівника
    const auto p3 = g;  p3(5, 6);
  // p3 = f; - помилка зміна const
  // оголошення вказівника
    decltype(p1) p4 = g; p4(10, 11);
    p4 = f;  p1(3, 4);
  }


  int f(int i1, int i2) {  return (i1 + i2);  }
  int g(int i1, int i2) {  return (i1 - i2);   }