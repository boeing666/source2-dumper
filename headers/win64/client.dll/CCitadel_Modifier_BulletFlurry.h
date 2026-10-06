#pragma once

class CCitadel_Modifier_BulletFlurry : public CCitadelModifier /*0x0*/  // sizeof 0x2A8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x298]; // offset 0x0
    ParticleIndex_t m_nEffectId; // offset 0x298, size 0x4, align 255
    GameTime_t m_flNextSequenceChange; // offset 0x29C, size 0x4, align 255
    int32 m_nCurrentPose; // offset 0x2A0, size 0x4, align 4
    char _pad_02A4[0x4]; // offset 0x2A4
};
