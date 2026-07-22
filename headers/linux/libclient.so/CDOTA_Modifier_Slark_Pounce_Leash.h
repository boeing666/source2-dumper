#pragma once

class CDOTA_Modifier_Slark_Pounce_Leash : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 leash_radius; // offset 0x1A58, size 0x4, align 4
    VectorWS vLeashLocation; // offset 0x1A5C, size 0xC, align 4
    bool m_bEscaped; // offset 0x1A68, size 0x1, align 1
    bool m_bFishBait; // offset 0x1A69, size 0x1, align 1
    char _pad_1A6A[0x6]; // offset 0x1A6A
};
