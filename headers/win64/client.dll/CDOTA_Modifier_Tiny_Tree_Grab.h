#pragma once

class CDOTA_Modifier_Tiny_Tree_Grab : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 attack_count; // offset 0x1A58, size 0x4, align 4
    float32 stun_duration; // offset 0x1A5C, size 0x4, align 4
    int32 attack_range; // offset 0x1A60, size 0x4, align 4
    int32 m_nOriginalAttackCapability; // offset 0x1A64, size 0x4, align 4
    float32 bat_increase; // offset 0x1A68, size 0x4, align 4
    int32 speed_reduction; // offset 0x1A6C, size 0x4, align 4
    int32 m_nBonusAttackRange; // offset 0x1A70, size 0x4, align 4
    CHandle< C_BaseEntity > m_hStolenTree; // offset 0x1A74, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A78, size 0x4, align 255
    ParticleIndex_t m_nFXAttackIndex; // offset 0x1A7C, size 0x4, align 255
};
