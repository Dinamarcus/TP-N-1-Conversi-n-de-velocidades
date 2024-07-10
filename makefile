app: main.o tabla.o conversion.o
	gcc -o app main.o tabla.o conversion.o

main.o: main.c
	gcc -c main.c

tabla.o: tabla.c tabla.h
	gcc -c tabla.c

conversion.o: conversion.c conversion.h
	gcc -c conversion.c