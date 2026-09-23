#pragma once

class CItemDogtags : public CItem /*0x0*/  // sizeof 0xDC0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xDB8]; // offset 0x0
    CHandle< CCSPlayerPawn > m_OwningPlayer; // offset 0xDB8, size 0x4, align 4
    CHandle< CCSPlayerPawn > m_KillingPlayer; // offset 0xDBC, size 0x4, align 4
};
