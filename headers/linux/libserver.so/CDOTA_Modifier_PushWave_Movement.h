#pragma once

class CDOTA_Modifier_PushWave_Movement : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CHandle< CBaseEntity > m_hWave; // offset 0x1AA8, size 0x4, align 4
    Vector m_vDirection; // offset 0x1AAC, size 0xC, align 4
    int32 wave_movespeed; // offset 0x1AB8, size 0x4, align 4
    char _pad_1ABC[0x4]; // offset 0x1ABC
};
