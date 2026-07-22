#pragma once

class CItemDogtags : public CItem /*0x0*/  // sizeof 0xA10, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA00]; // offset 0x0
    CHandle< CCSPlayerPawn > m_OwningPlayer; // offset 0xA00, size 0x4, align 4
    CHandle< CCSPlayerPawn > m_KillingPlayer; // offset 0xA04, size 0x4, align 4
    char _pad_0A08[0x8]; // offset 0xA08
};
