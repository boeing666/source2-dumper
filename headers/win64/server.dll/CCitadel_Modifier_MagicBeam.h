#pragma once

class CCitadel_Modifier_MagicBeam : public CCitadelModifier /*0x0*/  // sizeof 0x468, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    CHandle< CCitadel_Magic_Beam_Blocker > m_hBlocker; // offset 0x150, size 0x4, align 4
    ParticleIndex_t m_nParticleIndex; // offset 0x154, size 0x4, align 255
    GameTime_t m_flStartTime; // offset 0x158, size 0x4, align 255
    char _pad_015C[0x2C4]; // offset 0x15C
    QAngle m_qAngle; // offset 0x420, size 0xC, align 4
    VectorWS m_vOrigin; // offset 0x42C, size 0xC, align 4
    char _pad_0438[0x30]; // offset 0x438
};
