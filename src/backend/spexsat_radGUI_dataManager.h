#ifndef SPEXSAT_RADGUI_DATAMANAGER_H
#define SPEXSAT_RADGUI_DATAMANAGER_H
#include "spexsat_radGUI_serialReader.h"

typedef struct spexsat_radGUI_trial trial;

trial* init_trial(const char* name, const char* type, const serialPort* port, const int trialLength);

int run_trial(trial* trial);

int save_trial(const trial* trial);

int del_trial(trial* trial);

#endif
