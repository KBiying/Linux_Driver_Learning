cmd_/home/pi/Linux_Driver_Learning/2dev_nr/modules.order := {   echo /home/pi/Linux_Driver_Learning/2dev_nr/dev_nr.ko; :; } | awk '!x[$$0]++' - > /home/pi/Linux_Driver_Learning/2dev_nr/modules.order
