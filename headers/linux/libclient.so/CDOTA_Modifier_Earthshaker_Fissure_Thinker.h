#pragma once

class CDOTA_Modifier_Earthshaker_Fissure_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 free_pathing_linger_duration; // offset 0x1AF8, size 0x4, align 4
    bool free_pathing_all_allies; // offset 0x1AFC, size 0x1, align 1
    char _pad_1AFD[0x3]; // offset 0x1AFD
    CUtlVector< CHandle< C_BaseEntity > > m_vecAllies; // offset 0x1B00, size 0x18, align 8
};
