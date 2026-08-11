#pragma once

class CCitadel_Modifier_MagicBeam : public CCitadelModifier /*0x0*/  // sizeof 0x328, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    CHandle< CCitadel_Magic_Beam_Blocker > m_hBlocker; // offset 0xD0, size 0x4, align 4
    ParticleIndex_t m_nParticleIndex; // offset 0xD4, size 0x4, align 255
    GameTime_t m_flStartTime; // offset 0xD8, size 0x4, align 255
    char _pad_00DC[0x204]; // offset 0xDC
    QAngle m_qAngle; // offset 0x2E0, size 0xC, align 4
    Vector m_vOrigin; // offset 0x2EC, size 0xC, align 4
    char _pad_02F8[0x30]; // offset 0x2F8
};
