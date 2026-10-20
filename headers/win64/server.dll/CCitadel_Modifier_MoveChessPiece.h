#pragma once

class CCitadel_Modifier_MoveChessPiece : public CCitadelModifier /*0x0*/  // sizeof 0x1A0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecHitUnits; // offset 0x150, size 0x18, align 8
    char _pad_0168[0x10]; // offset 0x168
    VectorWS m_vecStartLocation; // offset 0x178, size 0xC, align 4
    VectorWS m_vecEndLocation; // offset 0x184, size 0xC, align 4
    VectorWS m_vecCornerLocation; // offset 0x190, size 0xC, align 4
    char _pad_019C[0x4]; // offset 0x19C
};
