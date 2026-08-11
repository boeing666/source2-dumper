#pragma once

class CDOTA_Ability_VoidSpirit_ResonantPulse : public CDOTABaseAbility /*0x0*/  // sizeof 0x868, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85B]; // offset 0x0
    bool m_bGrantedScepterCharges; // offset 0x85B, size 0x1, align 1
    float32 buff_duration; // offset 0x85C, size 0x4, align 4
    float32 base_absorb_amount; // offset 0x860, size 0x4, align 4
    float32 absorb_per_hero_hit; // offset 0x864, size 0x4, align 4
};
