#pragma once

class CCitadel_Modifier_SmokeGrenade : public CCitadelModifier /*0x0*/  // sizeof 0x3B0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    CHandle< CCitadel_SmokeGrenade_Blocker > m_hBlocker; // offset 0x150, size 0x4, align 4
    CHandle< CPointModifierThinker > m_hFriendlyAura; // offset 0x154, size 0x4, align 4
    CHandle< CPointModifierThinker > m_hEnemyAura; // offset 0x158, size 0x4, align 4
    ParticleIndex_t m_nParticleIndex; // offset 0x15C, size 0x4, align 255
    GameTime_t m_flStartTime; // offset 0x160, size 0x4, align 255
    char _pad_0164[0x214]; // offset 0x164
    VectorWS m_vOrigin; // offset 0x378, size 0xC, align 4
    char _pad_0384[0x2C]; // offset 0x384
};
