#!/bin/bash

#ifconfig | grep "ether" | awk '{print 2}'
#ip link show | grep "ether" | awk '{print 2}'

ip link show | grep -oE '([0-9a-fA-F]{2}:){5}[0-9a-fA-F]{2}'

