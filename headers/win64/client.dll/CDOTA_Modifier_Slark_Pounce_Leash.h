#pragma once

class CDOTA_Modifier_Slark_Pounce_Leash : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 leash_radius; // offset 0x1AA8, size 0x4, align 4
    VectorWS vLeashLocation; // offset 0x1AAC, size 0xC, align 4
    bool m_bEscaped; // offset 0x1AB8, size 0x1, align 1
    bool m_bFishBait; // offset 0x1AB9, size 0x1, align 1
    char _pad_1ABA[0x6]; // offset 0x1ABA
};
