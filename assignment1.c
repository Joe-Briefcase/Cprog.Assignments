// First Assignment

int main(int argc, const char* argv[]){

	double pi = 0;
	double br�k = 1;

	for( int i=0; i< 10000; i++){

		pi = pi + ((1/br�k) - (1/(br�k+2)));
		br�k = br�k + 4;

	}

	pi = pi*4;
	printf("%.6f",pi);
}
