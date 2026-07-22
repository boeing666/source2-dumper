#pragma once

class C_FuncLadder : public C_BaseModelEntity /*0x0*/  // sizeof 0x1008, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xFB0]; // offset 0x0
    Vector m_vecLadderDir; // offset 0xFB0, size 0xC, align 4
    char _pad_0FBC[0x4]; // offset 0xFBC
    CUtlVector< CHandle< C_InfoLadderDismount > > m_Dismounts; // offset 0xFC0, size 0x18, align 8 | MNotSaved
    Vector m_vecLocalTop; // offset 0xFD8, size 0xC, align 4
    VectorWS m_vecPlayerMountPositionTop; // offset 0xFE4, size 0xC, align 4
    VectorWS m_vecPlayerMountPositionBottom; // offset 0xFF0, size 0xC, align 4
    float32 m_flAutoRideSpeed; // offset 0xFFC, size 0x4, align 4
    bool m_bDisabled; // offset 0x1000, size 0x1, align 1
    bool m_bFakeLadder; // offset 0x1001, size 0x1, align 1
    bool m_bHasSlack; // offset 0x1002, size 0x1, align 1
    char _pad_1003[0x5]; // offset 0x1003
};
