typedef struct ville {
	char* nom;
	float latitude;
	float longitude;
} VILLE;

float norme(VILLE *v, float latitude, float longitude);
VILLE* findNearest(VILLE tab[], int size, float latitude, float longitude);
