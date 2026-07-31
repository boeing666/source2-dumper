#pragma once

class CDOTA_Modifier_Warlock_FatalBonds : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_FatalBondsEntities; // offset 0x1A78, size 0x18, align 8
    int32 damage_share_percentage; // offset 0x1A90, size 0x4, align 4
    float32 imp_duration; // offset 0x1A94, size 0x4, align 4
};
