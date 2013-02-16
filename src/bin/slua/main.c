#include <stdio.h>

static const char *pmProgram = "slua";
static const char *pmPkgVer  = "" PM_ID_VER "";
static const char *pmPkgDttm = "" __DATE__ " at " __TIME__ "";

int main(int argc, char *argv[]) {
	printf(" info:\t%s version %s compiled on %s\n", pmProgram, pmPkgVer, pmPkgDttm);

	return 2;
}
