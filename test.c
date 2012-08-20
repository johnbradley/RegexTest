#include <sys/types.h>
#include <regex.h>

/*
int regcomp(regex_t *preg, const char *regex, int cflags);

int regexec(const regex_t *preg, const char *string, size_t nmatch,
            regmatch_t pmatch[], int eflags);

size_t regerror(int errcode, const regex_t *preg, char *errbuf,
                size_t errbuf_size);

void regfree(regex_t *preg);
*/

//time test how long it takes
//for regex vs explicit code
int main(void) {
    return 0;
}
