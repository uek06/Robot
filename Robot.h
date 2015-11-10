class Robot {

private:
	int String_direction;

public:
	void avancer(int int_x, int int_y);

	void tourner(int String_direction);

	void saisir(int Objet_o);

	void poser();

	int peser();

	void rencontrerPlot(int Plot_P);

	int evaluerPlot(int PlotP);

	void figer();

	void repartir();

	void afficher();

	void notify();

	void addObserver(int Afficheur_a);
};
