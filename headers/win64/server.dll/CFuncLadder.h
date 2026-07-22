#pragma once

class CFuncLadder : public CBaseModelEntity /*0x0*/  // sizeof 0x800, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x770]; // offset 0x0
    Vector m_vecLadderDir; // offset 0x770, size 0xC, align 4
    char _pad_077C[0x4]; // offset 0x77C
    CUtlVector< CHandle< CInfoLadderDismount > > m_Dismounts; // offset 0x780, size 0x18, align 8 | MNotSaved
    Vector m_vecLocalTop; // offset 0x798, size 0xC, align 4
    VectorWS m_vecPlayerMountPositionTop; // offset 0x7A4, size 0xC, align 4
    VectorWS m_vecPlayerMountPositionBottom; // offset 0x7B0, size 0xC, align 4
    float32 m_flAutoRideSpeed; // offset 0x7BC, size 0x4, align 4
    bool m_bDisabled; // offset 0x7C0, size 0x1, align 1
    bool m_bFakeLadder; // offset 0x7C1, size 0x1, align 1
    bool m_bHasSlack; // offset 0x7C2, size 0x1, align 1
    char _pad_07C3[0x5]; // offset 0x7C3
    CUtlSymbolLarge m_surfacePropName; // offset 0x7C8, size 0x8, align 8
    CEntityIOOutput m_OnPlayerGotOnLadder; // offset 0x7D0, size 0x18, align 255
    CEntityIOOutput m_OnPlayerGotOffLadder; // offset 0x7E8, size 0x18, align 255
};
