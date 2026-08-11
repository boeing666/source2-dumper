#pragma once

class CDOTA_Modifier_Slark_Pounce_Leash : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 leash_radius; // offset 0x1A78, size 0x4, align 4
    VectorWS vLeashLocation; // offset 0x1A7C, size 0xC, align 4
    bool m_bEscaped; // offset 0x1A88, size 0x1, align 1
    bool m_bFishBait; // offset 0x1A89, size 0x1, align 1
    char _pad_1A8A[0x1E]; // offset 0x1A8A
};
