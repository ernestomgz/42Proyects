Every 10 minutes %%take a look at wall%%  the script will display some information on all terminals. The banner is optional. No error must be visible.

Your script must always be able to display the following information:
- The architecture of your operating system and its kernel version. (uname)
- The number of physical processors. (top)
- The number of virtual processors.(top)
- The current available RAM on your server and its utilization rate as a percentage. (top)
- The current available memory on your server and its utilization rate as a percentage. (top)
- The current utilization rate of your processors as a percentage. (top)
- The date and time of the last reboot. 
- Whether LVM is active or not.
- The number of active connections(netcat -notpl).
- The number of users using the server.
- The IPv4 address of your server and its MAC (Media Access Control) address. (ip addr)
- The number of commands executed with the sudo program.



## Script explanation
### Architecture

`uname -a` - show info about the system

### Physical/virtual cores
`/proc/cpuinfo` -> File with info about the cores
(searching for id of phisical cores)

### RAM
`free --mega` show info about used ram **in megabytes** 

#### Memoria disco
`df -m` -> show info about memory used **in megabytes** (-m) 

### CPU usage
`vmstat 1 4` -> virtual memory status 1 - 4 seconds update

### Last reboot
`who -b` -> last boot. -b specifies boot

### LVM usage
`lsblk` -> disk info

### TCP connections
`ss -ta` -> socket stadistics. In this case TCP conn (-ta)

### Users
`users` show users

### IP and Mac
`ip link` -> show interfaces.

### Count sudo commands
`journalctl _COMM=sudo` show important info about the system.
`_COMM=sudo` means executed by sudo