CC = clang
CFLAGS = -Wall -Wextra -std=c11

TARGET = dimimap

SRCS = main.c \
       showmap/show_map.c \
       showmap/bonguan/bonguan.c \
       showmap/others/others.c \
       findteacher/find_teacher.c \
       findpos/find_pos.c \
       findpath/find_path.c

HEADERS = showmap/show_map.h \
          showmap/bonguan/bonguan.h \
          showmap/others/others.h \
          findteacher/find_teacher.h \
          findpos/find_pos.h \
          findpath/find_path.h

$(TARGET): $(SRCS) $(HEADERS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

clean:
	rm -f $(TARGET)
