#pragma once

class CCitadelBaseYamatoAbility : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x11E0, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    float32 m_flCachedCastTime; // offset 0x11D8, size 0x4, align 4
    bool m_bIsShadowFormCast; // offset 0x11DC, size 0x1, align 1
    char _pad_11DD[0x3]; // offset 0x11DD
};
