#pragma once

class CCitadel_Modifier_MoveChessPiece : public CCitadelModifier /*0x0*/  // sizeof 0x198, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecHitUnits; // offset 0x148, size 0x18, align 8
    char _pad_0160[0x10]; // offset 0x160
    VectorWS m_vecStartLocation; // offset 0x170, size 0xC, align 4
    VectorWS m_vecEndLocation; // offset 0x17C, size 0xC, align 4
    VectorWS m_vecCornerLocation; // offset 0x188, size 0xC, align 4
    char _pad_0194[0x4]; // offset 0x194
};
