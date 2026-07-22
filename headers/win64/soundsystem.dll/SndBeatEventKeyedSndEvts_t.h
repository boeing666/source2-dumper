#pragma once

struct SndBeatEventKeyedSndEvts_t : public SndBeatEventKeys_t /*0x0*/  // sizeof 0x18, align 0x8 [vtable] (soundsystem) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x10]; // offset 0x0
    CUtlString m_strSoundEventName; // offset 0x10, size 0x8, align 8 | MPropertyFriendlyName
};
