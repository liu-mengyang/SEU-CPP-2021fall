CPP = g++
DEBUG = -D_MACRO
TARGET = ex1

all: clean $(TARGET)

$(TARGET): ex1.o ex2.o ex3.o GradeBook.o Employee.o Date.o
	$(CPP) -o ex1 ex1.o GradeBook.o
	$(CPP) -o ex2 ex2.o Employee.o
	$(CPP) -o ex3 ex3.o Date.o
	del *.o

ex1.o: ex1.cpp GradeBook.h
	$(CPP) -c ex1.cpp

ex2.o: ex2.cpp Employee.h
	$(CPP) -c ex2.cpp

ex3.o: ex3.cpp Date.h
	$(CPP) -c ex3.cpp

GradeBook.o: GradeBook.cpp GradeBook.h
	$(CPP) -c GradeBook.cpp

Employee.o: Employee.cpp Employee.h
	$(CPP) -c Employee.cpp

Date.o: Date.cpp Date.h
	$(CPP) -c Date.cpp

clean:
	del *.o *.exe