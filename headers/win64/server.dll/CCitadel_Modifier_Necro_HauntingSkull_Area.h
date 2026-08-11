#pragma once

class CCitadel_Modifier_Necro_HauntingSkull_Area : public CCitadelModifier /*0x0*/  // sizeof 0x3F8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    ParticleIndex_t m_hPreviewRingParticle; // offset 0xD0, size 0x4, align 255
    char _pad_00D4[0xC]; // offset 0xD4
    CUtlVector< CHandle< CBaseEntity > > m_vecDeployedSkulls; // offset 0xE0, size 0x18, align 8
    char _pad_00F8[0x300]; // offset 0xF8
};
