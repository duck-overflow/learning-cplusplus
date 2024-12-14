# Grundlagen von C++

## Initialisierung von Objekten
- int x = 10; → traditionelle Kopierinitialisierung 
  - lässt implizite Konvertierung zu 5.5 zu int = 5 (.5 geht verloren)
- int x{10}; → Listeninitialisierung geht teilweise nicht (in dem Fall '=')
  - einheitlich sichere Initialisierung; strenge Typprüfung (Fehler, falls Typverlust auftreten könnte (zum Beispiel double → int))
- int x(5); → Direktinitialisierung
  - wird direkt an Konstruktor übergeben (da primitive Datentypen keinen Konstruktor → ähnlich Kopierinitialisierung)
- [[maybe_unused]] → wird genutzt um aufzuzeigen, dass Variable vielleicht nicht genutzt wird

## Einführung in iostream
- std::cout
  - Sende Ausgabe zur Konsole
  - '<<' - insertion operator
- std::endl
  - end line → beendet diese Zeile, danach wird neue genutzt
- std::endl vs '\n'
  - endl ist ineffizient, da es 2 Jobs erledigt → bringt Cursor in nächste Zeile und flushed den Buffer (dauert länger)
- std::cin
  - Zeicheneingabe über Tastatur
  - '>>' - input operator (können auch mehrere sein)