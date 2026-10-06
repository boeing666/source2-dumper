#pragma once

class CCitadel_Modifier_MagicBeam : public CCitadelModifier /*0x0*/  // sizeof 0x420, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x138]; // offset 0x0
    CHandle< C_Citadel_Magic_Beam_Blocker > m_hBlocker; // offset 0x138, size 0x4, align 4
    ParticleIndex_t m_nParticleIndex; // offset 0x13C, size 0x4, align 255
    GameTime_t m_flStartTime; // offset 0x140, size 0x4, align 255
    char _pad_0144[0x2C4]; // offset 0x144
    QAngle m_qAngle; // offset 0x408, size 0xC, align 4
    VectorWS m_vOrigin; // offset 0x414, size 0xC, align 4
};
