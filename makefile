CC = g++

option = -g -W -Wall -std=c++11 

OBJ_FICHIER = main.o Robot.o EtatRobot.o EtatFige.o EtatEnRoute.o Objet.o Position.o Plot.o Afficheur.o EtatEnCharge.o EtatEnChargeFacePlot.o EtatAVideFacePlot.o EtatAVide.o

EXE = main

all: $(EXE)
	
#Exécutable
executionRobot: $(OBJ_FICHIER)
	$(CC) $(option) -o $(EXE) $(OBJ_FICHIER)
#Main
main.o: main.cpp 
	$(CC) $(option) -c main.cpp -o main.o

#Classe EtatRobot
EtatRobot.o: EtatRobot.h EtatRobot.cpp
	$(CC) $(option) -c EtatRobot.cpp -o EtatRobot.o

#Classe EtatFige
EtatFige.o: EtatFige.h EtatFige.cpp
	$(CC) $(option) -c EtatFige.cpp -o EtatFige.o

#Classe EtatEnRoute
EtatEnRoute.o: EtatEnRoute.h EtatEnRoute.cpp
	$(CC) $(option) -c EtatEnRoute.cpp -o EtatEnRoute.o

#Classe EtatAVide
EtatAVide.o: EtatAVide.h EtatAVide.cpp
	$(CC) $(option) -c EtatAVide.cpp -o EtatAVide.o

#Classe EtatAVideFacePlot
EtatAVideFacePlot.o: EtatAVideFacePlot.h EtatAVideFacePlot.cpp
	$(CC) $(option) -c EtatAVideFacePlot.cpp -o EtatAVideFacePlot.o

#Classe EtatEnCharge
EtatEnCharge.o: EtatEnCharge.h EtatEnCharge.cpp
	$(CC) $(option) -c EtatEnCharge.cpp -o EtatEnCharge.o

#Classe EtatEnChargeFacePlot
EtatEnChargeFacePlot.o: EtatEnChargeFacePlot.h EtatEnChargeFacePlot.cpp
	$(CC) $(option) -c EtatEnChargeFacePlot.cpp -o EtatEnChargeFacePlot.o

#Classe Robot
Robot.o: Robot.h Robot.cpp
	$(CC) $(option) -c Robot.cpp -o Robot.o

#Classe Objet
Objet.o: Objet.h Objet.cpp
	$(CC) $(option) -c Objet.cpp -o Objet.o
	
#Classe Position
Position.o: Position.h Position.cpp
	$(CC) $(option) -c Position.cpp -o Position.o

#Classe Plot
Plot.o: Plot.h Plot.cpp
	$(CC) $(option) -c Plot.cpp -o Plot.o

#Classe Afficheur
Afficheur.o : Afficheur.h Afficheur.cpp
	$(CC) $(option) -c Afficheur.cpp -o Afficheur.o

clean: 
	rm -vf *.o main