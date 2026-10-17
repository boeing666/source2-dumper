#pragma once

class CDOTA_Modifier_Tiny_Tree_Grab : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 attack_count; // offset 0x1AA8, size 0x4, align 4
    float32 stun_duration; // offset 0x1AAC, size 0x4, align 4
    int32 attack_range; // offset 0x1AB0, size 0x4, align 4
    int32 m_nOriginalAttackCapability; // offset 0x1AB4, size 0x4, align 4
    float32 bat_increase; // offset 0x1AB8, size 0x4, align 4
    int32 speed_reduction; // offset 0x1ABC, size 0x4, align 4
    int32 m_nBonusAttackRange; // offset 0x1AC0, size 0x4, align 4
    CHandle< C_BaseEntity > m_hStolenTree; // offset 0x1AC4, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1AC8, size 0x4, align 255
    ParticleIndex_t m_nFXAttackIndex; // offset 0x1ACC, size 0x4, align 255
};
