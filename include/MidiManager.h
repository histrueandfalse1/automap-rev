#include <CoreFoundation/CoreFoundation.h>
#include <CoreMIDI/CoreMIDI.h>
#include <CoreServices/CoreServices.h>
#include <vector>
#include <string>

class MidiManager
{
public:
    MidiManager();
    ~MidiManager();

private:
    MIDIClientRef clientRef;
    MIDIPortRef inputPortRef;
    MIDIPortRef outputPortRef;
};
