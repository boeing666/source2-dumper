#pragma once

class CEnvSoundscape : public CBaseEntity /*0x0*/  // sizeof 0x808, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CEntityIOOutput m_OnPlay; // offset 0x778, size 0x18, align 255
    float32 m_flRadius; // offset 0x790, size 0x4, align 4
    char _pad_0794[0x4]; // offset 0x794
    CGameSoundEventName m_soundEventName; // offset 0x798, size 0x8, align 8
    bool m_bOverrideWithEvent; // offset 0x7A0, size 0x1, align 1
    char _pad_07A1[0x3]; // offset 0x7A1
    int32 m_soundscapeIndex; // offset 0x7A4, size 0x4, align 4 | MNotSaved
    int32 m_soundscapeEntityListId; // offset 0x7A8, size 0x4, align 4 | MNotSaved
    char _pad_07AC[0x4]; // offset 0x7AC
    CUtlSymbolLarge[8] m_positionNames; // offset 0x7B0, size 0x40, align 8
    CHandle< CEnvSoundscape > m_hProxySoundscape; // offset 0x7F0, size 0x4, align 4
    bool m_bDisabled; // offset 0x7F4, size 0x1, align 1
    char _pad_07F5[0x3]; // offset 0x7F5
    CUtlSymbolLarge m_soundscapeName; // offset 0x7F8, size 0x8, align 8
    uint32 m_soundEventHash; // offset 0x800, size 0x4, align 4 | MNotSaved
    char _pad_0804[0x4]; // offset 0x804
};
