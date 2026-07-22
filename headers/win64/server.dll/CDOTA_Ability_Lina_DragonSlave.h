#pragma once

class CDOTA_Ability_Lina_DragonSlave : public CDOTABaseAbility /*0x0*/  // sizeof 0x5A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x594]; // offset 0x0
    int32 dragon_slave_distance; // offset 0x594, size 0x4, align 4
    float32 dragon_slave_burn_duration; // offset 0x598, size 0x4, align 4
    float32 m_flDamage; // offset 0x59C, size 0x4, align 4
};
