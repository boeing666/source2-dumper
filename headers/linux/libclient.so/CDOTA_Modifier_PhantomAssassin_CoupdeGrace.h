#pragma once

class CDOTA_Modifier_PhantomAssassin_CoupdeGrace : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 crit_bonus; // offset 0x1AF8, size 0x4, align 4
    int32 crit_chance; // offset 0x1AFC, size 0x4, align 4
    int32 attacks_to_proc; // offset 0x1B00, size 0x4, align 4
    int32 attacks_to_proc_creeps; // offset 0x1B04, size 0x4, align 4
    int32 dagger_crit_chance; // offset 0x1B08, size 0x4, align 4
    AttackRecord_t m_iCritRecord; // offset 0x1B0C, size 0x2, align 255
    char _pad_1B0E[0x2]; // offset 0x1B0E
    float32 duration; // offset 0x1B10, size 0x4, align 4
    char _pad_1B14[0x4]; // offset 0x1B14
};
