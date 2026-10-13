#include <stdio.h>

#define NODE_ID 42

void ping() {
    printf("PING");
}

void pong() {
    printf("PONG");
}

void handshake() {
    ping();
    printf("-");
    pong();
    printf("-");
    ping();
}

int main() {
    int packet_size = NODE_ID * 4;
    int total_transfer = packet_size * 3;

    // Первая строка
    handshake();
    printf(":%d\n", packet_size);

    // Вторая строка
    handshake();
    printf(":%d\n", total_transfer);

    // Третья строка
    printf("SESSION:CLOSED\n");

    return 0;
}
