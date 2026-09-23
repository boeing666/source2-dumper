#pragma once

class C_CSWeaponBaseGun : public C_CSWeaponBase /*0x0*/  // sizeof 0x2DC0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x2D98]; // offset 0x0
    int32 m_zoomLevel; // offset 0x2D98, size 0x4, align 4
    int32 m_iBurstShotsRemaining; // offset 0x2D9C, size 0x4, align 4
    int32 m_iSilencerBodygroup; // offset 0x2DA0, size 0x4, align 4
    char _pad_2DA4[0xC]; // offset 0x2DA4
    int32 m_silencedModelIndex; // offset 0x2DB0, size 0x4, align 4
    bool m_inPrecache; // offset 0x2DB4, size 0x1, align 1
    bool m_bNeedsBoltAction; // offset 0x2DB5, size 0x1, align 1
    char _pad_2DB6[0x2]; // offset 0x2DB6
    int32 m_nRevolverCylinderIdx; // offset 0x2DB8, size 0x4, align 4
    char _pad_2DBC[0x4]; // offset 0x2DBC
};
