#pragma once

class C_FuncLadder : public C_BaseModelEntity /*0x0*/  // sizeof 0xC08, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBB0]; // offset 0x0
    Vector m_vecLadderDir; // offset 0xBB0, size 0xC, align 4
    char _pad_0BBC[0x4]; // offset 0xBBC
    CUtlVector< CHandle< C_InfoLadderDismount > > m_Dismounts; // offset 0xBC0, size 0x18, align 8 | MNotSaved
    Vector m_vecLocalTop; // offset 0xBD8, size 0xC, align 4
    VectorWS m_vecPlayerMountPositionTop; // offset 0xBE4, size 0xC, align 4
    VectorWS m_vecPlayerMountPositionBottom; // offset 0xBF0, size 0xC, align 4
    float32 m_flAutoRideSpeed; // offset 0xBFC, size 0x4, align 4
    bool m_bDisabled; // offset 0xC00, size 0x1, align 1
    bool m_bFakeLadder; // offset 0xC01, size 0x1, align 1
    bool m_bHasSlack; // offset 0xC02, size 0x1, align 1
    char _pad_0C03[0x5]; // offset 0xC03
};
