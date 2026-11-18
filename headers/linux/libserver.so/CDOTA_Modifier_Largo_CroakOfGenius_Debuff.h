#pragma once

class CDOTA_Modifier_Largo_CroakOfGenius_Debuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1B40, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 damage_portion_pct; // offset 0x1AF8, size 0x4, align 4
    float32 damage_per_second; // offset 0x1AFC, size 0x4, align 4
    float32 damage_hp_pct; // offset 0x1B00, size 0x4, align 4
    float32 trigger_damage; // offset 0x1B04, size 0x4, align 4
    float32 damage_duration; // offset 0x1B08, size 0x4, align 4
    float32 m_flDamageInterval; // offset 0x1B0C, size 0x4, align 4
    float32 damage_aoe; // offset 0x1B10, size 0x4, align 4
    CHandle< CBaseEntity > m_hTriggerCaster; // offset 0x1B14, size 0x4, align 4
    CHandle< CBaseEntity > m_hBuffCaster; // offset 0x1B18, size 0x4, align 4
    char _pad_1B1C[0x4]; // offset 0x1B1C
    CUtlVector< float32 > m_vecDamageTicks; // offset 0x1B20, size 0x18, align 8
    bool m_bSpokeConcept; // offset 0x1B38, size 0x1, align 1
    char _pad_1B39[0x7]; // offset 0x1B39
};
