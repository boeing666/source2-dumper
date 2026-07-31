#pragma once

class CDOTA_Modifier_Tiny_Tree_Grab : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 attack_count; // offset 0x1A78, size 0x4, align 4
    float32 stun_duration; // offset 0x1A7C, size 0x4, align 4
    int32 attack_range; // offset 0x1A80, size 0x4, align 4
    int32 m_nOriginalAttackCapability; // offset 0x1A84, size 0x4, align 4
    float32 bat_increase; // offset 0x1A88, size 0x4, align 4
    int32 speed_reduction; // offset 0x1A8C, size 0x4, align 4
    int32 m_nBonusAttackRange; // offset 0x1A90, size 0x4, align 4
    CHandle< C_BaseEntity > m_hStolenTree; // offset 0x1A94, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A98, size 0x4, align 255
    ParticleIndex_t m_nFXAttackIndex; // offset 0x1A9C, size 0x4, align 255
};
