#pragma once

class CCitadel_Modifier_Necro_HauntingSkull_Area : public CCitadelModifier /*0x0*/  // sizeof 0x598, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    ParticleIndex_t m_hPreviewRingParticle; // offset 0x150, size 0x4, align 255
    char _pad_0154[0xC]; // offset 0x154
    CUtlVector< CHandle< CBaseEntity > > m_vecDeployedSkulls; // offset 0x160, size 0x18, align 8
    char _pad_0178[0x420]; // offset 0x178
};
