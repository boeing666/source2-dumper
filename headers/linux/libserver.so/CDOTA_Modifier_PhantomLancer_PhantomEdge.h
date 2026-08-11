#pragma once

class CDOTA_Modifier_PhantomLancer_PhantomEdge : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 min_distance; // offset 0x1A78, size 0x4, align 4
    int32 max_distance; // offset 0x1A7C, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x1A80, size 0x4, align 4
    char _pad_1A84[0x4]; // offset 0x1A84
};
