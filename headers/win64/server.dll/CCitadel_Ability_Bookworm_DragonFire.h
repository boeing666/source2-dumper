#pragma once

class CCitadel_Ability_Bookworm_DragonFire : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1A48, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1A28]; // offset 0x0
    VectorWS m_vLaunchPosition; // offset 0x1A28, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x1A34, size 0xC, align 4
    ParticleIndex_t m_nCastParticleIndex; // offset 0x1A40, size 0x4, align 255
    char _pad_1A44[0x4]; // offset 0x1A44
};
