## Pass last change
The pass timelife is from 2 to 30 days.
/etc/login.defs
```sh
PASS_MAX_DAYS 30
PASS_MIN_DAYS 2
```

## Srong pass
The rules that every password has to follow.
/etc/pam.d/common-password
```sh
minlen=10
ucredit=-1
dcredit=-1
lcredit=-1
maxrepeat=3
reject_username
difok=7
enforce_for_root
```
10 char pass with highletter, low letter, digit.
Not username and not repeated more than 3 times.
