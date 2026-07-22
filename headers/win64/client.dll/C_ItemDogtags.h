#pragma once

class C_ItemDogtags : public C_Item /*0x0*/  // sizeof 0x17F8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x17F0]; // offset 0x0
    CHandle< C_CSPlayerPawn > m_OwningPlayer; // offset 0x17F0, size 0x4, align 4
    CHandle< C_CSPlayerPawn > m_KillingPlayer; // offset 0x17F4, size 0x4, align 4
};
