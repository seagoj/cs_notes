/* sockaddr: holds socket address information */
struct sockaddr {
  unsigned short	sa_family;	//address family, AF_xxx
  char			sa_data[14];	//14 bytes of protocol address
};

/* sockaddr_in: _in for 'internet', used to implement the sockaddr struct */
struct sockaddr_in {
  short int		sin_family	//address family
  unsigned short int	sin_port;	//port number in Network Byte Order
  struct in_addr	sin_addr;	//internet address in Network Byte Order
  unsigned char		sin_zero[8];	//same size as struct sockaddr
};

/* Internet Address (structure for historical reasons) */
struct in_addr {
  unsigned long s_addr;	//32-bit long (4 bytes)
};
