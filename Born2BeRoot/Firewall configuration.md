The firewall that is going to be used is **UFW**.

## Configuration file
The configuration file of UFW is on the path:
 `/etc/default/ufw`
## Command line usage
Is used to start/stop ufw
	  ufw [**--dry-run**] **enable|disable|reload**

Is used to accept/deny a type of traffic.
       ufw [**--dry-run**] **default** allow|deny|reject [incoming|outgoing|routed]
> [!NOTE] allow ssh traffic
> `sudo ufw allow ssh`

Is used to enable or disable logs. Is useful to mitigate problems.
       ufw [**--dry-run**] **logging** on|off|LEVEL

Is used to remove all the existing rules
       ufw [**--dry-run**] **reset**

       ufw [**--dry-run**] **status** [verbose|numbered]

       ufw [**--dry-run**] **show** REPORT

       ufw  [**--dry-run**]  [**delete**]  [**insert**  NUM]   [**prepend**]   **allow|deny|reject|limit**   [**in|out**]
       [**log|log-all**] [ PORT[/PROTOCOL] | APPNAME ] [**comment** COMMENT]

       ufw [**--dry-run**] [**rule**] [**delete**] [**insert** NUM] [**prepend**] **allow|deny|reject|limit** [**in|out** [**on**
       INTERFACE]] [**log|log-all**] [**proto** PROTOCOL] [**from** ADDRESS [**port** PORT | **app** APPNAME  ]]  [**to**
       ADDRESS [**port** PORT | **app** APPNAME ]] [**comment** COMMENT]

       ufw  [**--dry-run**]  **route** [**delete**] [**insert** NUM] [**prepend**] **allow|deny|reject|limit** [**in|out** **on**
       INTERFACE] [**log|log-all**] [**proto** PROTOCOL] [**from** ADDRESS [**port** PORT  |  **app**  APPNAME]]  [**to**
       ADDRESS [**port** PORT | **app** APPNAME]] [**comment** COMMENT]

       ufw [**--dry-run**] **delete** NUM

       ufw [**--dry-run**] **app** **list|info|default|update**
## Tasks in this exercise
- configure only open port 4242
- 