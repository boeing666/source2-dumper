#pragma once

class CCitadel_Modifier_HoldingGoldenIdol : public CCitadelModifier /*0x0*/  // sizeof 0x6C0, align 0xFF [vtable] (client) {MModifierDynamicValuesSuppressCache}
{
public:
    char _pad_0000[0x6B0]; // offset 0x0
    ParticleIndex_t m_iIdolParticle; // offset 0x6B0, size 0x4, align 255
    int32 m_nGoldValue; // offset 0x6B4, size 0x4, align 4
    int32 m_nTeamBias; // offset 0x6B8, size 0x4, align 4
    bool m_bRevealed; // offset 0x6BC, size 0x1, align 1
    char _pad_06BD[0x3]; // offset 0x6BD
};
