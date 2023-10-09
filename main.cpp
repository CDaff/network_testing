#include <stdio.h>
#include <math.h>
#include <winsock.h>
#include <iostream.h>

struct addrinfo
{
    int                    ai_flags;
    int                    ai_family;
    int                    ai_socktype;
    int                    ai_protocol;
    size_t                 ai_addrlen;
    struct  sockaddr      *ai_addr;
    char                  *ai_canonname;

    struct  addrinfo      *ai_next;
};

// IPv4 Structs
struct sockaddr
{
    unsigned short    sa_family;
    char              sa_data[14];
};

struct sockaddr_in
{
    short int               sin_family;   // Address family, AF_INET
    unsigned short int      sin_port;     // Port number
    struct in_addr          sin_addr;     // Internet Address
    unsigned char           sin_zero[8];  // Same size as struct addr
};

struct in_addr
{
    uint32_t_s_addr;
}

// IPv6 Structs
struct sockaddr_in6
{
    u_int16_t         sin6_family;      // address family, AF_INET6
    u_int16_t         sin6_port;        // port number, Network Byte Order
    u_int32_t         sin6_flowinfo;    // IPv6 flow information
    struct in6_addr   sin6_addr;        // IPv6 address
    u_int32_t         sin6_scope_id;    // Scope ID
};

struct in6_addr
{
    unsigned char   s6_addr[16];    // IPv6 address
};

struct sockaddr_storage
{
    sa_family_t     ss_family;    // address family

    // The following is padding, it can be ignored
    char      __ss__pad1[_SS_PAD1SIZE];
    int       __ss__align;
    char      __ss__pad2[_SS_PAD2SIZE];
    
};

void getaddrinfo()
void createsocket()
void
