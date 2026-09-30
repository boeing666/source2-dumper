#pragma once

class CCitadel_Modifier_Necro_HauntingSkull_Area : public CCitadelModifier /*0x0*/  // sizeof 0x588, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    ParticleIndex_t m_hPreviewRingParticle; // offset 0x140, size 0x4, align 255
    char _pad_0144[0xC]; // offset 0x144
    CUtlVector< CHandle< CBaseEntity > > m_vecDeployedSkulls; // offset 0x150, size 0x18, align 8
    char _pad_0168[0x420]; // offset 0x168
};
