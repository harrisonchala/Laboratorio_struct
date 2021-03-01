

#include <stdio.h>
struct recta
{
	float x;
	float y;
};
void llena_punto(struct recta *,int);
void calcula_parametros( struct recta, struct recta, float *, float *);
int main(void)
{
	float pend=0, corte_y=0;
	struct recta p1, p2;
	llena_punto(&p1, 1);
	llena_punto(&p2, 2);
	calcula_parametros(p1,p2, &pend, &corte_y);
	
	printf("\n\nLa ecuacion de la recta que pasa por los puntos dados es:");
	printf("\n\n Y = %.3fX + %.3f\n\n", pend, corte_y);
}

void llena_punto(struct recta *p, int punto)
{
	printf("\n\n ingrese coordenada 'x' del punto %d\n\n",punto);
	scanf("%f",&(*p).x);
	printf("\n\n ingrese coordenada 'y' del punto %d\n\n",punto);
	scanf("%f",&(*p).y);
	printf("\n\nEl punto ingresado es: (%.2f , %.2f)\n\n",(*p).x,(*p).y);

} 

void calcula_parametros( struct recta p1, struct recta p2, float *pend, float *corte_y)
{
	*pend=(p2.y-p1.y)/(p2.x-p1.x);
	*corte_y=p1.y-(*pend*p1.x);

}
