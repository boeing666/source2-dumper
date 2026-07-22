#pragma once

class CCitadel_Modifier_MagicBeam : public CCitadelModifier /*0x0*/  // sizeof 0x2E8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    CHandle< C_Citadel_Magic_Beam_Blocker > m_hBlocker; // offset 0xC0, size 0x4, align 4
    ParticleIndex_t m_nParticleIndex; // offset 0xC4, size 0x4, align 255
    GameTime_t m_flStartTime; // offset 0xC8, size 0x4, align 255
    char _pad_00CC[0x204]; // offset 0xCC
    QAngle m_qAngle; // offset 0x2D0, size 0xC, align 4
    Vector m_vOrigin; // offset 0x2DC, size 0xC, align 4
};
