#pragma once

class CEnvSoundscape : public C_BaseEntity /*0x0*/  // sizeof 0x690, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x600]; // offset 0x0
    CEntityIOOutput m_OnPlay; // offset 0x600, size 0x18, align 255
    float32 m_flRadius; // offset 0x618, size 0x4, align 4
    char _pad_061C[0x4]; // offset 0x61C
    CGameSoundEventName m_soundEventName; // offset 0x620, size 0x8, align 8
    bool m_bOverrideWithEvent; // offset 0x628, size 0x1, align 1
    char _pad_0629[0x3]; // offset 0x629
    int32 m_soundscapeIndex; // offset 0x62C, size 0x4, align 4 | MNotSaved
    int32 m_soundscapeEntityListId; // offset 0x630, size 0x4, align 4 | MNotSaved
    char _pad_0634[0x4]; // offset 0x634
    CUtlSymbolLarge[8] m_positionNames; // offset 0x638, size 0x40, align 8
    CHandle< CEnvSoundscape > m_hProxySoundscape; // offset 0x678, size 0x4, align 4
    bool m_bDisabled; // offset 0x67C, size 0x1, align 1
    char _pad_067D[0x3]; // offset 0x67D
    CUtlSymbolLarge m_soundscapeName; // offset 0x680, size 0x8, align 8
    uint32 m_soundEventHash; // offset 0x688, size 0x4, align 4 | MNotSaved
    char _pad_068C[0x4]; // offset 0x68C
};
