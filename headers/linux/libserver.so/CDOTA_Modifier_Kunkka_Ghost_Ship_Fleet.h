#pragma once

class CDOTA_Modifier_Kunkka_Ghost_Ship_Fleet : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    VectorWS vCasterOrigin; // offset 0x1AA8, size 0xC, align 4
    VectorWS vEnd; // offset 0x1AB4, size 0xC, align 4
    int32 hitcount; // offset 0x1AC0, size 0x4, align 4
    int32 fleet_count; // offset 0x1AC4, size 0x4, align 4
};
