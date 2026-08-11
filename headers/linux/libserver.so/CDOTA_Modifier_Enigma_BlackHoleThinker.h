#pragma once

class CDOTA_Modifier_Enigma_BlackHoleThinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 radius; // offset 0x1A78, size 0x4, align 4
    bool m_bFoundFive; // offset 0x1A7C, size 0x1, align 1
    bool m_bGrantedKillEater; // offset 0x1A7D, size 0x1, align 1
    char _pad_1A7E[0x1A]; // offset 0x1A7E
};
