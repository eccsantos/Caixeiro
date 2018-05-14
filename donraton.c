#include<stdio.h>
#include<math.h>
	int main(){

	int ncid; //numero de cidades
	int i; // variavel do for
	int j;
	int k;
	double resuldist;
	double pontx[5]; //vetor para armazenar valores das abscissas
	double ponty[5]; //vetor para armazenar valores das ordenadas
	double x; // x da distancia
	double y; //y da distancia

	scanf("%d",&ncid); //inicializa  numero de cidades

	for (i=0; i<=ncid; i++ ){ //inicializa localização no plano cartesiano
		scanf ("%lf %lf", &pontx[i], &ponty[i]);
	}

	double dist[ncid];
	int path[ncid][2];
	int t;
	for (i=0;i<sizeof(dist)/sizeof(dist[0]);i++){ //primeira camada da arvore
		dist[i] = sqrt ( pow ( pontx[0] - pontx[i+1], 2) + pow ( ponty[0] - ponty[i+1], 2));
		}
		for (t=0;t<2;t++){
			if (t==0){
				path[i][t] = 0;
			}
			else {
				path[i][t]= 1;
			}
	 	}
	}
		printf("%lf %d", dist[ncid], path[i][t]);

	/*double dist2[ncid*(ncid-1)];
	int index=0;
	char path[ncid*(ncid-1)];
	for (i=0;i<ncid;i++){ //segunda camada da arvore
		for (j=0;j<ncid-1;j++){
			dist2[index] = dist[i] + sqrt ( pow ( pontx[i] - pontx[j],2)) + ( pow ( ponty[i] - ponty[j],2));
			index++
			path=
	}


	double dist3[24];
	for (i=0; i<4; i++){ //terceira camada da arvore 
		for (j=0; j<12; j++){
			for(k=0; k<24; k++){
				dist3[i] = sqrt ( pow ( pontx[2] - pontx[i+3],2)) + ( pow ( ponty[2] - ponty[i+3],2));
	}

	double dist4[24];
	for(i=0; i<24; i++){
		dist3[i] = sqrt ( pow ( pontx[i] - pontx[0],2)) + ( pow ( ponty[i] - ponty[0],2));*/


	return 0;
}





