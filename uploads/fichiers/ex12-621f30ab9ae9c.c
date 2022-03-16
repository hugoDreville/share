import 'dart:io';

main(List<String> args) {
  print("saisie un string");
  String s = stdin.readLineSync().toString();
  print("saisir le caractère que vous voulez");
  String n = stdin.readLineSync().toString();
  int res = 0;
  for (int k = 0; k < s.length; k++) {
    if (s.substring(0 + k, 1 + k) == n) {
      res += 1;
    }
  }
  print("le nombre d'occurence de " + n + " est de:" + res.toString());
}
