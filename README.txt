## Description
Il s'agit d'un projet �crit en ***C++*** pour simuler le fonctionnement de ***circuits combinatoires***.

## Fonctionnalit�s
* Cr�ation d'un circuit combinatoire r�cursif, les deux entr�es d'un circuit combinatoire puevent �tre deux autres circuits, un circuit et un input ou bien deux inputs.
* Afficher un circuit combinatoire sous forme textuelle.
* Afficher un circuit combinatoire en console.
* Sauvegarder la forme textuelle d'un circuit dans un fichier.
* Lire un circuit � partir d'un fichier en utilisant sa forme textuelle.

## Installation
1. Ouvrir une ligne de commande dans le m�me emplacement de projet.
2. Compiler le projet :
```bash
make
```
3. Lancer le main : 
```bash
make test
```
4. Pour supprimer les fichiers objets (file.o):
```bash
make clean
```
## Usage
#### Dans le main
* Cr�er un ***InputGate*** :
Le constructeur de ***InputGate*** accepte deux valeurs, un **nom** de type *char* et une **valeur** de type *bool�en*.
```c++
InputGate * a = new InputGate('a', false);
InputGate * b = new InputGate('b', true);
```
* Cr�er une ***Gate*** *And*, *Nand*, *Or*, *Nor*, *Xor*, *Nxor* :
Pour Cr�er une de ces ***Gates*** , on doit intrduire deux valeurs.
Ces deux valeurs puevent �tre deux autres ***Gate***, un ***Gate*** et un ***InputGate*** ou bien deux ***InputGate***. 
```c++
AndGate * andGate = new AndGate(a, b);
OrGate * orGate = new OrGate(a, andGate);
XorGate * xorGate = new XorGate(andGate, orGate);
```
* Cr�er une ***NegationGate*** :
Pour Cr�er une ***NegationGate*** , on doit intrduire une seule valeur.
Cette valeur peut �tre une autre ***GATE*** ou bien un ***InputGate***. 
```c++
NegationGate * negation_one = new NegationGate(a);
NegationGate * negation_two = new NegationGate(andGate);
```
* Cr�er une ***OutputGate*** :
Pour Cr�er une ***OutputGate*** , on doit intrduire une seule valeur.
Cette valeur peut �tre une ***GATE*** ou bien un ***InputGate***. 
```c++
OutputGate * A = new OutputGate(a);
OutputGate * B = new OutputGate(andGate);
```
* Afficher un circuit combinatoire sous forme textuelle :
```c++
A->displayTextualForm();
```
* Afficher un circuit combinatoire en ***console*** :
```c++
A->displayInConsole();
```
* Sauvegarder la forme textuelle d'un circuit dans un fichier :
Un fichier du m�me nom que ***OutputGate*** sera cr��, ce fichier contenant la forme textuelle du circuit.
```c++
A->saveInFile();
```