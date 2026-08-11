#pragma once

class CCitadelBaseYamatoAbility : public CCitadelBaseAbility /*0x0*/  // sizeof 0xF78, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    float32 m_flCachedCastTime; // offset 0xF70, size 0x4, align 4
    bool m_bIsShadowFormCast; // offset 0xF74, size 0x1, align 1
    char _pad_0F75[0x3]; // offset 0xF75
};
