#pragma once

class CDOTA_Modifier_AncientApparition_ChillingTouch : public CDOTA_Buff /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 damage; // offset 0x1AF8, size 0x4, align 4
    float32 duration; // offset 0x1AFC, size 0x4, align 4
    float32 slow_duration; // offset 0x1B00, size 0x4, align 4
    int32 attack_range_bonus; // offset 0x1B04, size 0x4, align 4
    int32 attacks_as_magic; // offset 0x1B08, size 0x4, align 4
    char _pad_1B0C[0x4]; // offset 0x1B0C
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1B10, size 0x18, align 8
};
