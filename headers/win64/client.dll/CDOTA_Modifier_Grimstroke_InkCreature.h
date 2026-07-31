#pragma once

class CDOTA_Modifier_Grimstroke_InkCreature : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x1A78, size 0x4, align 255
    ParticleIndex_t m_nAmbientFXIndex; // offset 0x1A7C, size 0x4, align 255
    int32 m_nAttackCount; // offset 0x1A80, size 0x4, align 4
    bool m_bIsLatched; // offset 0x1A84, size 0x1, align 1
    char _pad_1A85[0x3]; // offset 0x1A85
    CHandle< C_BaseEntity > m_hAttachTarget; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
    CountdownTimer m_EnemyVision; // offset 0x1A90, size 0x18, align 8
    float32 latch_duration; // offset 0x1AA8, size 0x4, align 4
    float32 speed; // offset 0x1AAC, size 0x4, align 4
    int32 destroy_attacks; // offset 0x1AB0, size 0x4, align 4
    int32 hero_attack_multiplier; // offset 0x1AB4, size 0x4, align 4
};
