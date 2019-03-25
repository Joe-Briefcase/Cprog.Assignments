// First Assignment

int main(int argc, const char* argv[]){

	double pi = 0;
	double brøk = 1;

	for( int i=0; i< 10000; i++){

		pi = pi + ((1/brøk) - (1/(brøk+2)));
		brøk = brøk + 4;

	}

	pi = pi*4;
	printf("%.6f",pi);
}
