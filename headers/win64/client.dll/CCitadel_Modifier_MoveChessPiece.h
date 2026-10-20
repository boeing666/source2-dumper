#pragma once

class CCitadel_Modifier_MoveChessPiece : public CCitadelModifier /*0x0*/  // sizeof 0x190, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitUnits; // offset 0x140, size 0x18, align 8
    char _pad_0158[0x10]; // offset 0x158
    VectorWS m_vecStartLocation; // offset 0x168, size 0xC, align 4
    VectorWS m_vecEndLocation; // offset 0x174, size 0xC, align 4
    VectorWS m_vecCornerLocation; // offset 0x180, size 0xC, align 4
    char _pad_018C[0x4]; // offset 0x18C
};
