#pragma once

class CCitadelBaseYamatoAbility : public CCitadelBaseAbility /*0x0*/  // sizeof 0x14B0, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    float32 m_flCachedCastTime; // offset 0x14A8, size 0x4, align 4
    bool m_bIsShadowFormCast; // offset 0x14AC, size 0x1, align 1
    char _pad_14AD[0x3]; // offset 0x14AD
};
