#include <config.h>
#include <dailykorwin.h>

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifdef HAVE_RANDOM
int x_random() {
	return random();
}
#else
int x_random() {
	// rand() is often low-quality on lower bits
	return rand() >> 16;
}
#endif

int main() {
#ifdef HAVE_SRANDOMDEV
	srandomdev();
#elif defined(HAVE_SRANDOM)
	srandom(clock());
#else
	srand(clock());
#endif
	int which = x_random() % DAILYKORWIN_TEXTC;
	printf("Janusz na dziś:\n");
	printf("%s\n", DAILYKORWIN_TEXTS[which]);
	return 0;
}
