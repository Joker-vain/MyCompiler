#include "for_gcc_build.hh" // only for gcc, TinyC will ignore it.

int main( {
    int i;
	int a[2];
	float j;
    i = 0;
	j = 2.2;
	a[1] = 1;
    while (i < 10) {
        i = i + 1;
        if (i == 3 || i == 5) {
            continue;
        }
        if (i == 8) {
            break;
        }
        print("%d! = %d", i, factor(i));
    }
	
    return 0;
}

int factor(int n) {
    if (n < 2) {
        return 1;
    }
	int i;
	int sum;
	sum=0;
	for(i=0;i<10;i++){
		sum=sum+i;
	}
    return n * factor(n - 1);
}