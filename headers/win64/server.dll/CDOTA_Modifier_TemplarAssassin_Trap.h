#pragma once

class CDOTA_Modifier_TemplarAssassin_Trap : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1B08]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecTriggers; // offset 0x1B08, size 0x18, align 8
    float32 bonus_vision; // offset 0x1B20, size 0x4, align 4
    char _pad_1B24[0x4]; // offset 0x1B24
};
