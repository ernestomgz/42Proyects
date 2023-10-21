## password policy
- Your password has to expire every 30 days.
- The minimum number of days allowed before the modification of a password will be set to 2.
- The user has to receive a warning message 7 days before their password expires. 
- Your password must be at least 10 characters long. It must contain an uppercase letter, a lowercase letter, and a number. Also, it must not contain more than 3 consecutive identical characters. 6 Born2beRoot 
- The password must not include the name of the user. 
- The following rule does not apply to the root password: The password must have at least 7 characters that are not part of the former password. 
- Of course, your root password has to comply with this policy.

**After edit password configuration change user and root password**


## Strong configuration for sudo group
- Authentication using sudo has to be limited to 3 attempts in the event of an incorrect password. 
- A custom message of your choice has to be displayed if an error due to a wrong password occurs when using sudo. 
- Each action using sudo has to be archived, both inputs and outputs. The log file has to be saved in the /var/log/sudo/ folder. 
- The TTY mode has to be enabled for security reasons. 
- For security reasons too, the paths that can be used by sudo must be restricted.