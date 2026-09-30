#pragma once

class CCitadel_Ability_LashDownStrike : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1F60, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x18E8]; // offset 0x0
    GameTime_t m_ImpactTime; // offset 0x18E8, size 0x4, align 255
    VectorWS m_vDamagePos; // offset 0x18EC, size 0xC, align 4
    ParticleIndex_t m_PreviewEffect; // offset 0x18F8, size 0x4, align 255
    ParticleIndex_t m_ActiveEffect; // offset 0x18FC, size 0x4, align 255
    char _pad_1900[0x648]; // offset 0x1900
    bool m_bIsCrashingDown; // offset 0x1F48, size 0x1, align 1
    char _pad_1F49[0x3]; // offset 0x1F49
    Vector m_vStrikeVel; // offset 0x1F4C, size 0xC, align 4
    float32 m_flInitialYaw; // offset 0x1F58, size 0x4, align 4
    float32 m_flStartHeight; // offset 0x1F5C, size 0x4, align 4
};
