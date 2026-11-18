#pragma once

class CDOTA_Modifier_Lycan_SummonWolves_Hamstring : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 root_duration; // offset 0x1AF8, size 0x4, align 4
    int32 damage_boost_stacks; // offset 0x1AFC, size 0x4, align 4
    float32 damage_boost_duration; // offset 0x1B00, size 0x4, align 4
    char _pad_1B04[0x4]; // offset 0x1B04
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1B08, size 0x18, align 8
};
