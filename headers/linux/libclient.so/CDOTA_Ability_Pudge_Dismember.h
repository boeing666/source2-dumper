#pragma once

class CDOTA_Ability_Pudge_Dismember : public C_DOTABaseAbility /*0x0*/  // sizeof 0x830, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    CHandle< C_BaseEntity > m_hVictim; // offset 0x828, size 0x4, align 4
    int32 shard_cast_range; // offset 0x82C, size 0x4, align 4
};
