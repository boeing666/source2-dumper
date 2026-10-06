#pragma once

class CCitadel_Modifier_IceDome : public CCitadelModifier /*0x0*/  // sizeof 0x580, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x138]; // offset 0x0
    CHandle< C_Citadel_Ice_Dome_Blocker > m_hBlocker; // offset 0x138, size 0x4, align 4
    CHandle< CPointModifierThinker > m_hFriendlyAura; // offset 0x13C, size 0x4, align 4
    CHandle< CPointModifierThinker > m_hEnemyAura; // offset 0x140, size 0x4, align 4
    ParticleIndex_t m_nParticleIndex; // offset 0x144, size 0x4, align 255
    char _pad_0148[0x420]; // offset 0x148
    GameTime_t m_flStartTime; // offset 0x568, size 0x4, align 255
    VectorWS m_vOrigin; // offset 0x56C, size 0xC, align 4
    float32 m_flPrevRadius; // offset 0x578, size 0x4, align 4
    char _pad_057C[0x4]; // offset 0x57C
};
