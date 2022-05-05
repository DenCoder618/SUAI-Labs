// Программа должна хранить схему в виде заданной в задании
// структуры данных, где хранятся геометрические фигуры.
// Каждая фигура характеризуется уникальным идентификатором
// (int) id, координатами на экране (x, y), а также своими параметрами

// Программа должна уметь работать с фигурами, указанными в задании.
// Каждая фигуру должна уметь выводить на экран свои параметры
// в текстовом режиме с помощью метода print().
// Возможно, в будущем будут добавлены новые фигуры

// Класс FigureList должен быть основан на связном списке.
// Связаный список должен быть реализован с помощью двух классов
// Node (элемент списка) и List (сам список)

// TODO:
//* связный список (List) элементов (Node)
//* вывод параметров фигуры через метод print()
//* Circle: радиус, надпись произвольной длины
//* Segment: координаты начала и коодинаты конца

#include "shape.h"

int main() {
  FigureList list;

  Circle *c1 = new Circle(42, 0, 0, 1, "hello");
  cout << "c1->print(): ";
  c1->print();

  Circle *c2 = new Circle(24, 6, 1, 8, "hello2");
  Segment *s1 = new Segment(1, 0, 0, 42, 42);

  list.push_front(c1);
  list.push_front(c2);
  list.push_front(s1);

  list.print_all();

  cout << endl << "----------" << endl;

  Segment *s2 = new Segment(2, 6, 18, 4, 2);
  list.push_back(s2);
  
  list.push_front(new Circle(618, 7, 7, 7, "kek"));
  list.print_all();

  cout << endl << "----------" << endl;

  list.get(2).print();
  cout << "---------\n";
  list.get(42).print();

  // cout << "list.get(2).print(): ";
  // list.get(2).print();

  cout << endl << "----------del 42----------" << endl;
  list.erase(42);
  list.print_all();

  cout << endl << "----------del 2--------" << endl;
  list.erase(2);
  list.print_all();

  cout << endl << "----------del 618--------" << endl;
  list.erase(618);
  list.print_all();
}