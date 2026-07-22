#pragma once

class CCitadel_Modifier_Invis : public CCitadelModifier /*0x0*/  // sizeof 0x460, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x440]; // offset 0x0
    bool m_bInvis; // offset 0x440, size 0x1, align 1
    char _pad_0441[0x3]; // offset 0x441
    GameTime_t m_flStartInvisTime; // offset 0x444, size 0x4, align 255
    bool m_bFullyInvis; // offset 0x448, size 0x1, align 1
    char _pad_0449[0x3]; // offset 0x449
    GameTime_t m_flLastDamageTaken; // offset 0x44C, size 0x4, align 255
    GameTime_t m_flLastSpotted; // offset 0x450, size 0x4, align 255
    ParticleIndex_t m_nDetectionRangeRing; // offset 0x454, size 0x4, align 255
    ParticleIndex_t m_nFullInvisEffect; // offset 0x458, size 0x4, align 255
    char _pad_045C[0x4]; // offset 0x45C
};
