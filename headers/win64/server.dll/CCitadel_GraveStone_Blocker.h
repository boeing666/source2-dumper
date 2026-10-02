#pragma once

class CCitadel_GraveStone_Blocker : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xC70, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xC40]; // offset 0x0
    CCitadelMinimapComponent m_CCitadelMinimapComponent; // offset 0xC40, size 0x20, align 255
    CHandle< CCitadelBaseAbility > m_hAbility; // offset 0xC60, size 0x4, align 4
    int32 m_iGravestoneState; // offset 0xC64, size 0x4, align 4
    float32 m_flLifetime; // offset 0xC68, size 0x4, align 4
    char _pad_0C6C[0x4]; // offset 0xC6C
};
