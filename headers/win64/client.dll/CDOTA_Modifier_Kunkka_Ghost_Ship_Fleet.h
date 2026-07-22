#pragma once

class CDOTA_Modifier_Kunkka_Ghost_Ship_Fleet : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    VectorWS vCasterOrigin; // offset 0x1A58, size 0xC, align 4
    VectorWS vEnd; // offset 0x1A64, size 0xC, align 4
    int32 hitcount; // offset 0x1A70, size 0x4, align 4
    int32 fleet_count; // offset 0x1A74, size 0x4, align 4
};
