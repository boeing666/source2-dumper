#pragma once

class CCitadel_Modifier_IceDome : public CCitadelModifier /*0x0*/  // sizeof 0x2E8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    CHandle< C_Citadel_Ice_Dome_Blocker > m_hBlocker; // offset 0xC0, size 0x4, align 4
    CHandle< CPointModifierThinker > m_hFriendlyAura; // offset 0xC4, size 0x4, align 4
    CHandle< CPointModifierThinker > m_hEnemyAura; // offset 0xC8, size 0x4, align 4
    ParticleIndex_t m_nParticleIndex; // offset 0xCC, size 0x4, align 255
    GameTime_t m_flStartTime; // offset 0xD0, size 0x4, align 255
    char _pad_00D4[0x204]; // offset 0xD4
    Vector m_vOrigin; // offset 0x2D8, size 0xC, align 4
    char _pad_02E4[0x4]; // offset 0x2E4
};
