#pragma once

class CDOTA_Modifier_Roshan_Grab_Self : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CHandle< CDOTA_BaseNPC > m_hTarget; // offset 0x1AA8, size 0x4, align 4
    VectorWS m_vPulverizeCenter; // offset 0x1AAC, size 0xC, align 4
    VectorWS m_vCasterStartPos; // offset 0x1AB8, size 0xC, align 4
    float32 interval; // offset 0x1AC4, size 0x4, align 4
};
