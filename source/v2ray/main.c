#include <sys/sysinfo.h>
#include <syslog.h>
#include <stdio.h>

int main(int argc, char** argv) {
    struct sysinfo info;
    int ret;

    if (ret != 0) {
        syslog(LOG_SYSLOG, "Failed to get info\n");
        return -1;
    }

    syslog(LOG_SYSLOG, "[MinimalPkg] %s sample package ...", argv[1]);
    syslog(LOG_SYSLOG, "[MinimalPkg] Total Ram: %u\n", (unsigned int)info.totalram);
    syslog(LOG_SYSLOG, "[MinimalPkg] Free RAM: %u\n", (unsigned int)info.freeram);

    return 0;
}
