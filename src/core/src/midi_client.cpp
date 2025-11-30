#include "midi_client.hpp"

MidiClient::MidiClient(const std::string&clientName)
: _client(0), _inputPort(0), _outputPort(0)
{
    CFStringRef clientNameRef = CFStringCreateWithCString(
        NULL,
        clientName.c_str(),
        kCFStringEncodingUTF8
    );

    OSStatus status = MIDIClientCreate(
        clientNameRef,
        NULL,
        NULL,
        &_client
    );

    if (clientNameRef)
    {
 CFRelease(clientNameRef);
    }

    if (status != noErr)
    {
        std::cerr << "Error: Failed to create MIDI Client (OSStatus: " << status << ").\n";
        _client = 0;
    }
}

MidiClient::~MidiClient() {
    if (_inputPort) {
        MIDIPortDispose(_inputPort);
    }

    if (_outputPort) {
        MIDIPortDispose(_outputPort);
    }

    if (_client) {
        MIDIClientDispose(_client);
    }


}