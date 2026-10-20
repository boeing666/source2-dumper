#pragma once

class CCitadel_Ability_Bookworm_DragonFire : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1C80, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1C60]; // offset 0x0
    VectorWS m_vLaunchPosition; // offset 0x1C60, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x1C6C, size 0xC, align 4
    ParticleIndex_t m_nCastParticleIndex; // offset 0x1C78, size 0x4, align 255
    char _pad_1C7C[0x4]; // offset 0x1C7C
};
