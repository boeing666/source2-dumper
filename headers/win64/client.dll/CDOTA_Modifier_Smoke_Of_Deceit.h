#pragma once

class CDOTA_Modifier_Smoke_Of_Deceit : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A68]; // offset 0x0
    int32 bonus_movement_speed; // offset 0x1A68, size 0x4, align 4
    int32 visibility_radius; // offset 0x1A6C, size 0x4, align 4
    int32 secondary_application_radius; // offset 0x1A70, size 0x4, align 4
    char _pad_1A74[0x4]; // offset 0x1A74
};
