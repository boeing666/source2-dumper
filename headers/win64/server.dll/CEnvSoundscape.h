#pragma once

class CEnvSoundscape : public CBaseEntity /*0x0*/  // sizeof 0x538, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    CEntityIOOutput m_OnPlay; // offset 0x4A8, size 0x18, align 255
    float32 m_flRadius; // offset 0x4C0, size 0x4, align 4
    char _pad_04C4[0x4]; // offset 0x4C4
    CGameSoundEventName m_soundEventName; // offset 0x4C8, size 0x8, align 8
    bool m_bOverrideWithEvent; // offset 0x4D0, size 0x1, align 1
    char _pad_04D1[0x3]; // offset 0x4D1
    int32 m_soundscapeIndex; // offset 0x4D4, size 0x4, align 4 | MNotSaved
    int32 m_soundscapeEntityListId; // offset 0x4D8, size 0x4, align 4 | MNotSaved
    char _pad_04DC[0x4]; // offset 0x4DC
    CUtlSymbolLarge[8] m_positionNames; // offset 0x4E0, size 0x40, align 8
    CHandle< CEnvSoundscape > m_hProxySoundscape; // offset 0x520, size 0x4, align 4
    bool m_bDisabled; // offset 0x524, size 0x1, align 1
    char _pad_0525[0x3]; // offset 0x525
    CUtlSymbolLarge m_soundscapeName; // offset 0x528, size 0x8, align 8
    uint32 m_soundEventHash; // offset 0x530, size 0x4, align 4 | MNotSaved
    char _pad_0534[0x4]; // offset 0x534
};
