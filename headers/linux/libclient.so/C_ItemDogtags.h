#pragma once

class C_ItemDogtags : public C_Item /*0x0*/  // sizeof 0x28B0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x28A8]; // offset 0x0
    CHandle< C_CSPlayerPawn > m_OwningPlayer; // offset 0x28A8, size 0x4, align 4
    CHandle< C_CSPlayerPawn > m_KillingPlayer; // offset 0x28AC, size 0x4, align 4
};
