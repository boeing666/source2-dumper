#pragma once

struct SndBeatEventKeyedMidiNotes_t : public SndBeatEventKeys_t /*0x0*/  // sizeof 0x18, align 0x8 [vtable trivial_dtor] (soundsystem) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x10]; // offset 0x0
    uint8 m_nStatus; // offset 0x10, size 0x1, align 1 | MPropertyFriendlyName
    uint8 m_nNote; // offset 0x11, size 0x1, align 1 | MPropertyFriendlyName
    uint8 m_nVelocity; // offset 0x12, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0013[0x5]; // offset 0x13
};
