#pragma once

class CDOTA_Modifier_Huskar_Life_Break : public CDOTA_Modifier_MoveSpeed_Percentage /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A80]; // offset 0x0
    int32 attack_speed; // offset 0x1A80, size 0x4, align 4
    char _pad_1A84[0x4]; // offset 0x1A84
};
