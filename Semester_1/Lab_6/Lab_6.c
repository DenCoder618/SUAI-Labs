// По символьному файлу составить два линейных списка слов,
// упорядоченных по алфавиту и по количеству гласных букв
// вывести оба списка

#include "snippets.c"

void main() {
  file *file = read_file("input/large.txt");
  list *words = parse_file(file);

  printf("\n---- NOT SORTED -----\n");
  print_list(words);

  printf("\n--- ALPHABET SORT ---\n");
  sort_list(words, ALPHABET, NORMAL);
  print_list(words);

  printf("\n---- VOWELS SORT ----\n");
  sort_list(words, VOWELS, NORMAL);
  print_list(words); 

  destroy(words);
}