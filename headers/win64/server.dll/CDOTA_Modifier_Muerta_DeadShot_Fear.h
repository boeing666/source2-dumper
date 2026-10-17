#pragma once

class CDOTA_Modifier_Muerta_DeadShot_Fear : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    Vector m_vFearDir; // offset 0x1AA8, size 0xC, align 4
    char _pad_1AB4[0x4]; // offset 0x1AB4
};
