#pragma once

struct SndBeatEventKeyedMidiNotes_t : public SndBeatEventKeys_t /*0x0*/  // sizeof 0x10, align 0x8 [vtable trivial_dtor] (soundsystem) {MGetKV3ClassDefaults}
{
    char _pad_0000[0xC]; // offset 0x0
    uint8 m_nStatus; // offset 0xC, size 0x1, align 1 | MPropertyFriendlyName
    uint8 m_nNote; // offset 0xD, size 0x1, align 1 | MPropertyFriendlyName
    uint8 m_nVelocity; // offset 0xE, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_000F[0x1]; // offset 0xF
};
