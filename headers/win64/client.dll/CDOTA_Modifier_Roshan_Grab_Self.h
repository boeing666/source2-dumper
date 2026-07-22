#pragma once

class CDOTA_Modifier_Roshan_Grab_Self : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CHandle< C_DOTA_BaseNPC > m_hTarget; // offset 0x1A58, size 0x4, align 4
    VectorWS m_vPulverizeCenter; // offset 0x1A5C, size 0xC, align 4
    VectorWS m_vCasterStartPos; // offset 0x1A68, size 0xC, align 4
    float32 interval; // offset 0x1A74, size 0x4, align 4
};
