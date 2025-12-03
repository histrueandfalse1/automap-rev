#include "MidiManager.h"

MidiManager::MidiManager()
{
    CFStringRef clientName = CFStringCreateWithCString(
        NULL,
        "automap-rev",
        kCFStringEncodingASCII
    );
}