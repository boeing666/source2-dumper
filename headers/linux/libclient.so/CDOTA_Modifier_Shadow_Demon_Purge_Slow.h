#pragma once

class CDOTA_Modifier_Shadow_Demon_Purge_Slow : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    bool m_bCasterIsEnemy; // offset 0x1AF8, size 0x1, align 1
    bool m_bCasterIsParent; // offset 0x1AF9, size 0x1, align 1
    bool apply_poison_stacks; // offset 0x1AFA, size 0x1, align 1
    char _pad_1AFB[0x1]; // offset 0x1AFB
    int32 m_nPoisonStacksToApply; // offset 0x1AFC, size 0x4, align 4
    GameTime_t m_NextPoisonStackTime; // offset 0x1B00, size 0x4, align 255
    char _pad_1B04[0x4]; // offset 0x1B04
};
