obj-m := hello.o 
KDIR := /lib/modules/4.8.0-41-generic/build
PWD := $(shell pwd)

default:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD)