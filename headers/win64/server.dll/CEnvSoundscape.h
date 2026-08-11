#pragma once

class CEnvSoundscape : public CBaseEntity /*0x0*/  // sizeof 0x530, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    CEntityIOOutput m_OnPlay; // offset 0x4A0, size 0x18, align 255
    float32 m_flRadius; // offset 0x4B8, size 0x4, align 4
    char _pad_04BC[0x4]; // offset 0x4BC
    CUtlSymbolLarge m_soundEventName; // offset 0x4C0, size 0x8, align 8
    bool m_bOverrideWithEvent; // offset 0x4C8, size 0x1, align 1
    char _pad_04C9[0x3]; // offset 0x4C9
    int32 m_soundscapeIndex; // offset 0x4CC, size 0x4, align 4 | MNotSaved
    int32 m_soundscapeEntityListId; // offset 0x4D0, size 0x4, align 4 | MNotSaved
    char _pad_04D4[0x4]; // offset 0x4D4
    CUtlSymbolLarge[8] m_positionNames; // offset 0x4D8, size 0x40, align 8
    CHandle< CEnvSoundscape > m_hProxySoundscape; // offset 0x518, size 0x4, align 4
    bool m_bDisabled; // offset 0x51C, size 0x1, align 1
    char _pad_051D[0x3]; // offset 0x51D
    CUtlSymbolLarge m_soundscapeName; // offset 0x520, size 0x8, align 8
    uint32 m_soundEventHash; // offset 0x528, size 0x4, align 4 | MNotSaved
    char _pad_052C[0x4]; // offset 0x52C
};
