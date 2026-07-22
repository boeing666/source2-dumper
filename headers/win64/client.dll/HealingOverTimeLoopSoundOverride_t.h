#pragma once

struct HealingOverTimeLoopSoundOverride_t  // sizeof 0x38, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CSoundEventName m_sStartSound; // offset 0x0, size 0x10, align 8
    CSoundEventName m_sLoopSound; // offset 0x10, size 0x10, align 8
    CSoundEventName m_sEndSound; // offset 0x20, size 0x10, align 8
    int32 m_nPriority; // offset 0x30, size 0x4, align 4
    char _pad_0034[0x4]; // offset 0x34
};
