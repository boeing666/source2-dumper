#pragma once

class CCitadel_Ability_Bookworm_DragonFire : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x15F8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x15D8]; // offset 0x0
    VectorWS m_vLaunchPosition; // offset 0x15D8, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x15E4, size 0xC, align 4
    ParticleIndex_t m_nCastParticleIndex; // offset 0x15F0, size 0x4, align 255
    char _pad_15F4[0x4]; // offset 0x15F4
};
