#pragma once

class CCitadel_Modifier_IceDome : public CCitadelModifier /*0x0*/  // sizeof 0x320, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    CHandle< CCitadel_Ice_Dome_Blocker > m_hBlocker; // offset 0xD0, size 0x4, align 4
    CHandle< CPointModifierThinker > m_hFriendlyAura; // offset 0xD4, size 0x4, align 4
    CHandle< CPointModifierThinker > m_hEnemyAura; // offset 0xD8, size 0x4, align 4
    ParticleIndex_t m_nParticleIndex; // offset 0xDC, size 0x4, align 255
    GameTime_t m_flStartTime; // offset 0xE0, size 0x4, align 255
    char _pad_00E4[0x204]; // offset 0xE4
    Vector m_vOrigin; // offset 0x2E8, size 0xC, align 4
    char _pad_02F4[0x2C]; // offset 0x2F4
};
