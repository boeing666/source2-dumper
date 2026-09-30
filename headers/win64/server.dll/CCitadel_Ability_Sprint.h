#pragma once

class CCitadel_Ability_Sprint : public CCitadelBaseAbility /*0x0*/  // sizeof 0x14B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    ParticleIndex_t m_nSprintParticle; // offset 0x14A0, size 0x4, align 255
    bool m_bSprinting; // offset 0x14A4, size 0x1, align 1
    char _pad_14A5[0x3]; // offset 0x14A5
    GameTime_t m_flSprintStartTime; // offset 0x14A8, size 0x4, align 255
    bool m_bInCombat; // offset 0x14AC, size 0x1, align 1
    char _pad_14AD[0xB]; // offset 0x14AD
};
