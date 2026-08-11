#pragma once

class CDOTA_Modifier_PhantomAssassin_CoupdeGrace : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 crit_bonus; // offset 0x1A78, size 0x4, align 4
    int32 crit_chance; // offset 0x1A7C, size 0x4, align 4
    int32 attacks_to_proc; // offset 0x1A80, size 0x4, align 4
    int32 attacks_to_proc_creeps; // offset 0x1A84, size 0x4, align 4
    int32 dagger_crit_chance; // offset 0x1A88, size 0x4, align 4
    AttackRecord_t m_iCritRecord; // offset 0x1A8C, size 0x2, align 255
    char _pad_1A8E[0x2]; // offset 0x1A8E
    float32 duration; // offset 0x1A90, size 0x4, align 4
    char _pad_1A94[0x4]; // offset 0x1A94
};
