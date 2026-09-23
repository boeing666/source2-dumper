#pragma once

class C_ItemDogtags : public C_Item /*0x0*/  // sizeof 0x1A20, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1A18]; // offset 0x0
    CHandle< C_CSPlayerPawn > m_OwningPlayer; // offset 0x1A18, size 0x4, align 4
    CHandle< C_CSPlayerPawn > m_KillingPlayer; // offset 0x1A1C, size 0x4, align 4
};
