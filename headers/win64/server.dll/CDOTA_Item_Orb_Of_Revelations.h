#pragma once

class CDOTA_Item_Orb_Of_Revelations : public CDOTA_Item /*0x0*/  // sizeof 0x678, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x658]; // offset 0x0
    CountdownTimer m_ViewerTimer; // offset 0x658, size 0x18, align 8
    int32 m_iProjectile; // offset 0x670, size 0x4, align 4
    char _pad_0674[0x4]; // offset 0x674
};
