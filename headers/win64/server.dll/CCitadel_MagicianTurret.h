#pragma once

class CCitadel_MagicianTurret : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xC00, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xBF4]; // offset 0x0
    CHandle< CCitadelBaseAbility > m_hAbility; // offset 0xBF4, size 0x4, align 4
    char _pad_0BF8[0x8]; // offset 0xBF8
};
