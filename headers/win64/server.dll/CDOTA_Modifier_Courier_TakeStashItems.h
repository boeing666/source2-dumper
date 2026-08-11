#pragma once

class CDOTA_Modifier_Courier_TakeStashItems : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CHandle< CBaseEntity > m_hStashOwner; // offset 0x1A78, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x1A7C, size 0x4, align 4
    VectorWS m_vLocation; // offset 0x1A80, size 0xC, align 4
    bool m_bTransferAfterTake; // offset 0x1A8C, size 0x1, align 1
    char _pad_1A8D[0x3]; // offset 0x1A8D
};
