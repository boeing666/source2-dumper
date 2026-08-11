#pragma once

class CDOTA_Modifier_Beastmaster_Hawk_Perch_Flight : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 perch_flight_height; // offset 0x1A78, size 0x4, align 4
    int32 perch_tree_height; // offset 0x1A7C, size 0x4, align 4
    int32 flight_speed; // offset 0x1A80, size 0x4, align 4
    float32 m_flZDelta; // offset 0x1A84, size 0x4, align 4
    VectorWS m_vStart; // offset 0x1A88, size 0xC, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x1A94, size 0x4, align 4
};
