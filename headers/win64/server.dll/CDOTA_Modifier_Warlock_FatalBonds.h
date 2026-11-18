#pragma once

class CDOTA_Modifier_Warlock_FatalBonds : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_FatalBondsEntities; // offset 0x1AF8, size 0x18, align 8
    int32 damage_share_percentage; // offset 0x1B10, size 0x4, align 4
    float32 imp_duration; // offset 0x1B14, size 0x4, align 4
};
