#pragma once

class CCitadel_Modifier_Invis : public CCitadelModifier /*0x0*/  // sizeof 0x620, align 0xFF [vtable] (client) {MModifierDynamicValuesSuppressCache}
{
public:
    char _pad_0000[0x600]; // offset 0x0
    bool m_bInvis; // offset 0x600, size 0x1, align 1
    char _pad_0601[0x3]; // offset 0x601
    GameTime_t m_flStartInvisTime; // offset 0x604, size 0x4, align 255
    bool m_bFullyInvis; // offset 0x608, size 0x1, align 1
    char _pad_0609[0x3]; // offset 0x609
    GameTime_t m_flLastDamageTaken; // offset 0x60C, size 0x4, align 255
    GameTime_t m_flLastSpotted; // offset 0x610, size 0x4, align 255
    ParticleIndex_t m_nDetectionRangeRing; // offset 0x614, size 0x4, align 255
    ParticleIndex_t m_nFullInvisEffect; // offset 0x618, size 0x4, align 255
    char _pad_061C[0x4]; // offset 0x61C
};
