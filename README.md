# Nowik_Z3
Programowanie
zima 2017</p>
Zadanie 3</p>
Napisać program, który:
1. wczytuje ciąg napisów aż do wczytania napisu ”end” - wykonać przy użyciu pętli while (ale nie
do-while).
2. potem jeszcze wczytuje (pętlą for) n napisów, gdzie n należy wcześniej wczytać (wymusić pętlą
do-while, by n było zawarte w przedziale <5, 10>).
3. pozwala użytkownikowi na wcześniejsze zakończenie wczytywania napisów poprzez wpisanie
napisu ”end” – zastosować instrukcję break.
4. drukuje informację, ile łącznie było wczytanych napisów, w których ostatni i przedostatni znak
są takie same.
5. drukuje długość najkrótszego wczytanego napisu.</p>
UWAGA: napisu ”end”, który może wystąpić jeden lub dwa razy, nie należy brać pod uwagę przy
poszukiwaniu napisu najkrótszego.</p>
Uwaga: Zadanie rozwiązać z wykorzystaniem zmiennych typu string i bez użycia tablic.</p>
Wskazówki:
- Napisy należy wczytywać instrukcją cin (do pierwszego niewidocznego znaku)
- Napisy można porównywać ze sobą w całości, za pomocą operatora ==
- Jeśli napis jest zmienną typu string, to jego długość (liczba znaków) jest równa
n= napis.size( ), zaś ostatni znak to napis[n-1].
