#pragma once

struct HealingReceivedSounds_t  // sizeof 0x60, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CSoundEventName m_strDirectHealingSmall; // offset 0x0, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strDirectHealingMedium; // offset 0x10, size 0x10, align 8 | MPropertyDescription
    CUtlOrderedMap< ECitadelAudioLoopSounds, CSoundEventName > m_HOTLoopSounds; // offset 0x20, size 0x28, align 8 | MPropertyDescription
    int32 m_nPriority; // offset 0x48, size 0x4, align 4 | MPropertyDescription
    char _pad_004C[0x4]; // offset 0x4C
    CSoundEventName m_strHOTToppedOff; // offset 0x50, size 0x10, align 8 | MPropertyDescription
};
