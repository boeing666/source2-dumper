#pragma once

class CCitadel_Modifier_Feared : public CCitadelModifier /*0x0*/  // sizeof 0x150, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x130]; // offset 0x0
    VectorWS m_vecFearLocation; // offset 0x130, size 0xC, align 4
    CHandle< C_BaseEntity > m_hFearEntity; // offset 0x13C, size 0x4, align 4
    Vector m_vecFleeDirection; // offset 0x140, size 0xC, align 4
    GameTime_t m_flLastFleeDirectionChange; // offset 0x14C, size 0x4, align 255
};
