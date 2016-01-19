CC = nasm

SOURCE = test.asm
TARGET = test
OBJECT = test.o

$(TARGET):	$(OBJECT) 
	clear							#clear screen
	ld -s -o $(TARGET) $(OBJECT)				#link nasm file to executable

$(OBJECT):	$(SOURCE)
	$(CC) -f elf $(SOURCE) 					#compile to object

clean:
	rm -f $(TARGET) $(OBJECT) core				#remove object

#debug: $(TARGET) $(OBJECT)
#	./$(TARGET)						#run object
#	rm -f $(TARGET) $(OBJECT) core				#remove object
