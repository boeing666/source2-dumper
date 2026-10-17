#pragma once

class CDOTA_Modifier_Warlock_FatalBonds : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_FatalBondsEntities; // offset 0x1AA8, size 0x18, align 8
    int32 damage_share_percentage; // offset 0x1AC0, size 0x4, align 4
    float32 imp_duration; // offset 0x1AC4, size 0x4, align 4
};
