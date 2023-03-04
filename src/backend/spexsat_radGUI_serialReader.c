#include "spexsat_radGUI_serialreader.h"

struct spexsat_radGUI_serialPort {

};

serialPort* init_serial(const char* port, int baudRate){

}

int close_serial(serialPort* port){
close(port -> fd);
free(port->fd);
free(port);
if(port == 0){
    return 1;
}
return 0;
}

int serial_readbytes(serialPort* port, char* buf, int bytes){

}

int serial_readtime(serialPort* port, char* buf, int buf_max, int time){

}

int serial_write(serialPort* port, const char* out){

}
