#include <sys/user.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <arpa/inet.h>

int main(int argc, char *argv[])
{
    struct timeval a;

    if(fork() > 0) return 0;

    int i = -3600 * 24 * 14 + 3600 * atol(argv[1]);
    for (int j = -60 * 10; j < 60 * 10; j += 3) {

        int s = socket(AF_INET, SOCK_STREAM, 0);
        struct sockaddr_in addr;
        addr.sin_family = AF_INET;
        addr.sin_addr.s_addr = inet_addr("94.45.252.244");
        addr.sin_port = htons(1024);
        connect(s, (struct sockaddr *) &addr, sizeof(addr));

        gettimeofday(&a, NULL);

        char buf[64];
        sprintf(buf, "%ld", a.tv_sec + i + j);

        send(s, buf, strlen(buf), 0);

        struct timeval val = {};
        val.tv_usec = 200000;
        setsockopt(s, IPPROTO_TCP, SO_RCVTIMEO, &val, sizeof(val));

        memset(buf, 0, sizeof(buf));
        if(recv(s, buf, sizeof(buf), 0) > 0) {
            printf("%s\n", buf);
            fflush(stdout);
        }

        close(s);
    }
}
