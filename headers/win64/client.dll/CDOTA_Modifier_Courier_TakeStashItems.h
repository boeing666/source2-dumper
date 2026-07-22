#pragma once

class CDOTA_Modifier_Courier_TakeStashItems : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CHandle< C_BaseEntity > m_hStashOwner; // offset 0x1A58, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1A5C, size 0x4, align 4
    VectorWS m_vLocation; // offset 0x1A60, size 0xC, align 4
    bool m_bTransferAfterTake; // offset 0x1A6C, size 0x1, align 1
    char _pad_1A6D[0x3]; // offset 0x1A6D
};
