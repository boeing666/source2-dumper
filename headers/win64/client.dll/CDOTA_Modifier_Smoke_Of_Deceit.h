#pragma once

class CDOTA_Modifier_Smoke_Of_Deceit : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AB8]; // offset 0x0
    int32 bonus_movement_speed; // offset 0x1AB8, size 0x4, align 4
    int32 visibility_radius; // offset 0x1ABC, size 0x4, align 4
    int32 secondary_application_radius; // offset 0x1AC0, size 0x4, align 4
    char _pad_1AC4[0x4]; // offset 0x1AC4
};
