CC = gcc

SOURCE = test.cpp
TARGET = test
OBJECT = test.o

$(TARGET):	$(OBJECT) 
	clear							#clear screen
	$(CC) -o $(TARGET) $(OBJECT) -lGL -lGLU -lm -lglut	#compile to object

$(OBJECT):	$(SOURCE)
	$(CC) -c $(SOURCE)					#compile to object

clean:
	rm -f $(TARGET) $(OBJECT) core				#remove object

debug: $(TARGET) $(OBJECT)
	./$(TARGET)						#run object
	rm -f $(TARGET) $(OBJECT) core				#remove object
