#pragma once

class CCitadel_Ability_Sprint : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x16F0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    ParticleIndex_t m_nSprintParticle; // offset 0x16D8, size 0x4, align 255
    bool m_bSprinting; // offset 0x16DC, size 0x1, align 1
    char _pad_16DD[0x3]; // offset 0x16DD
    GameTime_t m_flSprintStartTime; // offset 0x16E0, size 0x4, align 255
    bool m_bInCombat; // offset 0x16E4, size 0x1, align 1
    char _pad_16E5[0xB]; // offset 0x16E5
};
