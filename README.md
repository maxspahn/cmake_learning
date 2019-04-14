# cmake_learning
A repository that should familiarize with the very basic concepts of cmake and how cpp can be structured. It is a project with the only purpose to learn to use cmake properly. Some friends asked for the files and it has therefore some features of a tutorial.
Erklärung für dich.

Ich habe in dem CMakeLists.txt eigentlich alles erklärt, was die einzelnen Befehle machen.
Die Struktur: 
  du siehst hier im Verzeichnis die CMakeLists.txt und den Ornder src in dem dein Source-Code 
  liegt. Und natürlich die README.md.

Jetzt noch zum Vorgehen:

1) Dein Source-Code und dein Executable sollten immer streng getrennt sein! IMMER!
    Deshalb benutzt man einen build-Ordner.
    Erstelle einen build ordner neben src  : $mkdir build 
    und gehe darein : $cd build

2) Jetzt führst du cmake aus (dies macht das Prekompilieren): $cmake ..
    kleine Frage : warum die beiden Punkte?

3) Jetzt ist im build Ordner ein Makefile enstanden (und jede Menge anderer Blödsinn).
    Der Makefile ermöglicht dir den Source Code zu kompilileren. Die Eintstellung werden alle
    im CMakeLists gemacht. Deshalb gibt es die überhaupt. Kompilieren kannst du nun auf ganz 
    verschiedenen Wegen: 
    a) $make 
        Dies erstellt dein Executable im build ordner
    b) $make install
        Dies führt die Einstellungen aus die in der Zeile mit install im CMakelists.txt stehen.
        Es schreibt also das Executable in den Ordner der hinter der Variable DESTINATION_FOLDER
        steht.
        Bemerkung: Es führt auch a) aus.
    c) $make install (mit der zweiten Option -> siehe CMakeLists.txt am Ende)
        Genau wie b) nur wird das executable nicht auch in build geschrieben.

4) Das Executable kannst du nun ausführen: $./merle
    Du musst dafür natürlich im Order sein in dem es liegt

Das Programm hat nur eine kurze Ausgabe.
Du kannst den build Ordner aufräumen mit $make clean
