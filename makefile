sources = main.cpp Robot.cpp Position.cpp Plot.cpp Objet.cpp EtatRobot.cpp EtatFige.cpp EtatEnRoute.cpp EtatEnChargeFacePlot.cpp EtatEnCharge.cpp EtatAVideFacePlot.cpp EtatAVide.cpp Afficheur.cpp
objets = $(sources:.cpp=.o)



%: %.o
		$(LINK.cpp) -o $@ $^


robot : $(objets)
		g++ -o $@ $^
		rm -f *.o

###

clean:
		 rm -f *~ *.o *.bak

depend:
		makedepend $(sources)


# DO NOT DELETE

main.o: Robot.h Afficheur.h EtatRobot.h Plot.h Position.h Objet.h
main.o: EtatAVide.h EtatEnRoute.h EtatFige.h
Robot.o: Robot.h Afficheur.h EtatRobot.h Plot.h Position.h Objet.h
Robot.o: EtatAVide.h EtatEnRoute.h EtatFige.h
Position.o: Position.h
Plot.o: Plot.h
Objet.o: Objet.h
EtatRobot.o: EtatRobot.h EtatAVide.h EtatEnRoute.h EtatFige.h
EtatFige.o: EtatFige.h EtatRobot.h EtatAVide.h EtatEnRoute.h
EtatEnRoute.o: EtatEnRoute.h EtatRobot.h EtatFige.h
EtatEnChargeFacePlot.o: EtatEnChargeFacePlot.h EtatEnRoute.h EtatRobot.h
EtatEnChargeFacePlot.o: EtatFige.h EtatEnCharge.h EtatAVideFacePlot.h
EtatEnCharge.o: EtatEnCharge.h EtatEnRoute.h EtatRobot.h EtatFige.h
EtatEnCharge.o: EtatEnChargeFacePlot.h
EtatAVideFacePlot.o: EtatAVideFacePlot.h EtatEnRoute.h EtatRobot.h EtatFige.h
EtatAVideFacePlot.o: EtatAVide.h EtatEnChargeFacePlot.h
EtatAVide.o: EtatAVide.h EtatEnRoute.h EtatRobot.h EtatFige.h
EtatAVide.o: EtatAVideFacePlot.h
