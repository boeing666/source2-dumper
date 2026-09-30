#pragma once

class CCitadel_Modifier_Neutral_Spore_Aura : public CCitadelModifierAura /*0x0*/  // sizeof 0x180, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x178]; // offset 0x0
    bool m_bPlayedArmSound; // offset 0x178, size 0x1, align 1
    char _pad_0179[0x3]; // offset 0x179
    float32 m_flDetonateTime; // offset 0x17C, size 0x4, align 4
};
