#pragma once

class CDOTA_Ability_Lina_DragonSlave : public CDOTABaseAbility /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x870]; // offset 0x0
    int32 dragon_slave_distance; // offset 0x870, size 0x4, align 4
    float32 dragon_slave_burn_duration; // offset 0x874, size 0x4, align 4
    float32 m_flDamage; // offset 0x878, size 0x4, align 4
    char _pad_087C[0x4]; // offset 0x87C
};
