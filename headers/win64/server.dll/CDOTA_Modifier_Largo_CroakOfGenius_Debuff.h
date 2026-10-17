#pragma once

class CDOTA_Modifier_Largo_CroakOfGenius_Debuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 damage_portion_pct; // offset 0x1AA8, size 0x4, align 4
    float32 damage_per_second; // offset 0x1AAC, size 0x4, align 4
    float32 damage_hp_pct; // offset 0x1AB0, size 0x4, align 4
    float32 trigger_damage; // offset 0x1AB4, size 0x4, align 4
    float32 damage_duration; // offset 0x1AB8, size 0x4, align 4
    float32 m_flDamageInterval; // offset 0x1ABC, size 0x4, align 4
    float32 damage_aoe; // offset 0x1AC0, size 0x4, align 4
    CHandle< CBaseEntity > m_hTriggerCaster; // offset 0x1AC4, size 0x4, align 4
    CHandle< CBaseEntity > m_hBuffCaster; // offset 0x1AC8, size 0x4, align 4
    char _pad_1ACC[0x4]; // offset 0x1ACC
    CUtlVector< float32 > m_vecDamageTicks; // offset 0x1AD0, size 0x18, align 8
    bool m_bSpokeConcept; // offset 0x1AE8, size 0x1, align 1
    char _pad_1AE9[0x7]; // offset 0x1AE9
};
