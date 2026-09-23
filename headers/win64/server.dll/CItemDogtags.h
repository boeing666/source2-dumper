#pragma once

class CItemDogtags : public CItem /*0x0*/  // sizeof 0xAF0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xAE0]; // offset 0x0
    CHandle< CCSPlayerPawn > m_OwningPlayer; // offset 0xAE0, size 0x4, align 4
    CHandle< CCSPlayerPawn > m_KillingPlayer; // offset 0xAE4, size 0x4, align 4
    char _pad_0AE8[0x8]; // offset 0xAE8
};
