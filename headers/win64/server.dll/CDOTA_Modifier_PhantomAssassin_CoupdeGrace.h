#pragma once

class CDOTA_Modifier_PhantomAssassin_CoupdeGrace : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 crit_bonus; // offset 0x1AA8, size 0x4, align 4
    int32 crit_chance; // offset 0x1AAC, size 0x4, align 4
    int32 attacks_to_proc; // offset 0x1AB0, size 0x4, align 4
    int32 attacks_to_proc_creeps; // offset 0x1AB4, size 0x4, align 4
    int32 dagger_crit_chance; // offset 0x1AB8, size 0x4, align 4
    AttackRecord_t m_iCritRecord; // offset 0x1ABC, size 0x2, align 255
    char _pad_1ABE[0x2]; // offset 0x1ABE
    float32 duration; // offset 0x1AC0, size 0x4, align 4
    char _pad_1AC4[0x4]; // offset 0x1AC4
};
