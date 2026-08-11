#pragma once

class CEnvSoundscape : public CBaseEntity /*0x0*/  // sizeof 0x528, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    CEntityIOOutput m_OnPlay; // offset 0x498, size 0x18, align 255
    float32 m_flRadius; // offset 0x4B0, size 0x4, align 4
    char _pad_04B4[0x4]; // offset 0x4B4
    CGameSoundEventName m_soundEventName; // offset 0x4B8, size 0x8, align 8
    bool m_bOverrideWithEvent; // offset 0x4C0, size 0x1, align 1
    char _pad_04C1[0x3]; // offset 0x4C1
    int32 m_soundscapeIndex; // offset 0x4C4, size 0x4, align 4 | MNotSaved
    int32 m_soundscapeEntityListId; // offset 0x4C8, size 0x4, align 4 | MNotSaved
    char _pad_04CC[0x4]; // offset 0x4CC
    CUtlSymbolLarge[8] m_positionNames; // offset 0x4D0, size 0x40, align 8
    CHandle< CEnvSoundscape > m_hProxySoundscape; // offset 0x510, size 0x4, align 4
    bool m_bDisabled; // offset 0x514, size 0x1, align 1
    char _pad_0515[0x3]; // offset 0x515
    CUtlSymbolLarge m_soundscapeName; // offset 0x518, size 0x8, align 8
    uint32 m_soundEventHash; // offset 0x520, size 0x4, align 4 | MNotSaved
    char _pad_0524[0x4]; // offset 0x524
};
