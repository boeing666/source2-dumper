#pragma once

class CCitadel_Modifier_Feared : public CCitadelModifier /*0x0*/  // sizeof 0x160, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    VectorWS m_vecFearLocation; // offset 0x140, size 0xC, align 4
    CHandle< CBaseEntity > m_hFearEntity; // offset 0x14C, size 0x4, align 4
    Vector m_vecFleeDirection; // offset 0x150, size 0xC, align 4
    GameTime_t m_flLastFleeDirectionChange; // offset 0x15C, size 0x4, align 255
};
