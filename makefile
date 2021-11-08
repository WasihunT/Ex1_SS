CC=gcc
AR=ar
FLAGS= -Wall -g
LOOP_FILES= basicClassification.o advancedClassificationLoop.o
REC_FILES= basicClassification.o advancedClassificationRecursion.o 


all: mains maindrec maindloop loops loopd recursives recursived

mains: main.o libclassrec.a
	$(CC) $(FLAGS) -o mains main.o ./libclassrec.a

maindrec: main.o libclassrec.so
	$(CC) $(FLAGS) -o maindrec main.o ./libclassrec.so

maindloop: main.o libclassloops.so
	$(CC) $(FLAGS) -o maindloop main.o ./libclassloops.so

loops: libclassloops.a

loopd: libclassloops.so 

recursives: libclassrec.a

recursived: libclassrec.so

libclassloops.a: $(LOOP_FILES)
	$(AR) -rcs  libclassloops.a $(LOOP_FILES)

libclassloops.so: $(LOOP_FILES)
	$(CC) -shared -o libclassloops.so $(LOOP_FILES)

libclassrec.a: $(REC_FILES)
	$(AR) -rcs libclassrec.a $(REC_FILES)

libclassrec.so: $(REC_FILES)
	$(CC) -shared -o libclassrec.so $(REC_FILES)

basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS) -c basicClassification.c

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationLoop.c

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c

main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c

clean:
	rm -f *.o *.a *.so mains maindloop maindrec