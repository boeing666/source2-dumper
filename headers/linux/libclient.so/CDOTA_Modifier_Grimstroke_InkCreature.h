#pragma once

class CDOTA_Modifier_Grimstroke_InkCreature : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x1A58, size 0x4, align 255
    ParticleIndex_t m_nAmbientFXIndex; // offset 0x1A5C, size 0x4, align 255
    int32 m_nAttackCount; // offset 0x1A60, size 0x4, align 4
    bool m_bIsLatched; // offset 0x1A64, size 0x1, align 1
    char _pad_1A65[0x3]; // offset 0x1A65
    CHandle< C_BaseEntity > m_hAttachTarget; // offset 0x1A68, size 0x4, align 4
    char _pad_1A6C[0x4]; // offset 0x1A6C
    CountdownTimer m_EnemyVision; // offset 0x1A70, size 0x18, align 8
    float32 latch_duration; // offset 0x1A88, size 0x4, align 4
    float32 speed; // offset 0x1A8C, size 0x4, align 4
    int32 destroy_attacks; // offset 0x1A90, size 0x4, align 4
    int32 hero_attack_multiplier; // offset 0x1A94, size 0x4, align 4
};
