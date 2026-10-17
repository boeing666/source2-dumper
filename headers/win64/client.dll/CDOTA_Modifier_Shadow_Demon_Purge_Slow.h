#pragma once

class CDOTA_Modifier_Shadow_Demon_Purge_Slow : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    bool m_bCasterIsEnemy; // offset 0x1AA8, size 0x1, align 1
    bool m_bCasterIsParent; // offset 0x1AA9, size 0x1, align 1
    bool apply_poison_stacks; // offset 0x1AAA, size 0x1, align 1
    char _pad_1AAB[0x1]; // offset 0x1AAB
    int32 m_nPoisonStacksToApply; // offset 0x1AAC, size 0x4, align 4
    GameTime_t m_NextPoisonStackTime; // offset 0x1AB0, size 0x4, align 255
    char _pad_1AB4[0x4]; // offset 0x1AB4
};
