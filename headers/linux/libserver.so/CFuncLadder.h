#pragma once

class CFuncLadder : public CBaseModelEntity /*0x0*/  // sizeof 0xBB8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB2C]; // offset 0x0
    Vector m_vecLadderDir; // offset 0xB2C, size 0xC, align 4
    CUtlVector< CHandle< CInfoLadderDismount > > m_Dismounts; // offset 0xB38, size 0x18, align 8 | MNotSaved
    Vector m_vecLocalTop; // offset 0xB50, size 0xC, align 4
    VectorWS m_vecPlayerMountPositionTop; // offset 0xB5C, size 0xC, align 4
    VectorWS m_vecPlayerMountPositionBottom; // offset 0xB68, size 0xC, align 4
    float32 m_flAutoRideSpeed; // offset 0xB74, size 0x4, align 4
    bool m_bDisabled; // offset 0xB78, size 0x1, align 1
    bool m_bFakeLadder; // offset 0xB79, size 0x1, align 1
    bool m_bHasSlack; // offset 0xB7A, size 0x1, align 1
    char _pad_0B7B[0x5]; // offset 0xB7B
    CUtlSymbolLarge m_surfacePropName; // offset 0xB80, size 0x8, align 8
    CEntityIOOutput m_OnPlayerGotOnLadder; // offset 0xB88, size 0x18, align 255
    CEntityIOOutput m_OnPlayerGotOffLadder; // offset 0xBA0, size 0x18, align 255
};
