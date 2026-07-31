#pragma once

class CDOTA_Modifier_Alchemist_ChemicalRage : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 base_attack_time; // offset 0x1A78, size 0x4, align 4
    int32 bonus_health; // offset 0x1A7C, size 0x4, align 4
    int32 bonus_health_regen; // offset 0x1A80, size 0x4, align 4
    float32 bonus_mana_regen; // offset 0x1A84, size 0x4, align 4
    int32 bonus_movespeed; // offset 0x1A88, size 0x4, align 4
    ParticleIndex_t m_nFXAlchemistCRIndex; // offset 0x1A8C, size 0x4, align 255
};
