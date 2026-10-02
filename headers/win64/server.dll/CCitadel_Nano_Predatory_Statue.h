#pragma once

class CCitadel_Nano_Predatory_Statue : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xC70, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xC60]; // offset 0x0
    CHandle< CCitadelBaseAbility > m_hAbility; // offset 0xC60, size 0x4, align 4
    float32 m_flLifetime; // offset 0xC64, size 0x4, align 4
    char _pad_0C68[0x8]; // offset 0xC68
};
