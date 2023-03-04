#ifndef SPEXSAT_RADGUI_SERIALREADER_H
#define SPEXSAT_RADGUI_SERIALREADER_H

typedef struct spexsat_radGUI_serialPort serialPort;

serialPort* init_serial(const char* port, int baudRate);

int close_serial(serialPort* port);

int serial_readbytes(serialPort* port, char* buf, int bytes);

int serial_readtime(serialPort* port, char* buf, int buf_max, int time);

int serial_write(serialPort* port, const char* out);

#endif
