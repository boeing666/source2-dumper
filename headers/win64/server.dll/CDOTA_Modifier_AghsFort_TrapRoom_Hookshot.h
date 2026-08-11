#pragma once

class CDOTA_Modifier_AghsFort_TrapRoom_Hookshot : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x1A78, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1A7C, size 0xC, align 4
    char _pad_1A88[0x14]; // offset 0x1A88
    int32 speed; // offset 0x1A9C, size 0x4, align 4
    float32 duration; // offset 0x1AA0, size 0x4, align 4
    char _pad_1AA4[0x4]; // offset 0x1AA4
};
