#pragma once

class CCitadel_Modifier_IdolReturnTimer : public CCitadelModifier /*0x0*/  // sizeof 0x150, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    VectorWS m_vGroundOrigin; // offset 0x140, size 0xC, align 4
    CHandle< CBaseEntity > m_hTrigger; // offset 0x14C, size 0x4, align 4
};
