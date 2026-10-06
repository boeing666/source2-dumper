#pragma once

class CCitadel_Modifier_IceDome : public CCitadelModifier /*0x0*/  // sizeof 0x5B8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    CHandle< CCitadel_Ice_Dome_Blocker > m_hBlocker; // offset 0x148, size 0x4, align 4
    CHandle< CPointModifierThinker > m_hFriendlyAura; // offset 0x14C, size 0x4, align 4
    CHandle< CPointModifierThinker > m_hEnemyAura; // offset 0x150, size 0x4, align 4
    ParticleIndex_t m_nParticleIndex; // offset 0x154, size 0x4, align 255
    char _pad_0158[0x420]; // offset 0x158
    GameTime_t m_flStartTime; // offset 0x578, size 0x4, align 255
    VectorWS m_vOrigin; // offset 0x57C, size 0xC, align 4
    float32 m_flPrevRadius; // offset 0x588, size 0x4, align 4
    char _pad_058C[0x2C]; // offset 0x58C
};
