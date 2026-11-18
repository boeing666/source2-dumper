#pragma once

class CDOTA_Modifier_Tiny_Tree_Grab : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 attack_count; // offset 0x1AF8, size 0x4, align 4
    float32 stun_duration; // offset 0x1AFC, size 0x4, align 4
    int32 attack_range; // offset 0x1B00, size 0x4, align 4
    int32 m_nOriginalAttackCapability; // offset 0x1B04, size 0x4, align 4
    float32 bat_increase; // offset 0x1B08, size 0x4, align 4
    int32 speed_reduction; // offset 0x1B0C, size 0x4, align 4
    int32 m_nBonusAttackRange; // offset 0x1B10, size 0x4, align 4
    CHandle< CBaseEntity > m_hStolenTree; // offset 0x1B14, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1B18, size 0x4, align 255
    ParticleIndex_t m_nFXAttackIndex; // offset 0x1B1C, size 0x4, align 255
};
