#pragma once

class CDOTA_Modifier_Largo_CroakOfGenius_Debuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 damage_portion_pct; // offset 0x1A78, size 0x4, align 4
    float32 damage_per_second; // offset 0x1A7C, size 0x4, align 4
    float32 damage_hp_pct; // offset 0x1A80, size 0x4, align 4
    float32 trigger_damage; // offset 0x1A84, size 0x4, align 4
    float32 damage_duration; // offset 0x1A88, size 0x4, align 4
    float32 m_flDamageInterval; // offset 0x1A8C, size 0x4, align 4
    float32 damage_aoe; // offset 0x1A90, size 0x4, align 4
    CHandle< CBaseEntity > m_hTriggerCaster; // offset 0x1A94, size 0x4, align 4
    CHandle< CBaseEntity > m_hBuffCaster; // offset 0x1A98, size 0x4, align 4
    char _pad_1A9C[0x4]; // offset 0x1A9C
    CUtlVector< float32 > m_vecDamageTicks; // offset 0x1AA0, size 0x18, align 8
    bool m_bSpokeConcept; // offset 0x1AB8, size 0x1, align 1
    char _pad_1AB9[0x7]; // offset 0x1AB9
};
