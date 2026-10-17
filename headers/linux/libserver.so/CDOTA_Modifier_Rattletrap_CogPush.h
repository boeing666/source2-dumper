#pragma once

class CDOTA_Modifier_Rattletrap_CogPush : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    GameTime_t m_flStartTime; // offset 0x1AA8, size 0x4, align 255
    Vector m_vDirection; // offset 0x1AAC, size 0xC, align 4
    float32 m_flEndTime; // offset 0x1AB8, size 0x4, align 4
    float32 m_flCurTime; // offset 0x1ABC, size 0x4, align 4
    float32 push_length; // offset 0x1AC0, size 0x4, align 4
    float32 push_duration; // offset 0x1AC4, size 0x4, align 4
};
