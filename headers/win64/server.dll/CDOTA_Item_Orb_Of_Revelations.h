#pragma once

class CDOTA_Item_Orb_Of_Revelations : public CDOTA_Item /*0x0*/  // sizeof 0x680, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x660]; // offset 0x0
    CountdownTimer m_ViewerTimer; // offset 0x660, size 0x18, align 8
    int32 m_iProjectile; // offset 0x678, size 0x4, align 4
    char _pad_067C[0x4]; // offset 0x67C
};
