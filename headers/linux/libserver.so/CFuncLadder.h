#pragma once

class CFuncLadder : public CBaseModelEntity /*0x0*/  // sizeof 0xAD8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA4C]; // offset 0x0
    Vector m_vecLadderDir; // offset 0xA4C, size 0xC, align 4
    CUtlVector< CHandle< CInfoLadderDismount > > m_Dismounts; // offset 0xA58, size 0x18, align 8 | MNotSaved
    Vector m_vecLocalTop; // offset 0xA70, size 0xC, align 4
    VectorWS m_vecPlayerMountPositionTop; // offset 0xA7C, size 0xC, align 4
    VectorWS m_vecPlayerMountPositionBottom; // offset 0xA88, size 0xC, align 4
    float32 m_flAutoRideSpeed; // offset 0xA94, size 0x4, align 4
    bool m_bDisabled; // offset 0xA98, size 0x1, align 1
    bool m_bFakeLadder; // offset 0xA99, size 0x1, align 1
    bool m_bHasSlack; // offset 0xA9A, size 0x1, align 1
    char _pad_0A9B[0x5]; // offset 0xA9B
    CUtlSymbolLarge m_surfacePropName; // offset 0xAA0, size 0x8, align 8
    CEntityIOOutput m_OnPlayerGotOnLadder; // offset 0xAA8, size 0x18, align 255
    CEntityIOOutput m_OnPlayerGotOffLadder; // offset 0xAC0, size 0x18, align 255
};
