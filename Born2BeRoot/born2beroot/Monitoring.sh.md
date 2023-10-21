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

echo "------------------"