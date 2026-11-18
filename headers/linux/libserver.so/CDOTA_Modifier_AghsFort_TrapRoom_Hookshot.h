#pragma once

class CDOTA_Modifier_AghsFort_TrapRoom_Hookshot : public CDOTA_Buff /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x1AF8, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1AFC, size 0xC, align 4
    char _pad_1B08[0x14]; // offset 0x1B08
    int32 speed; // offset 0x1B1C, size 0x4, align 4
    float32 duration; // offset 0x1B20, size 0x4, align 4
    char _pad_1B24[0x4]; // offset 0x1B24
};
