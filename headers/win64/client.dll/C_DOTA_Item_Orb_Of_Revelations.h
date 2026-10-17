#pragma once

class C_DOTA_Item_Orb_Of_Revelations : public C_DOTA_Item /*0x0*/  // sizeof 0x780, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CountdownTimer m_ViewerTimer; // offset 0x760, size 0x18, align 8
    int32 m_iProjectile; // offset 0x778, size 0x4, align 4
    char _pad_077C[0x4]; // offset 0x77C
};
