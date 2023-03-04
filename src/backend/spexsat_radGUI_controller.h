#ifndef SPEXSAT_RADGUI_CONTROLLER_H
#define SPEXSAT_RADGUI_CONTROLLER_H
#include "spexsat_radGUI_dataManager.h"
#include "spexsat_radGUI_serialReader.h"

typedef struct spexsat_radGUI_guiData* guiData;

guiData initGui();

int init_serial(const char* port, int baud, guiData data);

int save_trial(guiData data);

int set_save_location(guiData data, const char* path);

int new_trial(guiData data, const char* name, const char* type, const serialPort* port, const int trialLength);

int record_trial(guiData data, int* time);

#endif
