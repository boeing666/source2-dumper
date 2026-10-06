#pragma once

class CCitadel_Neutral_MoveCharge : public CCitadel_Modifier_NeutralAbility /*0x0*/  // sizeof 0x220, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1F8]; // offset 0x0
    Vector m_vMoveDirection; // offset 0x1F8, size 0xC, align 4
    char _pad_0204[0x4]; // offset 0x204
    CUtlVector< CHandle< CBaseEntity > > m_vHitEntities; // offset 0x208, size 0x18, align 8
};
