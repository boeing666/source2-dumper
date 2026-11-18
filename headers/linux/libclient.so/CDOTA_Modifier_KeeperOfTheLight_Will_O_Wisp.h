#pragma once

class CDOTA_Modifier_KeeperOfTheLight_Will_O_Wisp : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 fixed_movement_speed; // offset 0x1AF8, size 0x4, align 4
    VectorWS m_vSource; // offset 0x1AFC, size 0xC, align 4
};
