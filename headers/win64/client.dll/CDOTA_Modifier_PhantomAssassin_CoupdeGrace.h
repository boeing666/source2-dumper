#pragma once

class CDOTA_Modifier_PhantomAssassin_CoupdeGrace : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 crit_bonus; // offset 0x1A58, size 0x4, align 4
    int32 crit_chance; // offset 0x1A5C, size 0x4, align 4
    int32 attacks_to_proc; // offset 0x1A60, size 0x4, align 4
    int32 attacks_to_proc_creeps; // offset 0x1A64, size 0x4, align 4
    int32 dagger_crit_chance; // offset 0x1A68, size 0x4, align 4
    AttackRecord_t m_iCritRecord; // offset 0x1A6C, size 0x2, align 255
    char _pad_1A6E[0x2]; // offset 0x1A6E
    float32 duration; // offset 0x1A70, size 0x4, align 4
    char _pad_1A74[0x4]; // offset 0x1A74
};
