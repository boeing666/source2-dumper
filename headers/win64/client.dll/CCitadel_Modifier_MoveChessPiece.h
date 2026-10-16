#pragma once

class CCitadel_Modifier_MoveChessPiece : public CCitadelModifier /*0x0*/  // sizeof 0x188, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x138]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitUnits; // offset 0x138, size 0x18, align 8
    char _pad_0150[0x10]; // offset 0x150
    VectorWS m_vecStartLocation; // offset 0x160, size 0xC, align 4
    VectorWS m_vecEndLocation; // offset 0x16C, size 0xC, align 4
    VectorWS m_vecCornerLocation; // offset 0x178, size 0xC, align 4
    char _pad_0184[0x4]; // offset 0x184
};
