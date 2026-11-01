#include "cityDataBase.h"
#include "main.h"

const VILLE ville[4] = {
		{"Kiev",50.4510,30.5234},
		{"Cergy",49.033,2.066},
		{"Chicago", 41.385,-87.623},
		{"Barcelone",41.385,2.173}
};

float pui2(float x){
	return x*x;
}

float norme(VILLE *v, float latitude, float longitude){
	return pui2(v->latitude-latitude) + (pui2(v->longitude-longitude) * pui2(cosf((v->latitude+latitude)/2)));
}

VILLE* findNearest(VILLE tab[], int size, float latitude, float longitude){
	VILLE* nearest = &tab[0];
	float v_norme = norme(nearest, latitude, longitude);
	for(int i=1; i<size; i++){
		float n_norme = norme(&tab[i], latitude, longitude);
		if(n_norme<v_norme){
			nearest = &tab[i];
			v_norme = n_norme;
		}
	}
	return nearest;
}
