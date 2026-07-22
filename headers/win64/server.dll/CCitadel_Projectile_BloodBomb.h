#pragma once

class CCitadel_Projectile_BloodBomb : public CCitadelProjectile /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x860]; // offset 0x0
    bool m_bSecondBomb; // offset 0x860, size 0x1, align 1
    char _pad_0861[0x3]; // offset 0x861
    int32 m_nBeepSoundBuildupCount; // offset 0x864, size 0x4, align 4
    float32 m_flBeepSoundIntervalBias; // offset 0x868, size 0x4, align 4
    float32 m_flBeepSoundMaxFrequency; // offset 0x86C, size 0x4, align 4
    float32 m_flArmingDuration; // offset 0x870, size 0x4, align 4
    char _pad_0874[0x4]; // offset 0x874
    CUtlVector< float32 > m_vecBeepIntervals; // offset 0x878, size 0x18, align 8
};
