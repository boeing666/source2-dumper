#pragma once

class CEnvSoundscape : public CBaseEntity /*0x0*/  // sizeof 0x818, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    CEntityIOOutput m_OnPlay; // offset 0x788, size 0x18, align 255
    float32 m_flRadius; // offset 0x7A0, size 0x4, align 4
    char _pad_07A4[0x4]; // offset 0x7A4
    CGameSoundEventName m_soundEventName; // offset 0x7A8, size 0x8, align 8
    bool m_bOverrideWithEvent; // offset 0x7B0, size 0x1, align 1
    char _pad_07B1[0x3]; // offset 0x7B1
    int32 m_soundscapeIndex; // offset 0x7B4, size 0x4, align 4 | MNotSaved
    int32 m_soundscapeEntityListId; // offset 0x7B8, size 0x4, align 4 | MNotSaved
    char _pad_07BC[0x4]; // offset 0x7BC
    CUtlSymbolLarge[8] m_positionNames; // offset 0x7C0, size 0x40, align 8
    CHandle< CEnvSoundscape > m_hProxySoundscape; // offset 0x800, size 0x4, align 4
    bool m_bDisabled; // offset 0x804, size 0x1, align 1
    char _pad_0805[0x3]; // offset 0x805
    CUtlSymbolLarge m_soundscapeName; // offset 0x808, size 0x8, align 8
    uint32 m_soundEventHash; // offset 0x810, size 0x4, align 4 | MNotSaved
    char _pad_0814[0x4]; // offset 0x814
};
