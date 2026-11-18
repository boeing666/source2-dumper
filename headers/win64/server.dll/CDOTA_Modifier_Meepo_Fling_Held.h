#pragma once

class CDOTA_Modifier_Meepo_Fling_Held : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    QAngle m_qOriginalAngle; // offset 0x1AF8, size 0xC, align 4
    CHandle< CBaseEntity > m_hFrame; // offset 0x1B04, size 0x4, align 4
};
