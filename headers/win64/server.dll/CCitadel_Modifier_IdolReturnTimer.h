#pragma once

class CCitadel_Modifier_IdolReturnTimer : public CCitadelModifier /*0x0*/  // sizeof 0xE0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    CHandle< CBaseEntity > m_hTrigger; // offset 0xD0, size 0x4, align 4
    Vector m_vGroundOrigin; // offset 0xD4, size 0xC, align 4
};
