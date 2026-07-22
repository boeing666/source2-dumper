#pragma once

class CCitadel_Modifier_BulletFlurry : public CCitadelModifier /*0x0*/  // sizeof 0x1D0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1C0]; // offset 0x0
    ParticleIndex_t m_nEffectId; // offset 0x1C0, size 0x4, align 255
    GameTime_t m_flNextSequenceChange; // offset 0x1C4, size 0x4, align 255
    int32 m_nCurrentPose; // offset 0x1C8, size 0x4, align 4
    char _pad_01CC[0x4]; // offset 0x1CC
};
