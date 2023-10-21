Standard partitioning uses "physical" memory. Using LVM you can configure it to see multiple disks as one big pool or multiple pool. The primary advantage of LVM is **flexibility**.The primary advantage of partitioning (non-LVM) is simplicity.

LVM combines hard disks or partitions (Physical Volume, PV) into pools (Volume Group, VG) from which "partitions" (Logical Volume, LV) can be dynamically requested
![[Pasted image 20230722083420.png]]

## Primary partition vs secundary partition
An OS can only be installed on one primary partition.
3 primary partitions per hard disk
Secondary -> designed to increase partitions. Contains logical partitions.