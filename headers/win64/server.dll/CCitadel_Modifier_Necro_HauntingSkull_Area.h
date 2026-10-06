#pragma once

class CCitadel_Modifier_Necro_HauntingSkull_Area : public CCitadelModifier /*0x0*/  // sizeof 0x590, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    ParticleIndex_t m_hPreviewRingParticle; // offset 0x148, size 0x4, align 255
    char _pad_014C[0xC]; // offset 0x14C
    CUtlVector< CHandle< CBaseEntity > > m_vecDeployedSkulls; // offset 0x158, size 0x18, align 8
    char _pad_0170[0x420]; // offset 0x170
};
