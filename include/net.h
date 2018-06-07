#ifndef ASCL_NET_H
#define ASCL_NET_H

typedef enum ascl_net_addr_type_t {
    ASCL_NET_NONE,
    ASCL_NET_IPv4,
    ASCL_NET_IPv6
} ascl_net_addr_type_t;

typedef struct ascl_net_addr_t ascl_addr_type_t;

ascl_net_addr_type_t ascl_net_get_type(ascl_net_addr_t *addr);

void ascl_net_set_type(ascl_net_addr_t *addr,
        ascl_addr_type_t type);

int ascl_net_get_port(ascl_net_addr_t *addr);

void ascl_net_set_port(ascl_net_addr_t *addr,
        int port);

uint8_t *ascl_net_get_ip(ascl_net_addr_t *addr);

void ascl_net_set_ip(ascl_net_addr_t *addr,
        uint8_t *ip);

#endif
