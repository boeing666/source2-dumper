#pragma once

class C_FuncLadder : public C_BaseModelEntity /*0x0*/  // sizeof 0xF90, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xF38]; // offset 0x0
    Vector m_vecLadderDir; // offset 0xF38, size 0xC, align 4
    char _pad_0F44[0x4]; // offset 0xF44
    CUtlVector< CHandle< C_InfoLadderDismount > > m_Dismounts; // offset 0xF48, size 0x18, align 8 | MNotSaved
    Vector m_vecLocalTop; // offset 0xF60, size 0xC, align 4
    VectorWS m_vecPlayerMountPositionTop; // offset 0xF6C, size 0xC, align 4
    VectorWS m_vecPlayerMountPositionBottom; // offset 0xF78, size 0xC, align 4
    float32 m_flAutoRideSpeed; // offset 0xF84, size 0x4, align 4
    bool m_bDisabled; // offset 0xF88, size 0x1, align 1
    bool m_bFakeLadder; // offset 0xF89, size 0x1, align 1
    bool m_bHasSlack; // offset 0xF8A, size 0x1, align 1
    char _pad_0F8B[0x5]; // offset 0xF8B
};
