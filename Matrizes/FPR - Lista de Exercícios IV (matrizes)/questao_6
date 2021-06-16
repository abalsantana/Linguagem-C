a)

float itemA(float M[12][10]){
	int i, j, soma=0;
	for(i=0; i<12; i++){
		for(j=0; j<10; j++){
			soma += M[i][j];
		}
	}
	return soma;
}

b)

float itemB(float M[12][10], int mes){
	int i;
	float soma=0;
	mes--;
	for(i=0;i<10;i++){
		soma += M[mes][j];
	}
}

c)

float itemC(float M[12][10], int func){
	int j, soma=0;
	func--;
	for(j=0;j<10;j++){
		soma += M[i][func];
	}
	return soma;
}

d)

int itemD(float M[12][10]){
	float maior = itemB(M, 1), vendaMes;
	int maiorMes = 1, mes;
	for(mes = 2; mes<=12; mes++){
		vendaMes =itemB(M, mes);
		if(vendaMes>maior){
			maior = vendaMes;
			maiorMes = mes;
		}
	}
	return miorMes;
}

e)

int itemE(float M[12][10]){
	float menor = itemC(M, 1), rendFunc;
	int menorFunc = 1, func;
	for(func=2; func<=10; func++){
		rendFunc = itemC(M, func);
		if(rendFunc < menor){
			menor = vendFunc;
			menorFunc = func;
		}
	}
	return menorFunc;
}