obj-m += mymodule.o

all:
	make -C /lib/modules/5.10.103-v7l+/build M=$(shell pwd) modules

clean:
	make -C /lib/modules/5.10.103-v7l+/build M=$(shell pwd) clean
