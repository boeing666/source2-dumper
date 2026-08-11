#pragma once

class CDOTA_Modifier_LoneDruid_SpiritBear_Fetch : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 tick_rate; // offset 0x1A78, size 0x4, align 4
    int32 drag_distance; // offset 0x1A7C, size 0x4, align 4
    int32 break_distance; // offset 0x1A80, size 0x4, align 4
    VectorWS vPreviousLocation; // offset 0x1A84, size 0xC, align 4
    CHandle< CDOTA_BaseNPC > m_hAnchor; // offset 0x1A90, size 0x4, align 4
    char _pad_1A94[0x4]; // offset 0x1A94
};
